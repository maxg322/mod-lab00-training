// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    int64_t r=1;
    for (int i=0; i<n; i++)
    {
        r=r*x;
    }
    return r;
}
