/*
 * weapon.h
 *
 *  Created on: Aug 9, 2014
 *      Author: zyoruk
 */

#ifndef WEAPON_H_
#define WEAPON_H_

#include "proyectil.cpp"
#include "SimpleList.h"
class weapon {
private:
	int attackDamage;
	int attackSpeed;
	int width;
    SimpleList<int>* currentShipLocation;
	void updateValues();
    SimpleList<int>* getShipLocation;
public :
	weapon();
	~weapon();
    void shoot(SimpleList<int>* pWhereToShoot);

};


#endif /* WEAPON_H_ */
