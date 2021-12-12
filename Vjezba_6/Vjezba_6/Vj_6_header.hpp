#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

namespace Vj_6_main {

	class HangmanModel {
	private:

	public:
		HangmanModel();
		std::string movie;
		std::string guessMovie;
		int lives;
		bool inGame();
		~HangmanModel() {};
	};

	class HangmanView : public HangmanModel {
	private:

	public:
		HangmanView() {};
		void displayCurrentProgress();
		void displayUsedLetters();
		void displayHangman();
		~HangmanView() {};
	};

	class HangmanController : public HangmanView {
	private:

	public:
		HangmanController() {};
		char userEntry();
		bool checkLetter(char ent);
		void updateLives();
		bool checkIfGameIsOver();
		~HangmanController() {};
	};
}