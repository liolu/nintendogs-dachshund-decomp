/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020a72bc(s32, void *);
s32 func_02027eb8(s32, s32);
extern u16 data_ov003_0219881c[];
extern void *data_0215a04c;

s32 func_ov003_021985b0(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 r;
    s32 t;
    s32 flag;
    u16 v;

    if (*(s16 *) (arg1 + 0x90) != 3) {
        return 0;
    }
    if (*(s16 *) (arg1 + 0x96) == 6) {
        return 0;
    }
    if (*(s16 *) (arg1 + 0x96) == 0x11) {
        return 1;
    }
    if (*(s16 *) (arg1 + 0x96) == 0xe) {
        return 0;
    }
    if (func_020a72bc((s32) arg0, arg1) == 0) {
        return 0;
    }
    r = func_02027eb8((s32) arg0, 0);
    v = *(u16 *) data_0215a04c;
    if (v == 10) {
        flag = 1;
    } else {
        flag = (v == 1);
    }
    if (flag == 0) {
        t = data_ov003_0219881c[*(s8 *) (arg0 + 0x8d)];
        return arg2 >= t;
    }
    if (r < 0x7d0) {
        t = (1000 - r) * data_ov003_0219881c[*(s8 *) (arg0 + 0x8d)];
        return arg2 >= t / 1000;
    }
    return 1;
}
