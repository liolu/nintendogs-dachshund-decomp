/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_01ffdb08(s16);
s32 func_0200b890(void *, void *, void *);
void func_ov005_02161768(s32, s32, void *, s32 *);
s32 func_ov005_021629c0(s16, s32);
extern u8 *data_ov005_02165fa4;

u16 func_ov005_02162878(void *arg0, void *arg1) {
    s16 i;
    s32 f;
    u16 out;
    s32 val;
    s32 v;
    s32 buf[4];
    s32 r5;
    s32 ret;
    s64 p;

    f   = func_01ffdb08(*(s16 *) (data_ov005_02165fa4 + 0x24));
    out = 0;
    i   = 0;
    do {
        val = func_ov005_021629c0(i, *(s32 *) (data_ov005_02165fa4 + 0x28));
        func_ov005_02161768(f, val, buf, &v);
        p   = (s64) v * v + 0x800;
        r5  = (s32) (p >> 12);
        ret = func_0200b890(buf, arg0, arg1);
        if (ret < r5) {
            out = (u16) (out | (1 << i));
        }
        i++;
    } while (i < 6);
    return out;
}
