#include <iostream>
#include <math.h>
#include "Vj_7_header.hpp"

using namespace std;

Board::Board(Board& b){

	row = b.row;
	coll = b.coll;

	if (b.board){

		board = new char* [row];
		int i = 0;
		while (i < row){
			board[i] = new char[coll];
			i++;
		}

		for (int i = 0; i < row; i++){
			for (int j = 0; j < coll; j++){
				board[i][j] = b.board[i][j];
			}
		}
	}
}

Board::Board(Board&& b) : row(b.row), coll(b.coll), board(b.board)
{
	delete[] board;
	board = b.board;
	b.board = nullptr;
}

Board::~Board(){
	int i = 0;
	while (i < row){
		delete[] board[i];
		i++;
	}
	delete[] board;
}


void Board::draw_up_line(const struct Point& p, char ch_znak){
	int x = p.x;
	int y = p.y;
	int i = y;
	while (i != (coll - 2)){
		board[x][i] = ch_znak;
		i++;
	}
}

void Board::draw_char(const struct Point& p, char ch_znak){
	board[int(p.x)][int(p.y)] = ch_znak;
}

void Board::draw_line(const struct Point& p1, const struct Point& p2, char ch_znak){

	int x1 = p1.x;
	int y1 = p1.y;
	int x2 = p2.x;
	int y2 = p2.y;

	int flag = y1;

	if (x1 == x2){
		int i = y1;
		while (i <= y2){
			draw_char(p1,ch_znak);
			i++;
		}
	}
	else if (y1 == y2)
	{
		int i = x1;
		while (i <= x2){
			draw_char(p1, ch_znak);
			i++;
		}
	}
	else{
		int i = x1;
		while (i <= x2){
			board[flag][i] = ch_znak;
			i++;
			flag++;
		}
	}
}

void Board::Matrix()
{
	double c = coll;
	double r = row;
	this->board = new char* [r];

	for (int i = 0; i < r; i++) {
		this->board[i] = new char[c];
	}

	int i = 0;
	while (i < r)
	{
		int j = 0;
		while (j < c){
			if ((i == 0) || (j == 0) || (i == int(r) - 1) || (j == int(c) - 1)){
				this->board[i][j] = ch;
			}
			else {
				this->board[i][j] = ' ';
			}
			j++;
		}
		i++;
	}
}
void Board::display()
{
	int i = 0;
	while (i < row) {
		int j = 0;
		while (j < coll){
			cout << board[i][j];
			j++;
		}
		i++;
		cout << endl;
	}
}


Point Point::point(Board& board){
	
	Point point;
	double x_p = 0;
	double y_p = 0;
	double x;
	double y;
	while (1){
		cout <<" unesi x: " << endl;
		cin >> x;
		cout <<" unesi y: " << endl;
		cin >> y;

		for (int i = 0; i < board.row; i++){
			for (int j = 0; j < board.coll; j++){
				if (x >= x_p & x <= board.row & y >= y_p &  y <= board.coll){
					point.x = x; 
					point.y = y; 
					return point;
				}
			}
		}
	}
}