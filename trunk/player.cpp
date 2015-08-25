#include "player.h"
#include <windows.h>
#include <iostream>

using namespace std;

Player::Player( const int& x, const int& y ){
	x_ = x;
	y_ = y;
}

void Player::render(){
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD Position;	
	Position.X = x_;
	Position.Y = y_;
	SetConsoleCursorPosition(hOut,
                             Position);
	SetConsoleTextAttribute(hOut,
                            FOREGROUND_RED);
	cout << "_____";
}

void Player::update(){
}