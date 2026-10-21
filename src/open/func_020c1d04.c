#include "m2c.h"
s32 func_020b29bc(s32);
s32 func_01ffdb08(s32);
void func_020b31c4(void *, s32);
void func_020ba16c(s32, s32, void *, s32, s32, s32);
s32 func_020a7e48(void);
s8 *func_020a5fcc(void);
void func_020b43d0(void *, s32 *, s32, s32);
void func_020ba364(s32, s32);
void func_020c1d04(s32 arg0, s32 arg1) {
    u8 buf[0x28];
    s32 tmp[3];
    s32 h;
    s32 v;
    s8 *p;

    h = func_020b29bc(-1);
    func_01ffdb08(h);
    switch (*(s16 *) (arg0 + 0x28)) {
    case 0:
        func_020b31c4(buf, h);
        func_020ba16c(arg0, arg0, buf, 0x100, 0x100, 0x80);
        break;
    case 1:
        break;
    case 2:
        v = func_020a7e48() + 0x2000;
        tmp[0] = 0;
        tmp[1] = 0x3000;
        tmp[2] = v;
        p = func_020a5fcc();
        func_020b43d0(buf, tmp, M2C_FIELD(p, s32 *, 0x70), h);
        func_020ba16c(arg0, arg0, buf, 0x80, 0x80, 0x40);
        break;
    default:
        break;
    }
    func_020ba364(arg0, arg1);
}
