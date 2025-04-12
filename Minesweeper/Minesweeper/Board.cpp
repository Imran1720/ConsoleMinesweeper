#include "Board.h"
#include <iostream>
using namespace std;

namespace Gameplay
{
	namespace GameBoard
	{
		
		Board::Board():random_engine(random_device())
		{
			number_of_mines = number_of_rows - 1;
		}

		Board::~Board()
		{
		}


		void Board::GenerateBoard()
		{
		}

		void Board::PlaceMines(int x_position,int y_position)
		{
			while (number_of_mines > 0)
			{
				int random_x_position = GetRandomPositionX(number_of_rows);
				int random_y_position = GetRandomPositionY(number_of_columns);

				bool is_selected_cell = (random_x_position == x_position) && (random_y_position == y_position);

				if (board[random_x_position][random_y_position] != 9 && ! is_selected_cell)
				{
					board[random_x_position][random_y_position] = 9;
					number_of_mines--;
				}
			}

		}
		void Board::CalculateAdjacentMines()
		{
		}
		void Board::DisplayBoard()
		{
			for (int i = 0; i < number_of_rows; i++)
			{
				for (int j = 0; j < number_of_columns; j++)
				{
					cout << "----";
				}
				cout << endl;
				for (int j = 0; j < number_of_columns; j++)
				{
					cout << "| "<< (board[i][j]!=9 ? " " : "9" )<< " ";

					if (j == number_of_columns - 1)
					{
						cout << "|" << endl;
					}
				}

			}
				for (int j = 0; j < number_of_columns; j++)
				{
					cout << "----";
				}
		}


		int Board::GetRandomPositionX(int max_x)
		{
			std::uniform_int_distribution<int> xDistrbution(0, max_x-1);

			return xDistrbution(random_engine);
		}
		int Board::GetRandomPositionY(int max_y)
		{
			std::uniform_int_distribution<int> yDistribution(0, max_y);
			return yDistribution(random_engine);
		}
	}
}