#include <iostream>
#include "funk1_4.h"

using namespace std;

int main() {

	int arr[10];
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Unesite 10 brojeva: \n" << endl;
	unosNiza(arr);
	cout << "Najveci i najmanji brojevi su: \n" << minRek(arr, n)<<"  "<< maxRek(arr, n)<< endl;
}