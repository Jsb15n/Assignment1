#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

 /**
  * Defines the behavior of a Simple Hammer (hitpoint = 25, if armor < 30 ignore all)
  */
class SimpleHammer : public Weapon {
public:

	SimpleHammer() : Weapon("Simple hammer", 25.0) { //Calls Weapon(name, hitpoints) constructor with values Simple Hammer and 25.0
	}

	virtual ~SimpleHammer() {};

	virtual double hit(double armor);

};

#endif 


