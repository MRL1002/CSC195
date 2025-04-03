#include <memory>
#include <iostream>
using namespace std;

int diffSelect(string strDiff) {

	if (strDiff == "Easy") {
		return 10;
	}
	else if (strDiff == "Normal") {
		return 50;
	}
	else if (strDiff == "Hard") {
		return 100;
	}
	else {
		cout << "Invalid difficulty selected. Defaulting to medium." << endl;
		return 50;
	}

}

void gameLoop(int intGuess, int intAnswer) {
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

void runGame(int intDif){

	int intGuess;
	int intCorrectNum = rand() % (intDif + 1);

	const int MAX_GUESSES = 10;

	for (int i = 0; i < MAX_GUESSES; i++) {
		cout << "Guess a number between 1 and " << intDif << ": ";
		cin >> intGuess;
		gameLoop(intGuess, intCorrectNum);
	}

	cout << "You have run out of guesses. The correct number was " << intCorrectNum << "." << endl;

}
