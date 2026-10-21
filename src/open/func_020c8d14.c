#include "m2c.h"
extern u32 data_02159e18;
extern u32 data_02153dd0;
extern u32 data_02154578;
extern u32 data_02153dc4;
void func_020c8d14(u32 *arg0) {
    volatile u32 *src = arg0;
    register u32 a = src[0];
    u32 b = src[1];
    volatile u32 *dst = (volatile u32 *) &data_02159e18;
    dst[0] = a;
    dst[1] = b;
}
