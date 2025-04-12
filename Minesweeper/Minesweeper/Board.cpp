#include "Board.h"
#include <iostream>
using namespace std;

namespace Gameplay
{
	namespace GameBoard
	{
		
		Board::Board()
		{
			InitializeBoard();
		}
		Board::~Board()
		{
		}

		void Board::InitializeBoard()
		{
		}

		void Board::GenerateBoard()
		{
		}
		void Board::PlaceMines(int position_x, int position_y)
		{
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
					cout << "| "<< (board[i][j]==0 ? " " :""+board[i][j]) << " ";
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
	}
}