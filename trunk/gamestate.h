#ifndef GAMESTATE_H
#define GAMESTATE_H

class GameState{
public:
	virtual void enter() = 0;
	virtual void exit() = 0;
	void run();
protected:
	virtual void update() = 0;
	virtual void render() = 0;
};

#endif