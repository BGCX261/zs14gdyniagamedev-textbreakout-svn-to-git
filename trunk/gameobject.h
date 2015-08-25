#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H


class GameObject{
public:
	int x_, y_;
	virtual void update() = 0;
	virtual void render() = 0;
};

#endif