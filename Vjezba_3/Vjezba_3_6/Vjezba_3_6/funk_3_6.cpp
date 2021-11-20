#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "header_3_6.hpp"

using std::string;

void ispis(std::vector<string> arr) {

	for (int i = 0; i < arr.size(); i++) {

		std::cout << arr[i] << std::endl;
	}
}

void funk(std::vector<string> &vek_str) {

	int n,x;
	std::cout << "Koliko stringova zelite unjeti: " << std::endl;
	std::cin >> n;
	for (int j = 0;;) {
		for (std::string i = vek_str.begin(); i < vek_str.end(); ++i) {
			std::cout << "Unesite " << i + 1 << ". string" << std::endl;
			std::cin >> vek_str[j];
			j++;
		}
		break;
	}

	for (int j = 0; j < n; j++) {
		std::reverse(vek_str[j].begin(), vek_str[j].end());
	}

	std::sort(vek_str.begin(), vek_str.end());
}