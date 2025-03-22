// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    int 64_t r=1;
    if (n==0)
    {
        return 1;
    }
    for (int i=0; i<n; i++)
    {
        r=r*x;
    }
    return r;
}
