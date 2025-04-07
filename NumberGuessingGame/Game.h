#pragma once
#include <iostream>
#include <string>

using namespace std;

class Game {
public:
	int diffSelect();
	void gameLoop(int intGuess, int intAnswer);
	void runGame(int intDif);
};