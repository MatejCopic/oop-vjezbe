#include <iostream>
#include "funk_2_3.h"

using namespace std;

void UnosKruznice(kruznica* k) {

	cout << "unesite radius kruznice: \n";
	cin >> k->r;
	cout << "unesite koordinatu x sredista kruznice: \n";
	cin >> k->s.x;
	cout << "unesite koordinatu y sredista kruznice: \n";
	cin >> k->s.y;
}

void UnosPravokutnika(pravokutnik* arr, int n) {
	int i;
	for (i = 0; i < n; i++) {

		cout << "koordinata x prve tocke: \n";
		cin >> arr[i].a.x;
		cout << "koordinata y prve tocke: \n:";
		cin >> arr[i].a.y;
		cout << "koordinata x druge tocke: \n";
		cin >> arr[i].b.x;
		cout << "koordinata y druge tocke: \n";
		cin >> arr[i].b.y;
	}
}

int  Presjek(kruznica& k, pravokutnik* arr, int n) {
	tocka T;
	int rez = 0;

	for (int i = 0; i < n; i++) {
		T.x = k.s.x - (arr[i].a.x, (k.s.x, arr[i].a.x + (arr[i].b.x - arr[i].a.x)));
		T.y = k.s.y - (arr[i].a.y, (k.s.y, arr[i].a.y + (arr[i].b.y - arr[i].a.y)));
		if ((T.x * T.x + T.y * T.y) <= k.r * k.r) {
			rez++;
		}
	}
	return rez;
}