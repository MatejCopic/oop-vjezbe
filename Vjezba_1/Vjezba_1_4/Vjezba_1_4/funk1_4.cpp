#include <iostream>
#include "funk1_4.h"

using namespace std;

void unosNiza(int* niz) {

	int i;
	for (i = 0; i < 10; i++) {
		cin >> niz[i];
	}
}

int minRek(int* niz , int n) {

	if (n == 1)
		return niz[0];
	return min(niz[n - 1], minRek(niz, n - 1));
}

int maxRek(int* niz , int n) {

	if (n == 1)
		return niz[0];
	return max(niz[n - 1], maxRek(niz, n - 1));
}