#include "m2c.h"
extern void *data_02159e70;
extern char *data_02159fc4;
void func_020e3e2c(s32);
void func_020dd9e4(void);
void func_020e3878(s32);
s32 func_020d63cc(s32, s32, s32, s32);
void func_020e1cec(s32 *arg0, s32 arg1) {
    s32 *p;
    s32 tmp;
    char *base;

    if (M2C_FIELD(data_02159e70, s32 *, 0xA8) == 6 && *(s32 *) data_02159fc4 != 9) {
        func_020e3e2c(9);
    }
    M2C_FIELD(data_02159e70, s32 *, 0x1D1C) = 8;
    func_020e3878(arg1);
    func_020e3e2c(9);
    p = data_02159e70;
    if (M2C_FIELD(p, s32 *, 0xB8) == 2) {
        M2C_FIELD(p, s32 *, 0x1D0C) = 1;
        tmp = M2C_FIELD(p, s32 *, 0x1D0C);
        base = (char *) p + 0x1D0C;
        if (tmp != 4) {
            M2C_FIELD(base, s32 *, 4) = tmp;
        }
    }
    func_020dd9e4();
    base = data_02159fc4 + 0x160;
    M2C_FIELD(base, s32 *, 0) = 1;
    M2C_FIELD(base, s32 *, 4) = arg0[0];
    M2C_FIELD(base, s32 *, 8) = arg0[0];
    M2C_FIELD(base, s32 *, 0xC) = arg0[1];
    M2C_FIELD(base, s32 *, 0x10) = arg0[2];
    M2C_FIELD(base, s16 *, 0x14) = arg1;
    if (arg1 == 2) {
        M2C_FIELD(base, s32 *, 0x1C) = func_020d63cc(0, 0, 0x1AF4, 0);
    } else {
        M2C_FIELD(base, s32 *, 0x1C) = func_020d63cc(0, 0, 0x1AF5, 0);
    }
    M2C_FIELD(base, s32 *, 0x20) = 1;
}
