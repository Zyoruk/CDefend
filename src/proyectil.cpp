/*
 * proyectil.cpp
 *
 *  Created on: Aug 8, 2014
 *      Author: zyoruk
 */
#include "parentObjectInterface.h"
#include "SimpleList.h"
#include "proyectil.h"
	proyectil :: proyectil(){
		this->width = 0;
		this->currentX = 0;
		this->currentY = 0;
	};
	proyectil :: ~proyectil(){
		this -> currentX = 0;
		this -> currentY = 0;
		this -> width = 0;
	};

	void proyectil :: move(int pDestinyX, int pDestinyY){
		this->currentX = pDestinyX;
		this->currentY = pDestinyY;
	};

	void proyectil :: setWide(int pWide){
		this->width = pWide;
	}


