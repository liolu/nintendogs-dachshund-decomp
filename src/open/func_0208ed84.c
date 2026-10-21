#include "m2c.h"
extern u8 data_0215446c[];
extern u8 data_0215422c[];
extern s32 *data_0213ceb4;
extern s32 data_02154474;
s32 func_02091c0c(s32 arg0);
s32 func_02070c84(s32 arg0);
void func_02070f88(s32 *arg0, s32 arg1);
s32 func_020733c0(void *arg0, s32 arg1);
void func_02070e7c(void **arg0, s32 arg1, s32 arg2);
void func_0208ed84(s32 arg0, s32 arg1) {
    s32 v;
    u8 *base;
    u8 *p;
    s32 old;

    base = data_0215446c;
    old  = *(s32 *) (base + 0x14);
    *(u16 *) base         = (u16) arg0;
    *(s32 *) (base + 0x18) = arg1;
    if (old != -1) {
        v = func_02091c0c(arg0);
        p = base + 8;
        if (*(void **) p != NULL && func_02070c84((s32) p) != v) {
            func_02070f88((s32 *) p, (s32) data_0213ceb4);
            func_020733c0(p, v);
        } else if (*(void **) p == NULL && v != 0xff) {
            func_020733c0(p, v);
        }
    }
    if (*(s32 *) (data_0215422c + 0x1c) == 0) {
        return;
    }
    if (data_02154474 == 0) {
        return;
    }
    func_02070e7c((void **) &data_02154474, 0, 0);
}
