#include "m2c.h"

extern u8 *data_021555f8;
s32 func_02044980(s16);
s32 func_01ffdb08(s16);
void func_020a80bc(s32, void *, s32);
void func_020aa73c(s32, void *, void *);
void func_020aa550(s32);
void func_020aa380(s32);
void func_020afbc4(s32);
void func_020bd064(s32, s32, void *);
s32 func_021144f0(s32, void *, s32);
void func_020afbf4(s32);
void func_0208b9c8(s32, s32);
void func_020aa218(s32);
void func_020aa160(s32);
s32 func_020aa02c(s32);
s32 func_020a9f20(s32);
s32 func_020afb54(s32, s32);
s32 func_020afb00(s32);
void func_020a9d9c(s32);

void func_020a9ae4(s32 arg0) {
    u8 *p;
    s32 a;
    s32 cond;
    u8 buf0[0xc];
    u8 buf1[0xc];
    u8 buf2[0xc];

    switch (*(s16 *) (arg0 + 0x90)) {
    case 1:
        func_020aa73c(arg0, 0, 0);
        func_020aa550(arg0);
        func_020aa380(arg0);
        break;
    case 2:
        func_02044980(*(s16 *) (arg0 + 0x9c));
        p = *(u8 **) (arg0 + 0x214);
        func_020a80bc(arg0, buf0, 0x8000);
        if (*(s32 *) (p + 0x1c) == 0) {
            func_020aa73c(arg0, buf0, 0);
        } else {
            func_020aa73c(arg0, 0, buf0);
        }
        func_020aa380(arg0);
        if (*(s32 *) (data_021555f8 + 0x24) != 0) {
            func_020afbc4(arg0);
            return;
        }
        p = *(u8 **) (arg0 + 0x214);
        a = func_02044980(*(s16 *) (arg0 + 0x9c));
        func_020bd064((s32) p, 1, (void *) buf1);
        func_020bd064((s32) p, 2, (void *) buf2);
        if (func_021144f0(a, buf1, 0xe66) != 0) {
            cond = 1;
        } else {
            cond = func_021144f0(a, buf2, 0xe66) != 0;
        }
        if (cond != 0) {
            func_020afbf4(arg0);
            func_0208b9c8(arg0 + 0x190, 5);
        }
        return;
    case 3:
        func_020aa218(arg0);
        return;
    case 4:
        func_020aa160(arg0);
        return;
    case 5:
        func_020aa02c(arg0);
        return;
    case 6:
        func_02044980(*(s16 *) (arg0 + 0x9c));
        func_01ffdb08(*(s16 *) (arg0 + 0x98));
        switch (func_020a9f20(arg0)) {
        case 0:
            break;
        case 1:
            func_020afb54(arg0, *(s16 *) (arg0 + 0x98));
            break;
        case 2:
            func_020afbf4(arg0);
            func_0208b9c8(arg0 + 0x190, 6);
            break;
        }
        return;
    case 7:
        func_020a9d9c(arg0);
        return;
    case 8:
        func_02044980(*(s16 *) (arg0 + 0x9c));
        func_01ffdb08(*(s16 *) (arg0 + 0x98));
        switch (func_020a9f20(arg0)) {
        case 0:
            break;
        case 1:
            func_020afb00(arg0);
            break;
        case 2:
            func_020afbf4(arg0);
            func_0208b9c8(arg0 + 0x190, 6);
            break;
        }
        return;
    default:
        break;
    }
}
