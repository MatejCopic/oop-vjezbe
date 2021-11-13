#include <iostream>
#include "funk_2_3.h"

using namespace std;

int main(){
	int rez;
	int n;
	cout << "broj pravokutnika: \n";
	cin >> n;
	pravokutnik* arr;
	kruznica k;
	arr = new pravokutnik[n];
	UnosPravokutnika(arr, n);
	UnosKruznice(&k);
	rez = Presjek(k, arr, n);
	cout << "\n" << rez << "presjeci \n";
}