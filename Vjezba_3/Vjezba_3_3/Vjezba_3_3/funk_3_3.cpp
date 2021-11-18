#include <iostream>
#include <vector>
#include <algorithm>
#include "header_3_3.hpp"

void unos(std::vector<int>& arr, int n) {

	int x;
	for (int i = 0; i < n; i++) {

		std::cout << "Unesite " << i + 1 << ". element" << std::endl;
		std::cin >> x;
		arr.push_back(x);
	}
}

void suma_elemenata(std::vector<int> arr,int &suma) {

	for (int i = 0; i < arr.size(); i++) {
		suma = suma + arr[i];
	}
}

void ispis(std::vector<int> arr) {

	for (int i = 0; i < arr.size(); i++) {

		std::cout << arr[i] << std::endl;
	}
}

void sortiraj(std::vector<int>& arr, int suma) {

	std::sort(arr.begin(), arr.end());
	arr.push_back(suma);
	arr.insert(arr.begin(), 0);
}