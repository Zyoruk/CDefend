/*
 * player.cpp
 *
 *  Created on: Aug 8, 2014
 *      Author: zyoruk
 */

#include "weapon.h"
#include "SimpleList.h"

class Player {
private:
    weapon* currentWeapon;
	int currentLives;
	int score;
	int remainingHealthPoints;
	int trophies;
    SimpleList<int>* currentLocation;

	void shoot();
    void move (SimpleList<int>* pWhereToMove);
    SimpleList<int>* whereAmI();
	void fly();
	void die ();
	bool didCrash();
};
