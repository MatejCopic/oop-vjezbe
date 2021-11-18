#include <iostream>
#include <vector>
#include <algorithm>
#include "header_3_4.hpp"

void ispis(std::vector<int> arr) {

	for (int i = 0; i < arr.size(); i++) {

		std::cout << "---->" << arr[i] << std::endl;
	}
}

std::vector<int> ukloni(std::vector<int> &arr, int n) {

	int j;
	for (int i = 0; i < n; i++) {

		std::cout << "Redni broj elementa kojeg zelite ukloniti: " << std::endl;
		std::cin >> j;
		arr.erase(arr.begin() + j);
	}
	return arr;
}