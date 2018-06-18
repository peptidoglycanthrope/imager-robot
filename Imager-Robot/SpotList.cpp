#include "SpotList.h"
#include <cassert>

#include <iostream>

//placeholder values
const float MAX_X = 100;
const float MAX_Y = 100;

//TODO
bool valid_tip(string tip) {
	//placeholder
	return true;
}

bool valid_coords(float x, float y) {
	return (0 <= x && x <= MAX_X && 0 <= y && y <= MAX_Y);
}

bool SpotList::valid_num(int n) {
	return (1 <= n && n <= (int)spots.size());
}

bool valid_zoom(float x, float y, float side) {
	if (side <= 0) {
		return false;
	}
	float half = side/2;
	if (x - half < 0 || x + half > MAX_X){ //within horizontal bounds
		return false;
	}
	if (y - half < 0 || y + half > MAX_Y){ //within vertical bounds
		return false;
	}
	return true;
}

bool same_zoom(zoom z1, zoom z2) { //true if zooms are equivalent
	return (z1->x == z2->x && z1->y == z2->y && z1->side == z2->side);
}

SpotList::SpotList(string* error) {
	err = error;
	return;
}

void SpotList::add_spot(float x, float y, string tip, float z_x, float z_y, float z_side) { //adds a spot to the list at position (x,y) with a zoom area centered at (z_x, z_y) with side length z_side
    *err = ""; //clear error message
    if (!valid_coords(x,y) || !valid_tip(tip)) { //if any argument is invalid
    	*err = "Spot is invalid.";
    	return;
    }
    if (!valid_zoom(z_x, z_y, z_side)) { //if the area given is invalid
    	*err = "Zoom area is invalid.";
    	return;
    }

    zoom newzoom = new zoom_header;
    newzoom->x = z_x;
    newzoom->y = z_y;
    newzoom->side = z_side;

    spot newspot = new spot_header;
	newspot->x = x;
	newspot->y = y;
	newspot->tip = tip;
	newspot->eluted = false;
	newspot->area = newzoom;
	spots.push_back(newspot);
	return;
}

void SpotList::remove_spot(int n) { //removes spot n from list (spots are 1-indexed)
	*err = "";
	if (!valid_num(n)) {
		*err = "Invalid spot number.";
		return;
	}

	int index = n - 1;
    spot to_remove = spots[index];
	spots.erase(spots.begin() + index);
	delete to_remove->area;
    delete to_remove;
    return;
}
void SpotList::set_tip(int n, string tip) { //changes the tip of spot n to tip
	*err = "";
	if (!valid_num(n)) {
		*err = "Invalid spot number.";
		return;
	}
	if (!valid_tip(tip)) {
		*err = "Invalid tip.";
		return;
	}

	int index = n - 1;
	spots[index]->tip = tip;
}
void SpotList::elute(int n) { //marks spot n as eluted
	*err = "";
	if (!valid_num(n)) {
		*err = "Invalid spot number.";
		return;
	}
	
	int index = n - 1;
	spots[index]->eluted = true;
}

int SpotList::num_spots() { //returns number of spots
	*err = "";

    return (int)spots.size();
}

vector<spot> SpotList::spots_in_tip(string tip) { //returns a vector of the spots in a certain tip, empty if error
	vector<spot> in_tip;

	*err = "";
	if (!valid_tip(tip)) {
		*err = "Invalid tip.";
		return in_tip;
	}

	for (int i = 0; i < (int)spots.size(); i++){
		if (spots[i]->tip == tip) {
			in_tip.push_back(spots[i]);
		}
	}
	return in_tip;
}
vector<spot> SpotList::not_eluted() { //returns vector of spots not yet eluted
	*err = "";

	vector<spot> not_eluted;
	for (int i = 0; i < (int)spots.size(); i++){
		if (!spots[i]->eluted) {
			not_eluted.push_back(spots[i]);
		}
	}
	return not_eluted;
}

vector<zoom> SpotList::eluted_areas(){ //returns a vector of the areas around every eluted spot
	*err = "";

	vector<zoom> areas;
	for (int i = 0; i < (int)spots.size(); i++){
		if (spots[i]->eluted) { //for every eluted spot
			zoom thisarea = spots[i]->area;
			bool is_new = true;
			for (int j = 0; j < (int)areas.size(); j++){ //for every area
				if (same_zoom(thisarea, areas[j])){ //if we already saw this zoom
					is_new = false;
					break;
				}
			}
			if (is_new) {
				areas.push_back(thisarea);
			}
		}
	}
	return areas;
}

string SpotList::spot_rep(int n) { //returns string representation of spot n, empty if error
	*err = "";
	if (!valid_num(n)) {
		*err = "Invalid spot number.";
		return "";
	}

	int index = n - 1;
	string e = "-";
	if (spots[index]->eluted) {
		e = "+";
	}
	return "Spot " + to_string(n) + " (" + spots[index]->tip + ")" + " " + e;
}

bool SpotList::is_eluted(int n) { //returns whether or not spot n is eluted, false if error
	*err = "";
	if (!valid_num(n)) {
		*err = "Invalid spot number.";
		return false;
	}

	int index = n - 1;
	return spots[index]->eluted;
}

/*
int main() {
	string err = "";
	SpotList SL (&err);

	//test invalid area
	SL.add_spot(50,50,"A1",10,10,50);
	cout << "ERROR: " << err << endl;
	//ERROR: Zoom area is invalid.

	SL.add_spot(50,50,"A1",50,50,10);
	
	int unique_areas;

	unique_areas = (int)SL.eluted_areas().size();
	cout << to_string(unique_areas) << " unique area(s)" << endl;
	//0 unique area(s)

	SL.elute(1);

	unique_areas = (int)SL.eluted_areas().size();
	cout << to_string(unique_areas) << " unique area(s)" << endl;
	//1 unique area(s)

	SL.add_spot(50,50,"A1",50,50,10);
	SL.elute(2);

	unique_areas = (int)SL.eluted_areas().size();
	cout << to_string(unique_areas) << " unique area(s)" << endl;
	//1 unique area(s)

	SL.add_spot(50,50,"A1",60,60,10);
	SL.elute(3);

	unique_areas = (int)SL.eluted_areas().size();
	cout << to_string(unique_areas) << " unique area(s)" << endl;
	//2 unique area(s)

    return 0;
} */