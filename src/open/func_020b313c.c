#include "m2c.h"
extern u32 data_0213ec48;
extern u32 data_0213edfc;
extern u32 data_0213ec7c;
extern u32 data_0213ec78;
extern u32 data_0213ec74;
extern u32 data_02155628;
extern u32 data_0213ec70;
void func_020b313c(u32 *arg0) {
    u32 a;
    u32 b;
    u32 c;

    c = data_0213ec7c;
    b = data_0213edfc;
    a = data_0213ec48;
    arg0[0] = a;
    arg0[1] = b;
    arg0[2] = c;
    c = data_02155628;
    b = data_0213ec74;
    a = data_0213ec78;
    arg0[3] = a;
    arg0[4] = b;
    arg0[5] = c;
    arg0[6] = 0;
    arg0[7] = 0x1000;
    arg0[8] = 0;
    arg0[9] = data_0213ec70;
}
