#include "MyForm.h"
#include "Draw.h"
#include <string>
#include <vector>

using namespace System;
using namespace System::Windows::Forms;

void main() {
	
	SerialPort^ XCPort = XCarve_init();

	//vector<string> commands = {"M 30 10", "D", "M 10 20", "M 30 30", "U", "M 15 40", "D", "M 25 50", "U", "M 25 40", "D", "M 15 50", "U", "M 15 60", "D", "M 20 70", "M 25 60", "U", "M 20 70", "D", "M 20 80", "U", "M 15 90", "D", "M 25 100", "U", "M 25 90", "D", "M 15 100", "U", "M 30 110", "D", "M 10 120", "M 30 130", "U", "M 0 0"};
	vector<string> commands = { "M 95 70", "D", "M 95 75", "U", "M 100 70", "D", "M 100 75.5", "U", "M 105 70", "D", "M 105 76", "U" };
	XCarve_draw(commands, commands.size(), XCPort);

	//don't need XCPort anymore
	delete XCPort;

	//ImagerRobot::MyForm form;
	//Application::Run(%form);
}