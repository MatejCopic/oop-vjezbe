#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include "Vj_6_header.hpp"

bool Vj_6_main::HangmanModel::inGame() {
	return guessMovie.find('_') != std::string::npos;
}

void Vj_6_main::HangmanView::displayCurrentProgress() {
	std::cout << "lives: " << lives<<"\n";
}

void Vj_6_main::HangmanView::displayUsedLetters() {
	for (auto i : guessMovie) {
		std::cout << i << " ";
	}
}

void Vj_6_main::HangmanView::displayHangman() {
	if (lives == 6) {
		std::cout << " _______\n";
		std::cout << "| / |   " << std::endl;
		std::cout << "|/      " << std::endl;
		std::cout << "|       " << std::endl;
		std::cout << "|       " << std::endl;
		std::cout << "|       " << std::endl;
	}
	if (lives == 5) {
		std::cout << " _______\n";
		std::cout << "| / |   " << std::endl;
		std::cout << "|/  O    " << std::endl;
		std::cout << "|       " << std::endl;
		std::cout << "|       " << std::endl;
		std::cout << "|       " << std::endl;
	}
	if (lives == 4) {
		std::cout << " _______\n";
		std::cout << "| / |   " << std::endl;
		std::cout << "|/  O    " << std::endl;
		std::cout << "|   |    " << std::endl;
		std::cout << "|   |    " << std::endl;
		std::cout << "|       " << std::endl;
	}
	if (lives == 3) {
		std::cout << " _______\n";
		std::cout << "| / |   " << std::endl;
		std::cout << "|/  O    " << std::endl;
		std::cout << "|  /|    " << std::endl;
		std::cout << "|   |    " << std::endl;
		std::cout << "|       " << std::endl;
	}
	if (lives == 2) {
		std::cout << " _______\n";
		std::cout << "| / |   " << std::endl;
		std::cout << "|/  O    " << std::endl;
		std::cout << "|  /|\     " << std::endl;
		std::cout << "|   |    " << std::endl;
		std::cout << "|       " << std::endl;
	}
	if (lives == 1) {
		std::cout << " _______\n";
		std::cout << "| / |   " << std::endl;
		std::cout << "|/  O    " << std::endl;
		std::cout << "|  /|\     " << std::endl;
		std::cout << "|   |    " << std::endl;
		std::cout << "|  /    " << std::endl;
	}

	if (lives == 0) {
		std::cout << " _______\n";
		std::cout << "| / |   " << std::endl;
		std::cout << "|/  O    "<<std::endl;
		std::cout << "|  /|\     "<<std::endl;
		std::cout << "|   |    "<<std::endl;
		std::cout << "|  / \   " << std::endl;
		std::cout << "GAME OVER , YOU LOSE!! \n";
	}
}

char Vj_6_main::HangmanController::userEntry() {
	char ent = 0;
	std::cout << "\n";
	std::cin >> ent;
	return ent;
}

bool Vj_6_main::HangmanController::checkLetter(char ent) {
	int cnt = 0;
	int len = movie.size();
	for (int i = 0; i < len; ++i) {
		if (movie[i] == ent || movie[i] == ent-32) {
			guessMovie[i] = ent;
			++cnt;
		}
	}
	return cnt > 0;
}

bool Vj_6_main::HangmanController::checkIfGameIsOver() {
	if (lives <= 0 || !inGame())
		std::cout <<"Correct answer: \n" << movie << std::endl;
	return lives <= 0 || !inGame();
}

void Vj_6_main::HangmanController::updateLives() {
	if (!checkLetter(userEntry())) --lives;
}

Vj_6_main::HangmanModel::HangmanModel() : lives(6) {
	std::ifstream iss("c:\\temp\\Vj6_movie.txt");
	std::vector<std::string> movies;
	bool poz = iss.good();
	while (poz) {
		std::string str;
		std::getline(iss, str);
		if (!str.empty())
			movies.emplace_back(str);
		poz = iss.good();
	}

	if (!movies.empty()) {
		movie = movies[(rand() % movies.size())];
		guessMovie.resize(movie.size());
		for (int i = 0, sz = movie.size(); i < sz; ++i) {
			auto& x = movie[i];
			guessMovie[i] = (isspace(x) || ispunct(x) ? x : '_');
		}
	}
}