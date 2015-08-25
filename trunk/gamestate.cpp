#include "gamestate.h"
#include <windows.h>
#include <iostream>

using namespace std;

void GameState::run(){
	DWORD tm_start		= GetTickCount();
	DWORD tm_ellapsed	= 0;
	while( true ){
		update();
		render();
		while ( tm_ellapsed < 20 ){
			tm_ellapsed = GetTickCount() - tm_start;
		}
		tm_start = GetTickCount();
		tm_ellapsed = 0;
	}
}
