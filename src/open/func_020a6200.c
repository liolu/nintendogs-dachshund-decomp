#include "m2c.h"

typedef void (*Fn)(s32);

extern void *data_021555f8;
extern void func_020abb48(s32 arg0);
extern void func_020f7cf8(void);
extern s32 func_020e8384(s32 arg0, s32 arg1);
extern void func_020c85b4(s32 arg0);
extern void func_020c83b8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_020c83a0(s32 arg0);

s32 func_020a6200(s32 arg0, s32 arg1) {
    s16 val;
    s32 p;
    u16 code;
    s32 flag;
    s32 ok;
    s32 obj;
    Fn f;

    if (M2C_FIELD(data_021555f8, s16 *, 0x2C) != 0) {
        return 0;
    }
    M2C_FIELD(data_021555f8, s16 *, 0x22) = arg1;
    val = M2C_FIELD(data_021555f8, s16 *, 0x22);
    switch (val) {
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
        func_020abb48(val);
        break;
    case 0x45:
        func_020f7cf8();
        break;
    default:
        M2C_FIELD(data_021555f8, s32 *, 0x30) = 0;
        M2C_FIELD(data_021555f8, s32 *, 0x34) = 0;
        break;
    }
    f = M2C_FIELD(data_021555f8, Fn *, 0x30);
    if (f != NULL) {
        f(M2C_FIELD(data_021555f8, s32 *, 0x28));
    } else {
        val = M2C_FIELD(data_021555f8, s16 *, 0x22);
        switch (val) {
        case 0x45:
            flag = 7;
            break;
        default:
            flag = 1;
            break;
        }
        p = func_020e8384(0, val);
        code = *(u16 *) (p + 0xE);
        switch (val) {
        case 0x4F:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5A:
        case 0x5B:
        case 0x5C:
        case 0x5D:
        case 0x5E:
        case 0x5F:
        case 0x60:
        case 0x61:
        case 0x62:
        case 0x63:
        case 0x64:
            ok = 0;
            break;
        default:
            ok = 1;
            break;
        }
        if (ok) {
            obj = M2C_FIELD(data_021555f8, s32 *, 0x28);
            func_020c85b4(obj);
            func_020c83b8(obj, code, flag, 0x218);
            func_020c83b8(obj, 0x5E, flag, 0x88);
            func_020c83a0(obj);
        } else {
            obj = M2C_FIELD(data_021555f8, s32 *, 0x28);
            func_020c85b4(obj);
            func_020c83b8(obj, code, flag, 0x218);
            func_020c83a0(obj);
        }
    }
    M2C_FIELD(data_021555f8, s16 *, 0x2C) = 1;
    return 1;
}
