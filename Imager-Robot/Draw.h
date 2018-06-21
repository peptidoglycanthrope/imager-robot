#include <string>
#include <vector>

using namespace System::IO::Ports;
using namespace System;
using namespace std;

class XCarve {
    SerialPort^ XCPort;
    private:
        void run(vector<string> instr);
    public:
        void init(); //prepares the XCarve for reading instructions, false if something went wrong, true otherwise
        void draw(vector<string> draw); //takes in a string vector of draw instructions
};
/* current draw instructions
U - pen up
D - pen down
M x y - move to point (x,y)
*/