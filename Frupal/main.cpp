#include<ncurses.h>

#include"map.h"

int main(){
	initscr();
	cbreak();
	
	map p;

	
	p.draw();
	p.menu();		
	endwin();
	return 0;
}
