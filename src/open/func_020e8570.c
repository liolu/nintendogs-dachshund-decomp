#include "m2c.h"
extern s8 data_021452c0[];
extern s8 data_021452cc[];
extern s8 data_021452dc[];
void func_0205ece8();
s32 func_020e7ec4();
s32 func_02006b68();
void func_020e83d0();
s32 func_020e8570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s8 buf1[0x40];
    s8 buf2[0x40];
    s8 buf3[0x40];
    s32 h1;
    s32 h2;
    s32 h3;
    s32 res;

    res = 0;
    func_0205ece8(buf1, 0x40, data_021452c0, arg3);
    func_0205ece8(buf2, 0x40, data_021452cc, arg3);
    func_0205ece8(buf3, 0x40, data_021452dc, arg3);
    h1 = func_020e7ec4(arg0, buf1);
    h2 = func_020e7ec4(arg0, buf2);
    h3 = func_020e7ec4(arg0, buf3);
    if (h1 != 0 && h2 != 0 && h3 != 0) {
        func_020e83d0(arg1, arg2, arg4, h1, h2, func_02006b68(), (u16) arg5, (u16) arg6);
        res = 1;
    }
    return res;
}
