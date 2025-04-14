#include "Cell.h"

namespace Gameplay
{
	namespace CellSpace
	{
		Cell::Cell()
		{
			cell_value = 0;
			cell_state = CellState::CLOSED;
		}
		
		void Cell::SetState(CellState state) { cell_state = state; }

		void Cell::SetCellValue(int value) { cell_value = value; }
		
		CellState Cell::GetCellState() { return cell_state; }
		
		int Cell::GetCellValue() { return cell_value; }

		bool Cell::IsMine() { return cell_value==9; }
	}
}