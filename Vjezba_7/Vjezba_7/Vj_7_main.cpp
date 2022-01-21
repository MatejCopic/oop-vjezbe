#include <iostream>
#include "Vj_7_header.hpp"

int main()
{
	char ch_okvir='o';
	char ch_znak='x';
	Board board(10, 20, ch_okvir);
	board.Matrix();
	Point p1 = Point::point(board);
	Point p2 = Point::point(board);
	Point p3 = Point::point(board);
	Point p4 = Point::point(board);
	board.draw_line(p1, p2, ch_znak);
	board.draw_line(p3, p4, ch_znak);
	board.display();
}
