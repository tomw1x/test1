#include "D1.h"
#include <iostream>
using namespace std;

D1::D1(int x, int y) : B1(y) {
    d1 = x;
    cout << "D1 constructor called, d1 = " << d1 << endl;
}

void D1::show() {
    B1::show();
    cout << "D1::d1 = " << d1 << endl;
}
