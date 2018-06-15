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

SpotList::SpotList(string* error) {
	err = error;
	return;
}

void SpotList::add_spot(float x, float y, string tip) { //adds a spot to the list
    *err = ""; //clear error message
    if (!valid_coords(x,y) || !valid_tip(tip)) { //if any argument is invalid
    	*err = "Spot is invalid.";
    	return;
    }

    spot newspot = new spot_header;
	newspot->x = x;
	newspot->y = y;
	newspot->tip = tip;
	newspot->eluted = false;
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

	//test add_spot invalid
	SL.add_spot(150,50,"A1");
	cout << "ERROR: " << err << endl;
	cout << to_string(SL.num_spots()) << " spots" << endl;
	SL.add_spot(50,50,"A1");
	cout << "ERROR: " << err << endl;
	cout << to_string(SL.num_spots()) << " spots" << endl;

	SL.elute(2);
	cout << "ERROR: " << err << endl; 

    return 0;
}*/