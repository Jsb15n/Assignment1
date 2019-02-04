#include <string>
#include "Weapon.h"

#ifndef MAGICHAMMER_H
#define MAGICHAMMER_H

/**
 * Defines the behavior of a Magic Hammer (hitpoint = 5, if armor > 20 add to damage dealt ignore 20 % of that armor)
 */
class MagicHammer : public Weapon {
public:

	MagicHammer() : Weapon("Nagic hammer", 5.0) { //Calls Weapon(name, hitpoints) constructor with values Magic Hammer and 5.0
	}

	virtual ~MagicHammer() {};

	virtual double hit(double armor);

};

#endif 
