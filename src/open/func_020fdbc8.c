#include "m2c.h"
extern void *data_0215a030;
void func_02087e90(void *arg0);
void func_02087edc(void *arg0);
void func_0207e124(void);
void func_020fdbc8(void) {
    s16 i;
    u8 *p;
    s32 off;
    s32 flag;

    i = 0;
    off = 0;
    do {
        p = (u8 *) data_0215a030 + 0x30 + off;
        flag = (M2C_FIELD(p, u32 *, 0xC) & 0x10) != 0;
        if (flag) {
            func_02087e90(p);
            func_02087edc(p);
        }
        if (M2C_FIELD(p, s32 *, 0x4C) != 0) {
            func_0207e124();
            M2C_FIELD(p, s32 *, 0x4C) = 0;
        }
        i = (s16) (i + 1);
        off += 0x54;
    } while (i < 3);
    data_0215a030 = 0;
}
