#pragma once
#include <random>

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

				std::default_random_engine random_engine;
				std::random_device random_device;

				int GetRandomPositionX(int max_x);
				int GetRandomPositionY(int max_y);

			public:
				Board();
				~Board();

				void GenerateBoard();
				void PlaceMines(int x_position, int y_position);
				void CalculateAdjacentMines();
				void DisplayBoard();


		};
	}
}