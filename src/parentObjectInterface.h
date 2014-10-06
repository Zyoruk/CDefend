#ifndef PARENTOBJECTINTERFACE_H
#define PARENTOBJECTINTERFACE_H
#include "SimpleList.h"

class parentObjectInterface{
protected:
	int resistance;
	int healthpoints;
	int height;
	int width;
    SimpleList<int>* coords;
    int score;
private:
	void die();
public:
	int getScore();
    SimpleList<int>* getCoords();
    void setCoords(SimpleList<int>* pCoordsToSet);

};
#endif //PARENTOBJECTINTERFACE_H
