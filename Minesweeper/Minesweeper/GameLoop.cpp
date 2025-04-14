#include "GameLoop.h"
#include "GameInstructions.h"
#include "Board.h"
#include <iostream>
#include <limits>

namespace Main
{
	using namespace std;
	using namespace Gameplay::Intro;
	using namespace Gameplay::GameBoard;

	GameLoop::GameLoop()
	{
		is_first_cell = true;
		is_game_running = true;
		
		game_intro = new GameInstructions();
		game_board = new Board();

		cell_position_upper_limit = game_board->GetPositionUpperLimit();
		cell_position_lower_limit = 0;
	}

	GameLoop::~GameLoop()
	{
		CleanUp();
	}

	void GameLoop::LoadInstructions()
	{
		game_intro->LoadInstructions();
	}

	bool GameLoop::WaitForPlayerReady()
	{
		cout << "\n\nWhen you are ready to play, please input S or s :" << endl;
		char choice;
		cin >> choice;

		return (choice == 's' || choice == 'S');
	}

	void GameLoop::GetPlayerInput()
	{
		GetInput('X', cell_position_x);
		GetInput('Y', cell_position_y);
	}

	void GameLoop::Play()
	{
		game_board->DisplayBoard();
		GetPlayerInput();

		if (is_first_cell)
		{
			game_board->PlaceMines(cell_position_x, cell_position_y);
			game_board->InitializeCells();
			is_first_cell = false;
		}

		game_board->OpenCell(cell_position_x, cell_position_y);
	}

	bool GameLoop::IsGameRunning()
	{
		is_game_running = !IsGameOver();
		return is_game_running;
	}

	bool GameLoop::IsGameOver()
	{
		return (game_board->OpenedAllCells() || game_board->OpenedMine());
	}

	void GameLoop::HandleGameOver()
	{
		game_board->DisplayBoard();
		PrintGameEndMessage();
		cout << endl << endl;
	}

	void GameLoop::PrintGameEndMessage()
	{
		cout << "\n\n---------------------------------------------------------" << endl;
		
		if (game_board->OpenedAllCells())
		{
			cout << "|\t\t\tYOU WON!!\t\t\t|" << endl;
		}
		else if (game_board->OpenedMine())
		{
			cout << "|\t\t       GAME OVER!!   \t\t\t|" << endl;
		}

		cout << "|\t\t\tTHANK YOU\t\t\t|" << endl;
		cout << "|\t\t    SEE YOU NEXT TIME        \t\t|" << endl;
		cout << "---------------------------------------------------------" << endl;

		cin.clear();
	}

	void GameLoop::GetInput(char coordinateLabel, int& cell_position)
	{
		do {
			cout << "\n\nEnter " << coordinateLabel << " coordinate of cell (";
			cout << cell_position_lower_limit << "-" << cell_position_upper_limit << "):";

			cin >> cell_position;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		} while (cell_position < 0 || cell_position>cell_position_upper_limit);
	}

	void GameLoop::CleanUp()
	{
		delete game_intro;
		delete game_board;
	}
}