#include "GameLoop.h"
#include <iostream>

namespace Main
{
	using namespace std;
	GameLoop::GameLoop()
	{
		is_game_over = false;
		game_intro = new GameInstructions();
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
		game_intro->LoadInstructions();

		cout << "\n\nWhen you are ready to play, please input S or s :" << endl;
		char choice;
		cin >> choice;
		if (choice == 's' || choice == 'S')
		{

		}
		else
		{
			HandleGameOver();
		}
	}

	void GameLoop::Destroy()
	{
		delete game_intro;
	}
	void GameLoop::HandleGameOver()
	{
		cout << "---------------------------------------------------------" << endl;
		cout << "|\t\t\tGAME OVER\t\t\t|" << endl;
		cout << "|\t\t\tTHANK YOU\t\t\t|" << endl;
		cout << "|\t\t    SEE YOU NEXT TIME        \t\t|" << endl;
		cout << "---------------------------------------------------------" << endl;
		cout << endl << endl;
	}
}