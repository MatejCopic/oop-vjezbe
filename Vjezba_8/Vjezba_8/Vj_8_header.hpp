#include <iostream>
#include <cstdbool>

using namespace std;

class timer
{
private:
	int h;
	int m;
	double s;
public:
	timer() { this->h = 0, this->m = 0, this->s = 0; };
	timer(int h, int m, double s) { this->h = h, this->m = m, this->s = s; }
	timer(const timer& t);
	timer(timer&& other);
	timer& operator -= (const timer& t);
	timer& operator += (const timer& t);
	timer operator / (const float& t);
	timer& operator /= (const float t);
	friend ostream& operator << (ostream&, const timer&);
	bool operator < (timer& t);
	timer operator +(timer& t);
	timer operator -(timer& t);
	operator double();
	void add(const double m);
	~timer() { }
};

class penalty
{
private:
	double m;
public:
	penalty();
	penalty(double m) { this->m = m; }
	void operator()(timer& t) {t.add(m);}
};