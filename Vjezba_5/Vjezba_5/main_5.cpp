#include <iostream>
#include <time.h> 
#include <cstdlib>
#include "header_5.hpp"

int main()
{
	/*
	Point p1;
	Point p2;
	p1.setPoint(0,10);
	p2.setPoint(0,10);
	p1.printPoint();
	p2.printPoint();
	double x = Point::distance2D(p1, p2);
	double y = Point::distance3D(p1, p2);
	std::cout << "2D udaljenost: " << x << std::endl;
	std::cout << "3D udaljenost: " << y << std::endl;

	Weapon w1(20, 5);
	int x;
	std::cout << "Koliko puta zelite pucati: " << std::endl;
	std::cin >> x;
	for (int i = 0; i < x; i++) {
		w1.shoot();
	}
	std::cout << "Ammo: " << w1.current_ammo << std::endl;
	w1.reload();
	std::cout << "Ammo nakon reaload: " << w1.current_ammo << std::endl;
	
	Point p1;
	Point p2;
	Point p;
	p.setPoint(0, 10);
	Target T;
	T.setTarget(10,10,10,10);
	int h = T.status(p1, p2, p);
	if (h == 1) {
		std::cout << "Pogodena" << std::endl;
	}
	else {
		std::cout << "Nepogodena" << std::endl;
	}
	*/
	int rez;
	Target meta1;
	Target meta2;
	Target meta3;
	Target meta4;
	Weapon pucac;

	meta1.setTarget(rand() % 20, rand() % 20, rand() % 20, rand() % 20);
	meta2.setTarget(rand() % 20, rand() % 20, rand() % 20, rand() % 20);
	meta3.setTarget(rand() % 20, rand() % 20, rand() % 20, rand() % 20);
	meta4.setTarget(rand() % 20, rand() % 20, rand() % 20, rand() % 20);
	pucac.setBullets(10, 10);
	pucac.p = (5, 5, 5);

	while (pucac.current_ammo > 0) {

		pucac.shoot();

		if (pucac.p.x > meta1.x1 and pucac.p.x <= meta1.x2 and pucac.p.y >= meta1.y1 and pucac.p.y <= meta1.y2) {
			rez++;
		}
		if (pucac.p.x > meta1.x2 and pucac.p.x <= meta1.x1 and pucac.p.y >= meta1.y2 and pucac.p.y <= meta1.y1) {
			rez++;
		}
		if (pucac.p.x > meta2.x1 and pucac.p.x <= meta2.x2 and pucac.p.y >= meta2.y1 and pucac.p.y <= meta2.y2) {
			rez++;
		}
		if (pucac.p.x > meta2.x2 and pucac.p.x <= meta2.x1 and pucac.p.y >= meta2.y2 and pucac.p.y <= meta2.y1) {
			rez++;
		}
		if (pucac.p.x > meta3.x1 and pucac.p.x <= meta3.x2 and pucac.p.y >= meta3.y1 and pucac.p.y <= meta3.y2) {
			rez++;
		}
		if (pucac.p.x > meta3.x2 and pucac.p.x <= meta3.x1 and pucac.p.y >= meta3.y2 and pucac.p.y <= meta3.y1) {
			rez++;
		}
		if (pucac.p.x > meta4.x1 and pucac.p.x <= meta4.x2 and pucac.p.y >= meta4.y1 and pucac.p.y <= meta4.y2) {
			rez++;
		}
		if (pucac.p.x > meta4.x2 and pucac.p.x <= meta4.x1 and pucac.p.y >= meta4.y2 and pucac.p.y <= meta4.y1) {
			rez++;
		}

	}

	std::cout << "Pogodeno: " << rez << " meta" << std::endl;
	return 0;
}