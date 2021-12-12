#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include "Vj_6_header.hpp"

int main() {
	Vj_6_main::HangmanController hangman;
	while (!hangman.checkIfGameIsOver()) {
		hangman.displayUsedLetters();
		hangman.updateLives();
		hangman.displayHangman();
		hangman.displayCurrentProgress();
	}
	return 0;
}