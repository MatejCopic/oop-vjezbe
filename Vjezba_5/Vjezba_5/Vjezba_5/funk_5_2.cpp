#include <iostream>
#include <time.h> 
#include "header_5.hpp"

Weapon::Weapon(int x, int y){
	setBullets(x, y);
}

void Weapon::setBullets(const int x, int y){
	this->max_ammo = x;
	this->current_ammo = y;
}

void Weapon::shoot(){
	if (this->current_ammo == 0) {
		std::cout << "Nema metaka!!" << std::endl;
	}
	this->current_ammo = current_ammo - 1;
}

void Weapon::reload() {
	current_ammo = max_ammo;
}