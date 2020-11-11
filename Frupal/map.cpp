#include<ncurses.h>
#include "map.h"

#define MapLength 32

map::map(){
	height = MapLength;
	width = MapLength;
	start_x = (COLS*3/4 - MapLength)/2;
       	start_y = (LINES - MapLength)/2;	
}
	
	
void map:: draw(){
	
	
	WINDOW* game_map = newwin(height, width, start_y, start_x);
	int c = ' ';
	wborder(game_map,c,c,c,c,c,c,c,c);
	wrefresh(game_map);

	start_color();
	init_pair(1, COLOR_GREEN, COLOR_GREEN);

	wattron(game_map, COLOR_PAIR(1));
	for(int i=1; i<height-1; ++i)
	       for(int j=1; j<width-1; ++j)
	       		mvwaddch(game_map, i, j, ' ');
	wattroff(game_map, COLOR_PAIR(1));

	wrefresh(game_map);
//	wgetch(game_map);
	
	init_pair(2, COLOR_YELLOW, COLOR_RED);
	chtype H = '@' | COLOR_PAIR(2);
	
	mvwaddch(game_map, HERO.get_y(), HERO.get_x(), H);
	wrefresh(game_map);	
//	wgetch(game_map);
}


void map:: menu(){
	
	WINDOW* menu = newwin(LINES, COLS/4, 0, COLS*3/4);
	int c = ' ';
	int w = '#';
	wborder(menu, w,c,c,c,w,c,w,c);
	wrefresh(menu);
	
	int ENERGY = HERO.get_energy();
	int WHIFF = HERO.get_whiffles();
	mvwprintw(menu,LINES-2, 1, " Energy: %d",ENERGY);
       	mvwprintw(menu,LINES-1, 1, " whiffles: %d", WHIFF);
	wrefresh(menu);
	wgetch(menu);	
}
