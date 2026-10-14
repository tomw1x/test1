#pragma once
#include "D1.h"
#include "B2.h"

class D2 : private D1, private B2 {
    int d2;
public:
    D2(int x, int y, int z, int w);
    void show();
};