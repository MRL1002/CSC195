#include "Game.h"

// sets game difficulty based on what the user enters

int Game::diffSelect(string strDiff) {

	// game difficulty is based on range of numbers

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
	else {
		cout << "Invalid guess." << endl;
	}
}

// runs the game

void Game::runGame(int intDif) {

	int intGuess;
	int intCorrectNum = rand() % (intDif + 1);

	const int MAX_GUESSES = 10;

	// loops 10 times, 1 for each max guess
	for (int i = 0; i < MAX_GUESSES; i++) {
		cout << i+1 << ". Guess a number between 1 and " << intDif << ": ";
		cin >> intGuess;
		gameLoop(intGuess, intCorrectNum);
	}

	// only displayes if the user runs out of guesses
	cout << "You have run out of guesses. The correct number was " << intCorrectNum << "." << endl;

}