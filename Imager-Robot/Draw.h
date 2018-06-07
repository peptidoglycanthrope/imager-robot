#include <string>
#include <vector>

using namespace System::IO::Ports;
using namespace System;
using namespace std;

SerialPort^ XCarve_init(); //prepares the XCarve for reading instructions, false if something went wrong, true otherwise
void XCarve_draw(vector<string> draw, int size, SerialPort^ XCPort); //takes in a string vector of draw instructions

/* current draw instructions
U - pen up
D - pen down
M x y - move to point (x,y)
*/