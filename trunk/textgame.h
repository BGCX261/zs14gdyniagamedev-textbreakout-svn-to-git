#ifndef TEXTGAME_H
#define TEXTGAME_H

class GameState;

class TextGame {
public:
	enum StateId{
		Starting,
		Play,
		NumberOfStates // always last
	};

	TextGame();
	~TextGame();

	void setState( const StateId& state );
	void run();
private:
	GameState*	gameStates_[NumberOfStates];
	StateId		currentState_;
};

#endif