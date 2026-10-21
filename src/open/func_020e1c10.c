#include "m2c.h"
extern s32 *data_02159e70;
extern char *data_02159fc4;
void func_020e3e2c(s32);
void func_020dd9e4(void);
s32 func_020d63cc(s32, s32, s32, s32);
void func_020e1c10(s32 arg0, s32 arg1) {
    s32 tmp;
    s32 *p;
    s32 *q;
    char *base;

    if (M2C_FIELD(data_02159e70, s32 *, 0xA8) == 6 && *(s32 *) data_02159fc4 != 9) {
        func_020e3e2c(9);
    }
    M2C_FIELD(data_02159e70, s32 *, 0x1D1C) = 0xE;
    func_020e3e2c(9);
    p = data_02159e70;
    if (M2C_FIELD(p, s32 *, 0xB8) == 2) {
        M2C_FIELD(p, s32 *, 0x1D0C) = 2;
        tmp = M2C_FIELD(p, s32 *, 0x1D0C);
        q = (s32 *) ((char *) p + 0x1D0C);
        if (tmp != 4) {
            q[1] = tmp;
        }
    }
    func_020dd9e4();
    base = data_02159fc4 + 0x160;
    M2C_FIELD(base, s32 *, 4) = arg0;
    M2C_FIELD(base, s32 *, 0x18) = arg1;
    M2C_FIELD(base, s32 *, 0x1C) = func_020d63cc(0, 0, 0x1AF6, 0);
    M2C_FIELD(base, s32 *, 0x20) = 1;
}
