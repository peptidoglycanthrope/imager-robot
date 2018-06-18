//https://docs.microsoft.com/en-us/previous-versions/visualstudio/visual-studio-2013/1b4az623(v=vs.120)
#include "StrConvert.h"
#include <string>
#include <iostream>
using namespace std;
using namespace System;

void to_std_string ( String ^ s, string& os ) {
   using namespace Runtime::InteropServices;
   const char* chars = 
      (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
   os = chars;
   Marshal::FreeHGlobal(IntPtr((void*)chars));
}

int main() {
    String test = new String("oh god");
    string standard;

    to_std_string(test, standard);
    cout << standard << endl;
    return 0;
}