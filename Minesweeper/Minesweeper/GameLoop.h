#pragma once
#include "GameInstructions.h"

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
	class GameLoop
	{
		private:
			bool is_game_over;
			GameInstructions* game_intro;

			void Destroy();

			void HandleGameOver();

		public:
			GameLoop();
			~GameLoop();

			void Play();
			bool IsGameRunning();
	};
}