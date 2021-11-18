//napisati funkciju koja broji koliko pojavjivanja danog podstringa ima u stringu koristeci funkcije stl
#include <iostream>
#include <vector>
#include <string>
#include "header_3_5.hpp"

int main() {

	std::string str;
	std::string podstr;
	int cnt=0;
	std::cout << "Unesite string: " << std::endl;
	std::cin >> str;
	std::cout << "Unesite podstring: " << std::endl;
	std::cin >> podstr;
	repeat(str,podstr,cnt);
	std::cout << "Podstring " << podstr << " se ponavlja " << cnt << " puta u stringu " << str << std::endl;
	return 0;
}