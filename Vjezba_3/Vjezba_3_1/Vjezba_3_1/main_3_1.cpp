#include <iostream>
#include <vector>
#include "header_3_1.hpp"

int main() {

	std::vector<int> arr1;
	std::vector<int> arr2;
	int n, a, b;
	std::cout << "Unesite broj elemenata n: " << std::endl;
	std::cin >> n;
	unos1(arr1,n);
	ispis(arr1);
	std::cout << "Unesite interval a do b: " << std::endl;
	std::cin >> a;
	std::cin >> b;
	unos2(arr2,a,b);
	ispis(arr2);
	return 0;
}