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

				if (!board[random_x_position][random_y_position].IsMine() && ! is_selected_cell)
				{
					board[random_x_position][random_y_position].SetCellValue(9);//change this magic number
					number_of_mines--;
				}
			}
		}
		int Board::CalculateAdjacentMines(int x_position, int y_position)
		{
			int count = 0;
				
			for (int i = x_position - 1; i <= x_position + 1; i++)
			{
				for (int j = y_position - 1; j <= y_position + 1; j++)
				{
					if (i != x_position && j != y_position && ValidCellPosition(i, j) && board[i][j].IsMine())
					{
						count++;
					}
				}
			}

			return count;
			
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
					cout << "| " << GetCellValue(board[i][j]) << " ";

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

		void Board::OpenCell(int x_position, int y_position)
		{
			
		}

		void Board::InitializeCells()
		{
			for (int i = 0; i < number_of_rows; i++)
			{
				for (int j = 0; j < number_of_columns; j++)
				{
					if (!board[i][j].IsMine())
					{
						board[i][j].SetCellValue(CalculateAdjacentMines(i, j));
					}
				}
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
		
		bool Board::ValidCellPosition(int x_position, int y_position)
		{

			if ((x_position >= 0 && x_position < number_of_rows) && (y_position >= 0 && y_position < number_of_columns))
			{
				return true;
			}
			return false;
		}
		char Board::GetCellValue(Cell cell)
		{
			if (cell.GetCellState() == CellState::OPENED)
			{
				return '0'+cell.GetCellValue();
			}

			return ' ';
		}
		void Board::RevealAllMines()
		{
			for (int i = 0; i < number_of_rows; i++)
			{
				for (int j = 0; j < number_of_columns; j++)
				{
					if (board[i][j].IsMine())
					{
						board[i][j].SetState(CellState::OPENED);
					}
				}
			}
		}
		void Board::RevealAllCells()
		{
			for (int i = 0; i < number_of_rows; i++)
			{
				for(int j=0;j<number_of_columns;j++)
				{
					board[i][j].SetState(CellState::OPENED);
				}
			}
		}
	}
}