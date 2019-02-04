#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
	int temp = (int)(armor * 0.33) - 2;
	armor = armor - (double)(rand() % temp + 2);
	double damage = hitPoints - (armor);
	if (damage < 0) {
		return 0;
	}
	return damage;
}
