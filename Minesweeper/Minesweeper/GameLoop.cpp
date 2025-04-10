#include "GameLoop.h"
#include <iostream>

using namespace std;

namespace Main
{
	GameLoop::GameLoop()
	{
		is_game_over = false;
	}

	GameLoop::~GameLoop()
	{

	}

	bool GameLoop::IsGameRunning()
	{
		return is_game_over;
	}

	void GameLoop::Play()
	{
		cout << "MINESWEEPER" << endl;
	}

	void GameLoop::Destroy()
	{

	}
}