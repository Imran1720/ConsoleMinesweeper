#include "GameLoop.h"

using namespace Main;

int main()
{
	GameLoop* game_loop = new GameLoop();

	game_loop->Play();

	delete game_loop;

	return 0;
}