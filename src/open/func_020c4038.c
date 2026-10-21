#include "m2c.h"
void func_020a7470(u8 *arg0);
void func_0208bad4(u8 *arg0, s16 arg1);
void func_020c4038(u8 *arg0) {
    extern s64 func_02080978();
    s32 *p;
    s16 v;
    s16 level;

    p = *(s32 **) (arg0 + 0x214);
    func_020a7470(arg0);
    v = (s16) (s32) (func_02080978() / 100);
    level = *(s16 *) (arg0 + 0x94);
    if (level == 0x20) {
        p[1] = v * 1900 / 99 + 100;
        p[2] = 1;
    } else if (v >= 99 && level == 0x1F) {
        p[1] = 1000000;
        p[2] = 6;
    } else if (v >= 99 && level == 0x1E) {
        p[1] = 300000;
        p[2] = 5;
    } else if (v >= 95 && level == 0x1F) {
        p[1] = (v - 95) * 20000 + 100000;
        p[2] = 4;
    } else if (v >= 90 && (u16) (s16) (level - 0x1E) <= 1) {
        p[1] = (v - 90) * 5000 + 50000;
        p[2] = 3;
    } else if (v >= 80) {
        p[1] = (v - 80) * 500 + 10000;
        p[2] = 2;
    } else if (v >= 50) {
        p[1] = (v - 50) * 50 + 500;
        p[2] = 1;
    } else {
        p[1] = v * 400 / 49 + 100;
        p[2] = 0;
    }
    p[1] = p[1] / 5;
    func_0208bad4(arg0 + 0x190, *(s16 *) (arg0 + 0x94));
}
