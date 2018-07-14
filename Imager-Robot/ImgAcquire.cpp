#include "ImgAcquire.h"

using namespace cv;

void ImgAcquire::init(){
	pl_pvcam_init(); //initalize library
	pl_cam_get_name(0, cam_name);
	pl_cam_open(cam_name, &hcam, OPEN_EXCLUSIVE);

	rs_bool no_problems = pl_cam_get_diags(hcam);
	assert(no_problems);
	
	//x and y are 0-indexed
	region.s1 = 0;
	region.s2 = x_size-1;
	region.sbin = bin;
	region.p1 = 0;
	region.p2 = y_size-1;
	region.pbin = bin;
}

void ImgAcquire::AcquireOne(int exp){
	pl_exp_init_seq();

	rs_bool setup = pl_exp_setup_seq(hcam, 1, 1, &region, TIMED_MODE, (uns32)exp, &size); 
	int16 aaaa = pl_error_code();

	frame = malloc(size); //allocate space for the pixel stream

	pl_exp_start_seq(hcam, frame);

	status = 0;

	while (status != READOUT_COMPLETE) {
		pl_exp_check_status(hcam, &status, &byte_count);
	}
	//readout complete

	Mat buff(Size((x_size / bin), (y_size / bin)), CV_16U, frame); //turn the pixel stream into a matrix

	vector<int> compression_params;
	compression_params.push_back(CV_IMWRITE_PNG_COMPRESSION);
	compression_params.push_back(9);

	imwrite("C:\\Users\\EluterUser\\Pictures\\pvcam test\\test.png",buff,compression_params);
}