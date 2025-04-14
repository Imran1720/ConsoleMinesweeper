#include "Cell.h"

namespace Gameplay
{
	namespace CellSpace
	{
		void Cell::SetCellValue(int value)
		{
			cell_value = value;
		}
		void Cell::SetState(CellState state)
		{
			cell_state = state;
		}
		int Cell::GetCellValue()
		{
			return cell_value;
		}
		CellState Cell::GetCellState()
		{
			return cell_state;
		}
		bool Cell::IsMine()
		{
			return cell_value==9;
		}
	}
}