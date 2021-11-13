#include <iostream>
#include "funk_2_2.h"

using namespace std;

int main(){

    int arr[] = { 10,20,30,40 };
    int i = 2;
    int x = 4;
    funk(arr, i, x) += 1;
    for (int j = 0; j < x; j++) {
        cout << arr[j] << endl;
    }
}