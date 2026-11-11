/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_01ffda04(s16);
s32 func_0200b7f4(void *, void *, void *);
void func_ov004_0215f330(s32, s32, void *, s32 *);
s32 func_ov004_021607e4(s16, s32);
extern u8 *data_ov004_02163cc4;

u16 func_ov004_0216069c(void *arg0, void *arg1) {
    s16 i;
    s32 f;
    u16 out;
    s32 val;
    s32 v;
    s32 buf[4];
    s32 r5;
    s32 ret;
    s64 p;

    f   = func_01ffda04(*(s16 *) (data_ov004_02163cc4 + 0x24));
    out = 0;
    i   = 0;
    do {
        val = func_ov004_021607e4(i, *(s32 *) (data_ov004_02163cc4 + 0x28));
        func_ov004_0215f330(f, val, buf, &v);
        p   = (s64) v * v + 0x800;
        r5  = (s32) (p >> 12);
        ret = func_0200b7f4(buf, arg0, arg1);
        if (ret < r5) {
            out = (u16) (out | (1 << i));
        }
        i++;
    } while (i < 6);
    return out;
}
