/*

#include "ImgAcquire.h"

void ImgAcquire::init(){
	pl_pvcam_init(); //initalize library
	pl_cam_get_name(0, cam_name);
	pl_cam_open(cam_name, &hcam, OPEN_EXCLUSIVE);
	
	rs_bool no_problems = pl_cam_get_diags(hcam);
	assert(no_problems);

	region.s1 = 0;
	region.s2 = x_max;
	region.sbin = bin;
	region.p1 = 0;
	region.p2 = y_max;
	region.pbin = bin;
}

void ImgAcquire::AcquireOne(int exp){
	pl_exp_setup_seq(hcam, 1, 1, &region, TIMED_MODE, (uns32)exp, &size); 

	frame = malloc(size); //allocate space for the pixel stream

	pl_exp_start_seq(hcam, frame);

	while (*status != READOUT_COMPLETE) {
		pl_exp_check_status(hcam, status, NULL);
	}
	//readout complete

	
}

*/