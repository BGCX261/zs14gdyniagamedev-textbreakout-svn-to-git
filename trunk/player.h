#ifndef PLAYER_H
#define PLAYER_H

#include "gameobject.h"

class Player : public GameObject{
public:
	Player( const int& x, const int& y );
	void render();
	void update();
};

#endif