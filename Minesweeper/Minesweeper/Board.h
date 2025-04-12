#pragma once

namespace Gameplay
{
	namespace GameBoard
	{
		class Board
		{
			private:
				static const int number_of_rows = 10;
				static const int number_of_columns = 10;
				int number_of_mines;
				int board[number_of_rows][number_of_columns] = {0};

				void InitializeBoard();

			public:
				Board();
				~Board();

				void GenerateBoard();
				void PlaceMines(int position_x, int position_y);
				void CalculateAdjacentMines();
				void DisplayBoard();


		};
	}
}