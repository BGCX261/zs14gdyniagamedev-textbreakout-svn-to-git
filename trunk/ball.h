#ifndef BALL_H
#define BALL_H

#include "gameobject.h"

class Ball : public GameObject{
public:
	Ball(const int& x, const int& y, const float& v);
	float vx_, vy_;
	float fx_, fy_;
	void render();
	void update();
};

#endif