#include "GameInstructions.h"
#include <iostream>

namespace Gameplay
{
	namespace Intro
	{
		using namespace std;
		
		GameInstructions::GameInstructions()
		{

		}

		void GameInstructions::LoadInstructions()
		{
			DisplayTitle();
			DisplayRules();
			DisplayHowToPlay();
		}

		void GameInstructions::DisplayTitle()
		{
			cout << "---------------------------------------------------------" << endl;
			cout << "|\t\t\t\t\t\t\t|" << endl;
			cout << "|\t\tWELCOME TO MINESWEEPER GAME\t\t|" << endl;
			cout << "|\t\t\t\t\t\t\t|" << endl;
			cout << "---------------------------------------------------------" << endl;
			cout << endl << endl;
		}
		void GameInstructions::DisplayRules()
		{
			cout << "RULES:" << endl;
			cout << "1. The board is divided into cells, with mines randomly distributed." << endl;
			cout << "2. To win you need to open all the cells." << endl;
			cout << "3. The number on a cell shows the number of mines adjacent to it." << endl;
			cout << "4. Using this information, you can determine cells that are safe, and cells that contain mines." << endl;
			cout << "5. Interact, evolve and enjoy!" << endl;
			cout << endl << endl;
		}
		void GameInstructions::DisplayHowToPlay()
		{
			cout << "HOW TO PLAY:" << endl;
			cout << "1. On the grid, there are 100 cells, a cell could be empty or it could contain a bomb."<< endl;
			cout << "2. Type in an X (i.e. 0 to 9) coordinate and then a Y coordinate (also 0 to 9)." << endl;
			cout << "3. If that location contains a bomb it will be game over."<< endl;
		}
	}
}