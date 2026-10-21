#include "m2c.h"
extern s32 data_0213ea70;
extern s32 data_0213ea84;
extern s32 data_0213ea88;
void func_020b1314(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4);
void func_021147a4(s32 arg0);
void func_020ac8bc(void *arg0, void *arg1) {
    void *sub;
    s32 x;
    s32 v;

    x = M2C_FIELD(arg0, s32 *, 0xB4);
    sub = M2C_FIELD(arg0, void **, 0x214);
    if (x < 0) {
        v = (s32) (((s64) M2C_FIELD(sub, s32 *, 0x0) * data_0213ea70 + 0x800) >> 12);
        M2C_FIELD(sub, s32 *, 0x0) = v;
    }

    if (M2C_FIELD(sub, s16 *, 0x8) != 1) {
        M2C_FIELD(sub, s16 *, 0x8) = 1;
        func_020b1314(arg0, arg1, data_0213ea88, data_0213ea84, 0);
    } else {
        func_020b1314(arg0, arg1, data_0213ea88, data_0213ea84, -1);
    }

    func_021147a4(0);
}
