#include <iostream>
#include "Vj_7_header.hpp"

using namespace std;

int main(){
	char ch='o';
	char lin='x';
	Board b(10, 20, ch);
	b.Matrix();
	Point p1 = Point::point(b);
	Point p2 = Point::point(b);
	Point p3 = Point::point(b);
	Point p4 = Point::point(b);
	b.draw_line(p1, p2, lin);
	b.draw_line(p3, p4, lin);
	b.display();
	return 0;
}