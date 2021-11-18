#include <iostream>
#include <vector>
#include "header_3_2.hpp"

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
		std::cout << "Unesite " << i + 1 << ". element: " << std::endl;
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

		std::cout <<"--->"<< arr[i] << std::endl;
	}
	return 0;
}

std::vector<int> novi_vektor(std::vector<int>& arr_rez, std::vector<int> arr1, std::vector<int> arr2) {

	for (int i = 0; i < arr1.size(); i++) {
		int j;
		for (j=0 ; j < arr2.size(); j++) {
			std::cout<<"arr1: "<<arr1[i]<<"-----"<<"arr2: "<<arr2[j]<<std::endl;
			if (arr1[i] == arr2[j]) {
				break;
			}
			if(j== arr2.size()) {
				arr_rez.push_back(arr1[i]);
			}
		}
	}
	return arr_rez;
}