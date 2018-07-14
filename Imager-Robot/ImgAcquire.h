#include "master.h"  
#include "pvcam.h"
#include "pvcam_helper_color.h"
#include "opencv2/opencv.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/core/mat.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/photo/photo.hpp"

using namespace std;

class ImgAcquire{
	char cam_name[CAM_NAME_LEN]; //camera name will go here
	int16 hcam = 0; //camera handle will go here

	uns16 x_size = 2688;
	uns16 y_size = 2200;

	uns16 bin = 1; //dimensions of image, and binning

	rgn_type region;

	uns32 size; //will contain number of bytes in pixel stream

	uns32 byte_count;

	void* frame; //this will contain the image

	int16 status; //track status of exposure

	public: 
		void init(); //sets cam_name and hcam
		void AcquireOne(int exp); //take one image, exposure time in ms
};