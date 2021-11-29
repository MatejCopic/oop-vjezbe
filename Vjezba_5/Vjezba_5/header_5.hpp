#include <iostream>

class Point {
private:

public:
	double x;
	double y;
	double z;
	Point(double = 0, double = 0, double = 0);
	void setPoint(double min, double max);
	static double distance2D(const Point p1, const Point p2);
	static double distance3D(const Point p1, const Point p2);
	void printPoint();
	~Point() {};
};

class Weapon
{
private:
	int max_ammo;

public:
	Point p;
	int current_ammo;
	friend Point;
	Weapon(int = 0, int = 0);
	void setBullets(const int number_of_bullets, int n);
	void shoot();
	void reload();
	~Weapon() {};
};

class Target
{
private:

public:
	double x1;
	double y1;
	double x2;
	double y2;
	int status(Point t1, Point t2, Point p);
	Target(double = 0, double = 0, double = 0, double = 0);
	void setTarget(const double x1, const double y1, const double x2, const double y2);
	~Target() {};
};
