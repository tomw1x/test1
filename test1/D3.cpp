#include "D3.h"
#include <iostream>
using namespace std;

D3::D3(int x, int y, int z, int w, int v) : D2(y, z, w, v) {
    d3 = x;
    cout << "D3 constructor called, d3 = " << d3 << endl;
}

void D3::show() {
    D2::show();
    cout << "D3::d3 = " << d3 << endl;
}