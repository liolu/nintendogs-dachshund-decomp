#include "m2c.h"
extern s32 data_0215a03c;
extern void *data_0215a04c;
extern M2C_UNK (*data_02139cb4[])(M2C_UNK);
void func_02111b88(void *p, s32 v);
extern s8 data_0214ec20[];
void func_0206373c(void *arg0);
s32 func_02063750(void);
M2C_UNK func_02080c28();
M2C_UNK func_0207f3ec(void *p, s32 v);
M2C_UNK func_02080c3c(s32 arg0);
s32 func_02070064(void);
s32 func_02070144(void);
s32 func_0206ff7c(s32 arg0) {
    s32 d;
    s32 q;
    s32 r;
    s32 v;

    d = func_02070154();
    r = arg0 % d;
    q = arg0 / d;
    v = q + (r != 0);
    return (((v & 0x1F) != 0) + (v >> 5)) * 4;
}
