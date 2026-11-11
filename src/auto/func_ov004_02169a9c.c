/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0203535c(void *);
s32 func_0202f9b4(void *);
void func_02027644(void *, void *);
void func_0203910c(void *);
void func_02037130(void *, s32);
s32 func_ov004_02169ec8(void *, s32);
void func_0203e5e8(void *, s32);
extern u32 *data_0214da84;

typedef struct T12 {
    s32 w0;
    s32 w1;
    s32 w2;
} T12;

void func_ov004_02169a9c(void *arg0) {
    u8 *a;
    s32 t6;
    s32 r5;
    s32 ret;
    u32 v;
    u16 idx;

    a  = arg0;
    t6 = func_0203535c(arg0);
    r5 = func_0202f9b4(arg0);
    if (r5 != 0) {
        func_02027644((void *) r5, a + 0x26C);
        *(T12 *) (a + 0x3B4) = *(T12 *) (a + 0x26C);
        func_0203910c(arg0);
        func_02037130(arg0, 0x300);
    }
    ret = func_ov004_02169ec8(arg0, r5);
    if (ret != 0) {
        return;
    }
    if (t6 == 0) {
        return;
    }
    if (*(s32 *) (a + 0x488) >= 2) {
        v              = *data_0214da84 * 0x10DCD + 1;
        idx            = (u16) (((u32) (u16) v * 3) >> 16);
        *data_0214da84 = v;
        switch (idx) {
            case 0:
                func_0203e5e8(arg0, 0x4CC);
                return;
            case 1:
                func_0203e5e8(arg0, 0x4CD);
                return;
            case 2:
                func_0203e5e8(arg0, 0x4CE);
                return;
            default:
                return;
        }
    }
    v              = *data_0214da84 * 0x10DCD + 1;
    idx            = (u16) ((v << 16) >> 31);
    *data_0214da84 = v;
    switch (idx) {
        case 0:
            func_0203e5e8(arg0, 0x4CD);
            return;
        case 1:
            func_0203e5e8(arg0, 0x4CE);
            return;
        default:
            return;
    }
}
