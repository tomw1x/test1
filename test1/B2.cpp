#include "B2.h"
#include <iostream>
using namespace std;

B2::B2(int x) {
    b2 = x;
    cout << "B2 constructor called, b2 = " << b2 << endl;
}

void B2::show() {
    cout << "B2::b2 = " << b2 << endl;
}