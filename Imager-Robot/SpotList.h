#include <string>
#include <vector>

using namespace std;

typedef struct spot_header* spot;

struct spot_header {
	float x;
	float y;
	string tip;
	bool eluted;
};

//IMPORTANT: Spots are 1-indexed

class SpotList {
    vector<spot> spots;
    public:
        void add_spot(float x, float y, string tip); //adds a spot to the list
        void remove_spot(int n); //removes spot n from list
        void set_tip(int n, string tip); //changes the tip of spot n to tip
        void elute(int n); //marks spot n as eluted

        vector<spot> spots_in_tip(string tip); //returns a vector of the spots in a certain tip
        vector<spot> not_eluted(); //returns vector of spots not yet eluted
        
        string spot_rep(int n); //returns string representation of spot n
        bool is_eluted(int n); //returns whether or not spot n is eluted
};