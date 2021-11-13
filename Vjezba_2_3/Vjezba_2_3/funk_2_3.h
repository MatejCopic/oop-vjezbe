#include <iostream>

typedef struct {

	double x;
	double y;

}tocka;

typedef struct {

	tocka s;
	double r;

}kruznica;

typedef struct {

	tocka a;
	tocka b;

}pravokutnik;


void UnosKruznice(kruznica* k);
void UnosPravokutnika(pravokutnik* arr, int n);
int  Presjek(kruznica& k, pravokutnik* arr, int n);