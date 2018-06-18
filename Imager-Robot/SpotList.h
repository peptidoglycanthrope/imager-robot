#include <string>
#include <vector>

using namespace std;

typedef struct spot_header* spot;
typedef struct zoom_header* zoom;

struct spot_header {
	float x;
	float y;
	string tip;
	bool eluted;
    zoom area;
};

struct zoom_header {
    float x;
    float y;
    float side;
};

//IMPORTANT: Spots are 1-indexed

class SpotList {
    vector<spot> spots;
    string* err; //used for error reporting
    private:
        bool valid_num(int n); //true if spot number is valid
    public:
        SpotList(string* error);

        void add_spot(float x, float y, string tip, float z_x, float z_y, float z_side); //adds a spot to the list at position (x,y) with a zoom area centered at (z_x, z_y) with side length z_side
        void remove_spot(int n); //removes spot n from list
        void set_tip(int n, string tip); //changes the tip of spot n to tip
        void elute(int n); //marks spot n as eluted

        int num_spots(); //returns number of spots

        vector<spot> spots_in_tip(string tip); //returns a vector of the spots in a certain tip
        vector<spot> not_eluted(); //returns vector of spots not yet eluted

        vector<zoom> eluted_areas(); //returns a vector of the areas around every eluted spot
        
        string spot_rep(int n); //returns string representation of spot n
        bool is_eluted(int n); //returns whether or not spot n is eluted
};