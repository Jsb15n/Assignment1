#include <string>
#include<cstdlib> 
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a Crazy Random Sword (hitpoint =  7 - 100, rand armor penetration)
 */
class CrazyRandomSword : public Weapon {
public:

	CrazyRandomSword();

	virtual ~CrazyRandomSword() {};

	virtual double hit(double armor);

};

#endif 