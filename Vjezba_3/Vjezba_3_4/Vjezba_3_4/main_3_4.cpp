#include <iostream>
#include <vector>
#include "header_3_4.hpp"

int main() {

	std::vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
	int n;
	std::cout << "Koliko elemenata zelite ukloniti: " << std::endl;
	std::cin >> n;
	ukloni(arr,n);
	ispis(arr);
	return 0;
}