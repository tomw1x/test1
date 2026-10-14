#include "B1.h"
#include <iostream>
using namespace std;

B1::B1(int x) {
    b1 = x;
    cout << "B1 constructor called, b1 = " << b1 << endl;
}

void B1::show() {
    cout << "B1::b1 = " << b1 << endl;
}