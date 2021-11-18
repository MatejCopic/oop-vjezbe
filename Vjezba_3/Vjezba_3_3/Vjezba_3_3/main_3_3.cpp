#include <iostream>
#include <vector>
#include "header_3_3.hpp"

int main() {

	std::vector<int> arr;
	int n;
	int suma = 0;
	std::cout << "Unesite n: " << std::endl;
	std::cin >> n;
	unos(arr, n);
	suma_elemenata(arr,suma);
	sortiraj(arr,suma);
	ispis(arr);
	return 0;
}