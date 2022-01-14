#include <iostream>
#include "vj_8_header.hpp"
#include <vector>
#include <algorithm>

int main() {

	std::vector<timer> v{ { 2, 6, 9.118 },{ 2, 6, 15.251 },{ 2, 6, 9.925 },{ 2, 7, 15.222 },{ 2, 7, 10.775 } };

	// prosjecno vrijeme
	timer avg;
	for (auto t : v)
		avg += t;

	avg /= v.size();
	std::cout << "avg " << avg << std::endl;

	//vrijeme najbrzeg (operator<)
	timer tmax = *min_element(v.begin(), v.end());
	std::cout << "min " << tmax << std::endl;

	// zaostajanje za vodecim u sekundama
	for (auto& tm : v)
		std::cout << double(tm - tmax) << std::endl;

	// penaliziranje vozaca s m sekundi (funkcijski objekt)
	penalty p(5);
	for (auto& tm : v)
		p(tm);
}