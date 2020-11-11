#include "hero.h"

hero::hero(){
	x = 1;
	y = 1;
	energy = 100;
	whiffles = 1000;
}

//het the current hero's location
int hero:: get_x(){
	return x;
}

int hero:: get_y(){
	return y;
}

int hero:: get_energy(){
	return energy;
}

int hero:: get_whiffles(){
	return whiffles;
}

//change the hero's locaiton by user
void hero:: change_x(int i){
	x = x+i;
	return;
}

void hero:: change_y(int i){
	y = y+i;
	return;
}

void hero:: change_energy(int i){
	energy = energy+i;
	return;
}

void hero:: change_whiffles(int i){
	whiffles = whiffles+i;
	return;
}
