#pragma once
namespace Gameplay 
{
	namespace Intro 
	{
		class GameInstructions;
	}

	namespace GameBoard
	{
		class Board;
	}
}

namespace Main
{
	class GameLoop
	{
		private:
			//Dependencies
			Gameplay::Intro::GameInstructions* game_intro;
			Gameplay::GameBoard::Board * game_board;

			//Cell position
			int cell_position_x;
			int cell_position_y;

			int cell_position_upper_limit;
			int cell_position_lower_limit;

			//Game state
			bool is_first_cell;
			bool is_game_running;

			//Internal Helpers
			void CleanUp();
			bool IsGameOver();

		public:
			GameLoop();
			~GameLoop();

			//Game Flow
			void LoadInstructions();
			bool WaitForPlayerReady();
			void Play();
			void GetPlayerInput();
			void HandleGameOver();

			void PrintGameEndMessage();
			void GetInput(char coordinateLabel, int &cell_position);

			//State Check
			bool IsGameRunning();
	};
}