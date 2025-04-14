#pragma once

namespace Main
{
	class GameLoop
	{
		private:
			bool is_game_over;

			void Destroy();

		public:
			GameLoop();
			~GameLoop();

			void Play();
			bool IsGameRunning();
	};
}