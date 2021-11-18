#include <iostream>
#include <vector>
#include "header_3_2.hpp"

int main() {

	std::vector<int> arr1;
	std::vector<int> arr2;
	std::vector<int> arr_rez;
	int n, a, b;
	std::cout << "Unesite broj elemenata n: " << std::endl;
	std::cin >> n;
	unos1(arr1, n);
	std::cout << "Unesite interval a do b: " << std::endl;
	std::cin >> a;
	std::cin >> b;
	unos2(arr2, a, b);
	novi_vektor(arr_rez,arr1,arr2);
	ispis(arr_rez);
	return 0;
}