#include "CrazyRandomSword.h"
#include <time.h>

CrazyRandomSword::CrazyRandomSword() : Weapon("Crazy Random Sword", 0.0) {
	srand(time(NULL));
	this->hitPoints=(double)(rand() % 93 + 7);  //Calls Weapon(name, hitpoints) constructor with values Crazy Random Sword and rand value
}

double CrazyRandomSword::hit(double armor) {
	srand(time(NULL));
	int temp = (int)(armor * 0.33) - 2;
	armor = armor - (double)(rand() % temp + 2);
	double damage = hitPoints - (armor);
	if (damage < 0) {
		return 0;
	}
	return damage;
}
