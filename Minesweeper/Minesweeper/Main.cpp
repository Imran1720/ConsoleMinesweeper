#include "GameLoop.h"
#include <iostream>
using namespace Main;

int main()
{
	GameLoop* game_loop = new GameLoop();

	game_loop->LoadInstructions();

	if (game_loop->WaitForPlayerReady())
	{
		while (game_loop->IsGameRunning())
		{
			game_loop->Play();
		}
	}

	game_loop->HandleGameOver();

	delete game_loop;

	return 0;
}