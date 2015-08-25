#include "playstate.h"
#include <iostream>
#include "player.h"
#include "brick.h"
#include "ball.h"
#include <windows.h>

using namespace std;

PlayState::PlayState(){
	player_ = new Player(20, 20);
	ball_ = new Ball(5, 5, .5f);

	for ( int i = 0; i != NUM_BRICKS; ++i ){
		NPCs_[i] = new Brick(i);
	}
}

PlayState::~PlayState(){
	delete player_;
	for ( int i = 0; i != NUM_BRICKS; ++i ){
		delete NPCs_[i];
	}
}

void PlayState::enter(){

}

void PlayState::exit(){

}

void PlayState::update(){
	if ( (bool)GetAsyncKeyState( VK_LEFT ) ){
		player_->x_--;
	}
	if ( (bool)GetAsyncKeyState( VK_RIGHT ) ){
		player_->x_++;
	}

	player_->update();	
	ball_->update();
	for ( int i = 0; i != NUM_BRICKS; ++i ){
		NPCs_[i]->update();
	}

	// collision detection

}

void PlayState::render(){
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD Position;
	system("cls");
	player_->render();
	ball_->render();
	for ( int i = 0; i != NUM_BRICKS; ++i ){
		NPCs_[i]->render();
	}
}

