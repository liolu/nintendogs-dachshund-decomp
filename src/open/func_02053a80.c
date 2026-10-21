#include "m2c.h"
extern s32 *data_0214da84;
extern s32 func_02036258(s32);
extern s32 func_0202daec(s32);
extern s32 func_0202dfe4(s32);
extern s32 func_02027884(s32, s32);
extern s32 func_020276f8(s32);
extern void func_0203e5e8(s32, s32);
extern void func_02035fcc(s32, s32);
extern void func_0202706c(s32, s16);
s32 func_02053a80(s32 arg0) {
    s32 temp_r5;
    s32 temp_r0;
    s32 temp_r1;
    u16 rnd;
    s16 v;
    s16 v2;
    s32 sv;
    s32 flag;
    s32 ok;

    temp_r5 = func_02036258(arg0);
    if (temp_r5 == 0) {
        return 0;
    }
    if (func_0202daec(arg0) >= 0xD) {
        return 0;
    }
    if (func_0202dfe4(arg0) != 0) {
        func_0203e5e8(arg0, 0x286);
        return 1;
    }
    switch (func_02027884(arg0, temp_r5)) {
    case 2:
        func_0203e5e8(arg0, 0x287);
        return 1;
    case 1:
        temp_r0 = func_020276f8(temp_r5);
        v = *(s16 *) (arg0 + 0xEA);
        flag = ((v >= 0x26C) && (v <= 0x26F)) && (*(s16 *) (arg0 + 0x13E) == temp_r0);
        if (flag != 0) {
            ok = 1;
            goto check;
        }
        flag = (v >= 0x259) && (v <= 0x25F);
        if (flag != 0) {
            v2 = *(s16 *) (arg0 + 0xEE);
            flag = ((v2 >= 0x26C) && (v2 <= 0x26F)) && (*(s16 *) (arg0 + 0x13E) == temp_r0);
            if (flag != 0) {
                ok = 1;
                goto check;
            }
        }
        ok = 0;
    check:
        if (ok != 0) {
            func_0203e5e8(arg0, 0x285);
            return 1;
        }
        temp_r1 = (*data_0214da84 * 0x10DCD) + 1;
        *data_0214da84 = temp_r1;
        rnd = (u16) ((u32) (temp_r1 << 0x10) >> 0x1F);
        if (rnd == 0) {
            return 0;
        }
        func_0203e5e8(arg0, 0x286);
        return 1;
    case 0:
        switch (func_02027884(arg0, temp_r5)) {
        case 1:
        case 2:
            sv = *(s8 *) (arg0 + 0x88);
            func_02035fcc(temp_r5, (s16) sv);
            func_0202706c(temp_r5, 0x1c);
            break;
        case 0:
            sv = *(s8 *) (arg0 + 0x88);
            func_02035fcc(temp_r5, (s16) sv);
            func_0202706c(temp_r5, 0x1d);
            break;
        }
        func_0203e5e8(arg0, 0x288);
        return 1;
    }
    return 0;
}
