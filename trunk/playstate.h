#ifndef PLAYSTATE_H
#define PLAYSTATE_H

#include "gamestate.h"

class GameObject;

class PlayState : public GameState{
public:
	PlayState();
	~PlayState();
	void enter();
	void exit();
private:
	GameObject* player_;
	GameObject* ball_;
	static const int NUM_GAME_OBJECTS	=	50;
	static const int NUM_BRICKS			=	8;
	GameObject* NPCs_[ NUM_GAME_OBJECTS ];// non-playable characters
	void update();
	void render();
};

#endif