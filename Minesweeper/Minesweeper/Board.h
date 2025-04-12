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
				static const int number_of_rows = 10;
				static const int number_of_columns = 10;
				int number_of_mines;
				Cell board[number_of_rows][number_of_columns];

				std::default_random_engine random_engine;
				std::random_device random_device;

				int GetRandomPositionX(int max_x);
				int GetRandomPositionY(int max_y);

				bool ValidCellPosition(int x_position, int y_position);

				char GetCellValue(Cell cell);
				void RevealAllCells();
				void RevealAllMines();

			public:
				Board();
				~Board();

				void GenerateBoard();
				void PlaceMines(int x_position, int y_position);
				int CalculateAdjacentMines(int x_position, int y_position);
				void DisplayBoard();
				void OpenCell(int x_position, int y_position);
				void InitializeCells();

		};
	}
}