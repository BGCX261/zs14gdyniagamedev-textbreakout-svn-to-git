#ifndef BRICK_H
#define BRICK_H

#include "GameObject.h"

class Brick : public GameObject{
public:
	Brick(const int& i);
	void render();
	void update();
};

#endif