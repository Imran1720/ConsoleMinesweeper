#include "GameLoop.h"
#include <iostream>

namespace Main
{
	using namespace std;
	GameLoop::GameLoop()
	{
		is_game_over = false;
		is_first_cell = true;
		game_intro = new GameInstructions();
		game_board = new Board();
	}

	GameLoop::~GameLoop()
	{
		Destroy();
	}

	bool GameLoop::IsGameRunning()
	{
		return is_game_over;
	}

	void GameLoop::GetPlayerInput()
	{
		cout << "\n\nEnter X coordinate of cell : ";
		cin >> cell_position_x;
		cout << "Enter Y coordinate of cell : ";
		cin >> cell_position_y;


	}

	void GameLoop::OpenCell(int position_x, int position_y)
	{

	}

	void GameLoop::Play()
	{
		game_intro->LoadInstructions();

		cout << "\n\nWhen you are ready to play, please input S or s :" << endl;
		char choice;
		cin >> choice;
		if (choice == 's' || choice == 'S')
		{
			game_board->DisplayBoard();
			GetPlayerInput();
			if (is_first_cell)
			{
				game_board->PlaceMines(cell_position_x,cell_position_y);
				game_board->DisplayBoard();
				is_first_cell = false;
			}
		}
		else
		{
			HandleGameOver();
		}
	}

	void GameLoop::Destroy()
	{
		delete game_intro;
		delete game_board;
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