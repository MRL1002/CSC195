#include "Game.h"

// sets game difficulty based on what the user enters

int Game::diffSelect() {

	string strDiff;

	cout << "Select difficulty: (E)asy, (N)ormal, or (H)ard" << endl;

	cin >> strDiff; // diff is based on the first character

	//Easy
	if (strDiff == "E" || strDiff == "e") {
		return 10;
	}
	//Medium
	else if (strDiff == "N" || strDiff == "n") {
		return 50;
	}
	//Hard
	else if (strDiff == "H" || strDiff == "h") {
		return 100;
	}
	//Default is Medium
	else {
		cout << "Invalid difficulty selected. Defaulting to medium." << endl;
		return 50;
	}

}

// Main game loop. tells user if guess is too high or too low

void Game::gameLoop(int intGuess, int intAnswer) {
	// guesses must be greater than 0
	if (intGuess < 1) {
		cout << "|ERROR| - input is invalid, enter a number greater than 0" << endl;
	}
	else {
		if (intGuess > intAnswer) {
			cout << "Guess is too high." << endl;
		}
		else if (intGuess < intAnswer) {
			cout << "Guess is too low." << endl;
		}
		else if (intGuess == intAnswer) {
			cout << "You guessed it!" << endl;
			exit(0);
		}
	}
}

// runs the game

void Game::runGame(int intDif) {

	int intGuess;

	srand(time(0));
	int intCorrectNum = rand() % (intDif + 1);

	const int MAX_GUESSES = 10;

	// loops 10 times, 1 for each guess
	for (int i = 0; i < MAX_GUESSES; i++) {

		cout << i+1 << ". Guess a number between 1 and " << intDif << ": ";

		cin >> intGuess;

		// bug net, if the users enters a string the program won't entierly break
		if (cin.fail()) {
			intGuess = 0; // sets intGuess to 0 when a non-int is input
			cin.clear(); // clears cin error flag
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignores next line which would cause an infinite error loop
		}

		gameLoop(intGuess, intCorrectNum);

	}

	// only displayes if the user runs out of guesses
	cout << "You have run out of guesses. The correct number was " << intCorrectNum << "." << endl;

}