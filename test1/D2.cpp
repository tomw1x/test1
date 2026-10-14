#include "D2.h"
#include <iostream>
using namespace std;

D2::D2(int x, int y, int z, int w) : D1(y, z), B2(w) {
    d2 = x;
    cout << "D2 constructor called, d2 = " << d2 << endl;
}

void D2::show() {
    D1::show();
    B2::show();
    cout << "D2::d2 = " << d2 << endl;
}