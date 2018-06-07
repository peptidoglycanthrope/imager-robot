#include "Draw.h"

using namespace System::IO::Ports;
using namespace System;
using namespace std;

const double ORI_X = 13;
const double ORI_Y = 2;
const double ORI_Z = 65.75;

void XCarve_run(vector<string> instr, int size, SerialPort^ XCPort){
	for (int i = 0; i < size; i++){
		String^ next = gcnew String(instr[i].c_str());
		XCPort->Write(next);
		XCPort->ReadLine(); //wait for response, then send next instruction. not doing this breaks something (buffer overflow, maybe?)
	}
}

SerialPort^ XCarve_init() {                   //TODO: Error handling
	//initialize the port
	SerialPort^ XCPort;
	XCPort = gcnew SerialPort();

	//give it the right settings (no parity check is the default)
	XCPort->PortName = "COM3";
	XCPort->BaudRate = 115200;
	XCPort->DataBits = 8;
	XCPort->StopBits = StopBits::One;
	XCPort->Handshake = Handshake::XOnXOff;

	XCPort->Open(); //open the port

	XCPort->Write("\n"); //wakeup message

	return XCPort;
}

bool move_parse(string move, int* x, int* y){ //Parses instruction in format "M a b", sets *x=a *y=b, returns false if something goes wrong
	int xstart = move.find(" ") + 1; //index of the first character of the x position
	if (xstart == 0) { return false; } //this means that xstart = -1 + 1, so nothing was found

	string x_y = move.substr(xstart, move.length() - xstart); //x_y = "a b"

	int ystart = x_y.find(" ") + 1;
	if (ystart == 0) { return false; }

	string xstr = x_y.substr(0, ystart - 1);
	string ystr = x_y.substr(ystart, x_y.length() - ystart);

	*x = stoi(xstr, nullptr); //parses the x and y values
	*y = stoi(ystr, nullptr);

	return true;
}

void XCarve_draw(vector<string> draw, int size, SerialPort^ XCPort){
	//going to assume the unlocking, homing, and zeroing is done in this function and is not specified by the user
	vector<string> grbls = { "$X\n", "$H\n" }; //unlock home zero

	string zero = "G91 G0 X" + to_string(ORI_X) + " Y" + to_string(ORI_Y) + " Z" + to_string(ORI_Z) + "\n";
	grbls.push_back(zero);

	bool down = false;
	int x = 0;
	int y = 0;

	//TODO: Upper bound checking


	for (int i = 0; i < size; i++){
		if (draw[i] == "U"){
			if (down){
				grbls.push_back("G91 G0 Z-20\n");
				down = false;
			}
		}
		else if (draw[i] == "D")
		{
			if (!down){
				grbls.push_back("G91 G0 Z20\n");
				down = true;
			}
		}
		else if (draw[i][0] == 'M'){ //in the format M a b
			int newx;
			int newy;

			bool parsed = move_parse(draw[i], &newx, &newy); //is true if properly parsed

			if (parsed && newx >= 0 && newy >= 0){
				int xdist = newx - x;
				int ydist = newy - y;

				string message = "G91 G0 X" + to_string(xdist) + " Y" + to_string(ydist) + "\n";
				grbls.push_back(message);

				x = newx;
				y = newy;
			}
		}
	}
	XCarve_run(grbls, grbls.size(), XCPort); //run the commands you wrote
}