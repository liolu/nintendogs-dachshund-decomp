#include "m2c.h"
extern void *data_02159e70;
extern void *data_0215a064;
s32 func_020dd600(void) {
    u8 *base;
    u8 *t;
    u32 *u;
    s32 ret;
    void *p;
    s32 v;
    s32 r6;

    base = data_02159e70;
    t = (u8 *) ((u32) base + 0x1DEC);
    u = (u32 *) ((u32) t + 0x294);
    ret = 1;
    if (*(u32 *) (base + 0x5034) == 0) {
        p = data_0215a064;
        v = *(s16 *) ((u8 *) p + 0x7E);
        if (v >= 0) {
            if (*u != 0) {
                ret = 0;
            } else {
                r6 = func_020e8668(0, v);
                if (func_020e7eb0() != 0) {
                    v = func_020e8688(*(s16 *) ((u8 *) func_020e8384(0, v) + 4));
                    func_020e7f9c();
                    func_020e8544(v, ret, 0x1b, r6, 2);
                    func_020ebb0c(ret, 0x1b, 2);
                }
            }
        }
    }
    return ret;
}
