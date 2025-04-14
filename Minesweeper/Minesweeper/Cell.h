#pragma once

namespace Gameplay
{
	enum class CellState
	{
		CLOSED,
		OPENED
	};

	namespace CellSpace
	{
		class Cell
		{
			private:
				int cell_value;
				CellState cell_state;

			public:
				Cell();

				void SetState(CellState state);
				void SetCellValue(int value);
				
				CellState GetCellState();
				int GetCellValue();
				
				bool IsMine();
		};
	}
}