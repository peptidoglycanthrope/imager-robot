#include "master.h"
#include "pvcam.h"
//#include "pvcam_helper_color.h"
/*
#include "opencv.hpp"
#include "core.hpp"
#include "highgui.hpp"
#include "imgproc.hpp"
#include "photo.hpp"
*/
#include <string>
#include <assert.h>
using namespace std;

class ImgAcquire{
	char cam_name[CAM_NAME_LEN]; //camera name will go here
	int16 hcam; //camera handle will go here

	uns16 x_max = 2688;
	uns16 y_max = 2200;
	uns16 bin = 1; //dimensions of image, and binning

	rgn_type region;

	uns32 size; //will contain number of bytes in pixel stream

	void* frame; //this will contain the image

	int16* status; //track status of exposure

	public: 
		void init(); //sets cam_name and hcam
		void AcquireOne(int exp); //take one image, exposure time in ms
};