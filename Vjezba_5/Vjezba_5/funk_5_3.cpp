#include <iostream>
#include <stdbool.h>
#include "header_5.hpp"

void Point::setPoint(const double x, const double y){
	this->x = x;
	this->y = y;
}

int status(Point& t1, Point& t2, Point& p){
	if (p.x >= t1.x && p.x <= t2.x && p.y >= t1.y && p.y <= t2.y) {
		return true;
	}
	if (p.x >= t2.x && p.x <= t1.x && p.y >= t2.y && p.y <= t1.y) {
		return true;
	}
	return false;
}