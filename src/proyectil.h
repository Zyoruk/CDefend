/*
 * proyectil.h
 *
 *  Created on: Aug 9, 2014
 *      Author: zyoruk
 */

#ifndef PROYECTIL_H_
#define PROYECTIL_H_
#include "parentObjectInterface.h"
class proyectil : public parentObjectInterface{
	int currentX;
	int currentY;
	int width;
//Methods
public:
	proyectil();
	~proyectil();

	void move(int pDestinyX, int pDestinyY);
	void setWide(int pWide);
};




#endif /* PROYECTIL_H_ */
