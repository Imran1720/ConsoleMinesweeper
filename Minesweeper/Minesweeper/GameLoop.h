#pragma once
#include "GameInstructions.h"
#include "Board.h"


//namespace Gameplay
//{
//	namespace Intro
//	{
//		class GameInstructions;
//	}
//}
namespace Main
{
	using namespace Gameplay::Intro;
	using namespace Gameplay::GameBoard;
	class GameLoop
	{
		private:
			bool is_game_over;
			GameInstructions* game_intro;
			Board* game_board;
			int cell_position_x;
			int cell_position_y;

			bool is_first_cell;
			bool is_game_running;

			void Destroy();

			void HandleGameOver();

			bool CheckGameEnd();

		public:
			GameLoop();
			~GameLoop();

			void Play();
			bool IsGameRunning();

			void GetPlayerInput();
			void OpenCell(int position_x, int position_y);

	};
}