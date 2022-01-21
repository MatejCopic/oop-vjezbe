#include <iostream>
using namespace std;

class Board
{
private:
	char ch;
	char** board;
	double row;
	double coll;

public:
	friend struct Point;
	Board(double r, double c, char ch) { this->row = r, this->coll = c, this->ch = ch; }
	void Matrix();
	void draw_line(const struct Point&, const struct Point&, char ch_znak);
	void draw_up_line(const struct Point&, char ch_znak);
	void draw_char(const struct Point&, char ch_znak);
	void display();
	Board(Board& b);
	Board(Board&& b);
	~Board();

};

struct Point
{
	double x;
	double y;
	static Point point(Board& b);
};