#include "textgame.h"
#include "playstate.h"
#include <cassert>

TextGame::TextGame() : currentState_(Starting){
	gameStates_[Play] = new PlayState();
	setState( Play );
}

TextGame::~TextGame(){
	for ( int i = 0 ; i != NumberOfStates ; ++i ){
		delete gameStates_[i];
	}
}


void TextGame::setState( const StateId& state ){
	assert( (state < NumberOfStates) && (state > Starting) );
	if ( currentState_ != Starting ){
		gameStates_[currentState_]->exit();
	}
	currentState_ = state;
	gameStates_[currentState_]->enter();
}

void TextGame::run(){
	gameStates_[currentState_]->run();
}
