#include<iostream>
#include "Game.h"
using namespace std;



int main()
{
	Game game; // creates instance of the game

	string strDiff;

	cout << "Select difficulty: (E)asy, (N)ormal, or (H)ard" << endl;

	cin >> strDiff; // diff is based on the first character

	game.runGame(game.diffSelect(strDiff));

}