#include "MagicHammer.h"

double MagicHammer::hit(double armor) {
	double damage;
	if (armor > 20) {
		 damage = hitPoints + armor - (armor * 0.8);
	}
	else {
		 damage = hitPoints - (armor * 0.8);
	}
	if (damage < 0) {
		return 0;
	}
	return damage;
}
