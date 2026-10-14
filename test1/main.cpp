#include "D3.h"
#include <iostream>
using namespace std;

int main() {
    cout << "=== Creating D3 object ===" << endl;
    D3 obj(10, 20, 30, 40, 50);

    cout << "\n=== Calling show() ===" << endl;
    obj.show();

    return 0;
}