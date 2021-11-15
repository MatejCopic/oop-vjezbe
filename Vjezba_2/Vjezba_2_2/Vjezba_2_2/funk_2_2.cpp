#include <iostream>
#include "funk_2_2.h"
#define  NULL

using namespace std;

int& funk(int* arr, int i,  int x) {
    if (i > x) {
        return NULL;
    }
    return arr[i];
}