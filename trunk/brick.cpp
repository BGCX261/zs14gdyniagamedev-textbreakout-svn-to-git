#include "brick.h"
#include <windows.h>
#include <iostream>

using namespace std;

Brick::Brick(const int& i){
	x_ = (i * 9 + 1);
	y_ = 1;
}

void Brick::render(){
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD Position;	
	Position.X = x_;
	Position.Y = y_;
	SetConsoleCursorPosition(hOut,
                             Position);
	SetConsoleTextAttribute(hOut,
                            FOREGROUND_INTENSITY);
	cout << "_______";
}

void Brick::update(){
}
