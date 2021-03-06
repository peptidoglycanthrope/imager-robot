#include "MyForm.h"
#include "StrConvert.h"
#include "ImgAcquire.h"
#include "Draw.h"
#include <string>
#include <vector>

using namespace System;
using namespace System::Windows::Forms;

void main() {

	bool do_XCarve_stuff = true;
	bool do_UI_stuff = false;
	bool do_image_stuff = false;
	/*
	      .--------._
         (`--'       `-.
          `.______      `.
       ___________`__     \
    ,-'           `-.\     |
   //                \|    |\
  (`  .'~~~~~---\     \'   | |
   `-'           )     \   | |
      ,---------' - -.  `  . '
    ,'             `%`\`     |
   /                      \  |
  /     \-----.         \    `
 /|  ,_/      '-._            |
(-'  /           /            `   
,`--<           |        \     \
\ |  \         /%%             `\
 |/   \____---'--`%        \     \
 |    '           `               \
 |
  `--.__
        `---._______
                    `.
                      \
	*/

	if (do_XCarve_stuff) {
		XCarve XC;

		XC.init();

		//vector<string> commands = {"M 30 10", "D", "M 10 20", "M 30 30", "U", "M 15 40", "D", "M 25 50", "U", "M 25 40", "D", "M 15 50", "U", "M 15 60", "D", "M 20 70", "M 25 60", "U", "M 20 70", "D", "M 20 80", "U", "M 15 90", "D", "M 25 100", "U", "M 25 90", "D", "M 15 100", "U", "M 30 110", "D", "M 10 120", "M 30 130", "U", "M 0 0"};
		vector<string> commands = {};
		int loss[20] = {76, 50, 7, 21, 67, 83, 19, 79, 64, 52, 14, 2, 31, 26, 74, 82, 81, 33, 55, 62};
		for (int i = 0; i < 20; i++){
			commands.push_back("P " + to_string(loss[i]));
			commands.push_back("M 100 100");
			commands.push_back("T");
		}
		XC.draw(commands);
	}

	/* I don't need this test code anymore but it was very funny
	String^ test = gcnew String("test");
	std::string please_work = "";
	to_std_string(test, please_work);

	int heck = 0;

	if (please_work == "test"){
		heck = 1;
	}
	int x = 1 / heck;
	*/

	if (do_UI_stuff) {
		ImagerRobot::MyForm form;
		Application::Run(%form);
	}
	
	if (do_image_stuff) {
		ImgAcquire Img;

		Img.init();
		Img.AcquireOne(100);
	}
}