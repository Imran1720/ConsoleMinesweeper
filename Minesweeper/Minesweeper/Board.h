#pragma once
#include "Cell.h"
#include <random>

namespace Gameplay
{
	namespace GameBoard
	{
		using namespace Gameplay::CellSpace;

		class Board
		{
			private:
				// Board dimensions
				static const int number_of_rows = 10;
				static const int number_of_columns = 10;

				// Value used to represent a mine in the cell
				const int mine_value = -1;
				int max_number_of_mines;

				//Board
				Cell* board[number_of_rows][number_of_columns];

				std::default_random_engine random_engine;
				std::random_device random_device;

				//Game state trackers
				int opened_cell_count;
				bool is_game_over;

				//Helper Methods
				int GetRandomPositionX(int max_x);
				int GetRandomPositionY(int max_y);

				//Game Setup
				void InitializeCells();
				void PlaceMines(int x_position, int y_position);
				
				void InitializeAdjacentMineCount();
				int CalculateAdjacentMines(int x_position, int y_position);

				bool IsValidPosition(int x_position, int y_position);
				char GetCellValue(Cell* cell);
				void OpenAdjacentCells(int x_position, int y_position);

				void CleanUpBoard();

			public:
				Board();
				~Board();

				//Game Setup
				void CreateBoard(int x_position, int y_position);
				
				//Gameplay
				void DisplayBoard();
				void RevealAllMines();
				void RevealAllCells();
				void OpenCell(int x_position, int y_position);
				
				//Game State
				bool OpenedMine();
				bool OpenedAllCells();
		
				//Utility
				int GetMaxCoordinate();


		};
	}
}