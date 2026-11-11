#include "m2c.h"
extern u8 data_0213aa32[];
double func_020622f4(double x, double y)

{
    volatile int *p = (volatile int *) &x;
    p[1] &= 0x7FFFFFFF;
    return *(volatile double *) &x;
}
