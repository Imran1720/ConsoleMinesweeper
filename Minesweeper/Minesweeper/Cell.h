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
				void SetCellValue(int value);
				void SetState(CellState state);
				int GetCellValue();
				CellState GetCellState();

				bool IsMine();
		};
	}
}