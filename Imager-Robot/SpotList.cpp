#include "SpotList.h"
#include <cassert>

#include <iostream>

void SpotList::add_spot(float x, float y, string tip) { //adds a spot to the list
    spot newspot = new spot_header;
	newspot->x = x;
	newspot->y = y;
	newspot->tip = tip;
	newspot->eluted =   false;
	spots.push_back(newspot);
}

void SpotList::remove_spot(int n) { //removes spot n from list (spots are 1-indexed)
	assert(1 <= n && n <= (int)spots.size()); //must be a valid spot number
	int index = n - 1;
    spot to_remove = spots[index];
	spots.erase(spots.begin() + index);
    delete to_remove;
}
void SpotList::set_tip(int n, string tip) { //changes the tip of spot n to tip
	assert(1 <= n && n <= (int)spots.size()); //must be a valid spot number
	int index = n - 1;
	spots[index]->tip = tip;
}
void SpotList::elute(int n) { //marks spot n as eluted
	assert(1 <= n && n <= (int)spots.size()); //must be a valid spot number
	int index = n - 1;
	spots[index]->eluted = true;
}

int SpotList::num_spots() { //returns number of spots
    return (int)spots.size();
}

vector<spot> SpotList::spots_in_tip(string tip) { //returns a vector of the spots in a certain tip
	vector<spot> in_tip;
	for (int i = 0; i < (int)spots.size(); i++){
		if (spots[i]->tip == tip) {
			in_tip.push_back(spots[i]);
		}
	}
	return in_tip;
}
vector<spot> SpotList::not_eluted() { //returns vector of spots not yet eluted
	vector<spot> not_eluted;
	for (int i = 0; i < (int)spots.size(); i++){
		if (!spots[i]->eluted) {
			not_eluted.push_back(spots[i]);
		}
	}
	return not_eluted;
}

string SpotList::spot_rep(int n) { //returns string representation of spot n
	assert(1 <= n && n <= (int)spots.size()); //must be a valid spot number
	int index = n - 1;
	string e = "-";
	if (spots[index]->eluted) {
		e = "+";
	}
	return "Spot " + to_string(n) + " (" + spots[index]->tip + ")" + " " + e;
}

bool SpotList::is_eluted(int n) { //returns whether or not spot n is eluted
	assert(1 <= n && n <= (int)spots.size()); //must be a valid spot number
	int index = n - 1;
	return spots[index]->eluted;
}

int main() {
    return 0;
}