#include <iostream>
#include "vj_8_header.hpp"
#include <vector>
#include <algorithm>

using namespace std;

ostream& operator << (ostream& o, const timer& t){

	o << '(' << t.h << ':' << t.m << ':' << t.s << ')';
	return o;
}

timer timer::operator -(timer& t){
	timer t1;
	t1.h = h - t.h;
	t1.m = m - t.m;
	t1.s = s - t.s;
	return t1;
}

bool timer::operator < (timer& t1) {
	if ((h < t1.h) && (m < t1.m) && (s < t1.s)) {
		return 1;
	}
	return 0;
}

timer timer::operator / (const float& t) {
	timer t1;
	this->h / t;
	this->m / t;
	this->s / t;
	return t1;
}

timer& timer::operator /= (const float t) {
	timer t1;
	t1.h /= t;
	t1.m /= t;
	t1.s /= t;
	return t1;
}

void timer::add(const double m){
	
	this->s += m;
	if (s >= 60) {
		this->m += 1;
	}
	if (m >= 60) {
		this->h += 1;
	}
}

timer timer::operator +(timer& t){
	timer t1;
	t1.h = h + t.h;
	t1.m = m + t.m;
	t1.s = s + t.s;
	return t1;
}

timer& timer::operator += (const timer& t) {
	timer t1;
	t1.h += t.h;
	t1.m += t.m;
	t1.s += t.s;
	return t1;
}

timer& timer::operator -= (const timer& t) {
	timer t1;
	t1.h -= t.h;
	t1.m -= t.m;
	t1.s -= t.s;
	return t1;
}

timer::operator double() {
	return double((h * 3600) + (m * 60) + s);
}

timer::timer(const timer& t) { h = t.h, m = t.m, s = t.s; }
timer::timer(timer&& other) : h(move(other.h)), m(move(other.m)), s(move(other.s)) {}