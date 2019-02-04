#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
	if (armor < 30) {
		armor = 0;
	}
	double damage = hitPoints - (armor);
	if (damage < 0) {
		return 0;
	}
	return damage;
}
