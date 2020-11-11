//#include<ncurses.h>




using namespace std;

class hero{
	//Tho location of the hero
	int x;
	int y;

	//hero's energy and whiffles
	int energy;
	int whiffles;
 public:
	//define the hero's character
//	init_pair(1, COLOR_YELLOW, COLOR_RED);
//	chtype HERO = '@' | COLOR_PAIR(1);

	hero();
	
	//get the hero's location
	int get_x();
	int get_y();
	int get_energy();
	int get_whiffles();	
	//change the hero's location by user
	void change_x(int i=0);
	void change_y(int i=0);
	void change_energy(int i=0);
	void change_whiffles(int i=0);
};
