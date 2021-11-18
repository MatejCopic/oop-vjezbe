#include <iostream>
#include "header_3_1.hpp"
#include <vector>

void unos1(std::vector<int>& arr1, int n) {

	int x;
	for (int i = 0; i < n; i++) {

		std::cout << "Unesite " << i + 1 << ". element" << std::endl;
		std::cin >> x;
		arr1.push_back(x);
	}

}

void unos2(std::vector<int>& arr2, int a, int b) {

	int i = 0;
	int x;
	while (1) {
		std::cout << "Unesite " << i + 1 << ". element: "<<std::endl;
		std::cin >> x;
		if (x > b || x < a) {
			break;
		}
		arr2.push_back(x);
		i++;
	}
}


int ispis(std::vector<int> arr) {

	for (int i = 0; i < arr.size(); i++) {

		std::cout << arr[i] << std::endl;
	}
	return 0;
}