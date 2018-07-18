#include "Draw.h"

using namespace System::IO::Ports;
using namespace System;
using namespace std;

const float ORI_X = 13;
const float ORI_Y = 2;
const float ORI_Z = 7.5;

const float TIP_HIGH = 0;
const float TIP_MID = 45;
const float TIP_PICKUP = 65;

const float TIP0_X = 195 - ORI_X;
const float TIP0_Y = 10 - ORI_Y;
const float TIP_SPACING = 9;
//const float TIP_ELUTE = ?????

void XCarve::run(vector<string> instr){
	int size = instr.size();
	for (int i = 0; i < size; i++){
		String^ next = gcnew String(instr[i].c_str());
		XCPort->Write(next);
		delete next;
		XCPort->ReadLine(); //wait for response, then send next instruction. not doing this breaks something (buffer overflow, maybe?)
	}
}

void XCarve::init() {                   //TODO: Error handling
	//initialize the port
	XCPort = gcnew SerialPort();

	//give it the right settings (no parity check is the default)
	XCPort->PortName = "COM3";
	XCPort->BaudRate = 115200;
	XCPort->DataBits = 8;
	XCPort->StopBits = StopBits::One;
	XCPort->Handshake = Handshake::XOnXOff;

	XCPort->Open(); //open the port

	XCPort->Write("\n"); //wakeup message

	return;
}

bool move_parse(string move, float* x, float* y){ //Parses instruction in format "M a b", sets *x=a *y=b, returns false if something goes wrong
	int xstart = move.find(" ") + 1; //index of the first character of the x position
	if (xstart == 0) { return false; } //this means that xstart = -1 + 1, so nothing was found

	string x_y = move.substr(xstart, move.length() - xstart); //x_y = "a b"

	int ystart = x_y.find(" ") + 1;
	if (ystart == 0) { return false; }

	string xstr = x_y.substr(0, ystart - 1);
	string ystr = x_y.substr(ystart, x_y.length() - ystart);

	*x = stof(xstr, nullptr); //parses the x and y values
	*y = stof(ystr, nullptr);

	return true;
}

bool pickup_parse(string pickup, int* location){ //Parses instruction in format "P t", sets *location = t, returns false if something goes wrong
	int tstart = pickup.find(" ") + 1; //index of the first character of the tip slot
	if (tstart == 0) { return false; } //this means that xstart = -1 + 1, so nothing was found

	string lstr = pickup.substr(tstart, pickup.length() - tstart);

	*location = stoi(lstr);

	return true;
}

void XCarve::draw(vector<string> draw){
	int size = draw.size();
	//going to assume the unlocking, homing, and zeroing is done in this function and is not specified by the user
	vector<string> grbls = { "$X\n", "$H\n", "M4 S0\n" }; //unlock home zero, set spindle speed to 0

	string zero = "G91 G0 X" + to_string(ORI_X) + " Y" + to_string(ORI_Y) + " Z" + to_string(ORI_Z) + "\n";
	grbls.push_back(zero);

	bool has_tip = false;
	int last_tip = 0; //tip numbering: 12 * row + col
	float x = 0;
	float y = 0;
	float z = 0;

	//TODO: Upper bound checking


	for (int i = 0; i < size; i++){
		if (draw[i][0] == 'P'){ //in the format P t
			if (!has_tip){
				grbls.push_back("G91 G0 Z" + to_string(TIP_MID - z) + "\n"); //hover over tip slot
				z = TIP_MID;

				int location;

				bool parsed = pickup_parse(draw[i], &location);

				if (parsed && location >= 0 && location <= 95){
					int row = location / 12;
					int col = location % 12;

					float newx = TIP0_X + row * TIP_SPACING;
					float newy = TIP0_Y + col * TIP_SPACING;

					string message = "G91 G0 X" + to_string(newx - x) + " Y" + to_string(newy - y) + "\n";
					grbls.push_back(message); //move over tip slot

					x = newx;
					y = newy;

					grbls.push_back("G91 G0 Z" + to_string(TIP_PICKUP - z) + "\n"); //hover over tip slot
					z = TIP_PICKUP;

					has_tip = true;
					last_tip = location;
				}

			}
		}
		if (draw[i] == "D"){
			if (has_tip) {
				grbls.push_back("G91 G0 Z" + to_string(TIP_HIGH - z) + "\n"); //don't crash tip into box
				z = TIP_HIGH;

				int row = last_tip / 12;
				int col = last_tip % 12;

				float newx = TIP0_X + row * TIP_SPACING;
				float newy = TIP0_Y + col * TIP_SPACING;

				string message = "G91 G0 X" + to_string(newx - x) + " Y" + to_string(newy - y) + "\n";
				grbls.push_back(message); //move over tip slot

				x = newx;
				y = newy;

				grbls.push_back("G91 G0 Z" + to_string(TIP_MID - z) + "\n"); //hover over tip slot
				z = TIP_MID;

				grbls.push_back("S12000\n");
				grbls.push_back("G4 P.005\n");
				grbls.push_back("S0\n"); //drop tip

				has_tip = false;
			}
		}
		else if (draw[i] == "T"){ //just drop the tip, who cares
			grbls.push_back("S12000\n");
			grbls.push_back("G4 P.005\n");
			grbls.push_back("S0\n");
			
			has_tip = false;
		}
		else if (draw[i][0] == 'M'){ //in the format M a b
			if (has_tip) {
				float newx;
				float newy;

				grbls.push_back("G91 G0 Z" + to_string(TIP_HIGH - z) + "\n"); //don't crash tip into box
				z = TIP_HIGH;

				bool parsed = move_parse(draw[i], &newx, &newy); //is true if properly parsed

				if (parsed && newx >= 0 && newy >= 0){
					float xdist = newx - x;
					float ydist = newy - y;

					string message = "G91 G0 X" + to_string(xdist) + " Y" + to_string(ydist) + "\n";
					grbls.push_back(message);

					x = newx;
					y = newy;
				}
			}
		}
	}
	run(grbls); //run the commands you wrote
}