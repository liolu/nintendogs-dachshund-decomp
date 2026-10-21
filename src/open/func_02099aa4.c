#include "m2c.h"
extern s32 data_02154f04;
extern void *data_021545d8;
extern s16 data_021545fc;
extern s32 data_02154658;
extern s32 data_0215465c;
extern char data_02154f40[];
extern char data_02154f18[];
extern char data_02154f2c[];
extern char data_0215483c[];
s32 func_0207fdcc(void *mq, void *msg, s32 flags);
s32 func_02094814(void *arg0, s32 arg1, s32 *arg2, s32 arg3, s16 arg4);
void func_0206cbc4(u16 data, void *dest, s32 size);
s32 func_0207fe78(void *mq, void *msg, s32 flags);
s32 func_020958c8(void *arg0, s32 arg1, s32 arg2);
void func_020968e8(void);
void func_02099aa4(void) {
    s32 msg;
    s32 res;
    s32 tag;
    s32 id;
    s32 arg;
    s32 j;
    s32 v;
    s32 hi;
    s32 lo;
    s32 k;
    char *p;
    volatile u16 zero;

    data_02154f04 = 1;
    lo = -0x8000;
    hi = 0x7fff;
    for (;;) {
        func_0207fdcc(data_02154f40, &msg, 1);
        id = msg & 0xffffff;
        tag = msg & 0xff000000;
        res = func_02094814(data_021545d8, data_0215465c, &data_02154658, 0, data_021545fc);
        if (tag == 0x10000000) {
            if ((u32) (res + 3) <= 1) {
                zero = 0;
                func_0206cbc4(zero, (void *) data_0215465c, data_02154658 * 2);
            } else if (res == -4) {
                for (j = 0; (u32) j < (u32) data_02154658; j++) {
                    v = ((s16 *) data_0215465c)[j] * 15;
                    if (v > hi) {
                        v = hi;
                    } else if (v < lo) {
                        v = lo;
                    }
                    ((s16 *) data_0215465c)[j] = v;
                }
            }
            func_0207fe78(data_02154f18, (void *) 0x504c4159, 0);
            arg = 0xc00;
        } else {
            arg = 0;
        }
        if (res == 0) {
            res = func_020958c8(data_0215483c, id, arg);
        }
        if (res != -1 && res != 0) {
            p = data_0215483c;
            for (k = 0; (u32) k < 3; k++) {
                *(s32 *) (p + 0x80) = 0;
                *(s32 *) (p + 0x84) = res;
                p += 0x88;
            }
        }
        func_020968e8();
        func_0207fe78(data_02154f2c, (void *) (tag + 0x46494e), 0);
    }
}
