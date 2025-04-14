#pragma once

namespace Gameplay
{
	namespace Intro
	{
		class GameInstructions
		{
			private:
				void DisplayTitle();
				void DisplayRules();
				void DisplayHowToPlay();

			public:
				void LoadInstructions();
		};
	}
}