#include <iostream>
#include "funk_1_3.h"

using namespace std;

int main() {

	int arr[10];
	cout << "Unesite 10 brojeva: \n" << endl;
	unosNiza(arr);
	cout << "Najveci i najmanji brojevi su: \n" << endl;
	minMax(arr);
}