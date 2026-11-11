#include "m2c.h"

extern u8 *data_0215a064;
extern u8 *data_021555f8;
s32 func_02044980(s16);
s32 func_01ffdb08(s16);
void func_020a80bc(s32, void *, s32);
void func_02114658(s32, void *, void *);
void func_020a8ac8(s32, s32, void *);
void func_020aa73c(s32, void *, void *);
void func_020aa380(s32);
s32 func_02033eac(s32);
s32 func_02033e94(s32);

s32 func_020a9f20(s32 arg0) {
    u8 *p;
    s32 a;
    s32 b;
    u8 buf0[0xc];
    u8 buf1[0xc];
    u8 buf2[0xc];

    p = *(u8 **) (arg0 + 0x214);
    a = func_02044980(*(s16 *) (arg0 + 0x9c));
    b = func_01ffdb08(*(s16 *) (arg0 + 0x98));
    func_020a80bc(arg0, buf2, 0x8000);
    func_02114658(a, buf0, buf2);
    func_020a8ac8(arg0, b, buf1);
    if (*(s32 *) (p + 0x1c) == 0) {
        func_020aa73c(arg0, buf0, buf1);
    } else {
        func_020aa73c(arg0, buf1, buf0);
    }
    func_020aa380(arg0);
    if ((*(u16 *) (data_0215a064 + 0x84) & 1) == 0 || *(s32 *) (data_021555f8 + 0x24) != 0) {
        return 1;
    }
    if (func_02033eac(b) == 0) {
        if (func_02033e94(b) == 0) {
            return 2;
        }
    }
    return 0;
}
