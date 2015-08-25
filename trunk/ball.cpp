#include "ball.h"
#include <windows.h>
#include <iostream>
#include <math.h>

using namespace std;

Ball::Ball(const int& x, const int& y, const float& v){
	fx_ = x_ = x;
	fy_ = y_ = y;
	vx_ = v;
	vy_ = v;
}

void Ball::render(){
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD Position;
	Position.X = x_;
	Position.Y = y_;
	SetConsoleCursorPosition(hOut,
                             Position);
	cout << "o";
}

void Ball::update(){
	fx_ += vx_;
	fy_ += vy_;
	x_ = fx_;
	y_ = fy_;
}
