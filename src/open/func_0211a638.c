#include "m2c.h"

extern void *data_0215a044;
extern void *data_0214d750;

s32 func_01ffdb08(s32 arg0);
s32 func_0202816c(s32 arg0);
s32 func_020cfe34(s32 arg0);
s32 func_020cfb38(s32 arg0, s32 arg1, s32 arg2);
s32 func_020cfdc0(s32 arg0, s32 arg1, s32 arg2);
s32 func_02027f68(s32 arg0, s32 arg1);

s32 func_0211a638(s32 arg0) {
    s32 *p;
    s32 obj;
    s32 base;
    s32 ret;
    s32 idx;

    obj = func_01ffdb08(arg0);
    base = func_0202816c(obj);
    ret = -1;
    p = M2C_FIELD(data_0215a044, s32 **, 4);
    if (M2C_FIELD(p, s16 *, 0) != 7) {
        idx = 0;
    } else {
        idx = M2C_FIELD(M2C_FIELD(p, s32 *, 0x1C), s16 *, 4);
    }
    switch (idx) {
    case 0:
        break;
    case 6:
        if (func_020cfe34(base) == 0) {
            ret = 0;
            break;
        }
        if (func_020cfdc0(base, (s32) data_0214d750 + 0x1C, (s32) data_0214d750 + 0x2C) == 0) {
            ret = 1;
        }
        break;
    case 7:
        if (func_020cfe34(base) == 0) {
            ret = 0;
        }
        break;
    case 1:
        if (func_020cfe34(base) == 0) {
            ret = 0;
            break;
        }
        if (func_020cfb38(base, (s32) data_0214d750 + 0x1C, (s32) data_0214d750 + 0x2C) != 0) {
            ret = 2;
            break;
        }
        if (func_02027f68(obj, 3) == 0x2710) {
            ret = 4;
        } else if (func_02027f68(obj, 4) == 0x2710) {
            ret = 5;
        } else if (func_02027f68(obj, 7) == 0) {
            ret = 6;
        }
        break;
    case 3:
        if (func_020cfe34(base) == 0) {
            ret = 0;
            break;
        }
        if (func_020cfb38(base, (s32) data_0214d750 + 0x1C, (s32) data_0214d750 + 0x2C) != 0) {
            ret = 2;
            break;
        }
        if (func_02027f68(obj, 3) == 0x2710) {
            ret = 4;
        } else if (func_02027f68(obj, 4) == 0x2710) {
            ret = 5;
        } else if (func_02027f68(obj, 7) == 0) {
            ret = 6;
        }
        break;
    case 2:
        if (func_020cfe34(base) == 0) {
            ret = 0;
            break;
        }
        if (func_020cfb38(base, (s32) data_0214d750 + 0x1C, (s32) data_0214d750 + 0x2C) != 0) {
            ret = 2;
            break;
        }
        if (M2C_FIELD(base, s16 *, 0x6A) <= 0) {
            ret = 3;
            break;
        }
        if (func_02027f68(obj, 3) == 0x2710) {
            ret = 4;
        } else if (func_02027f68(obj, 4) == 0x2710) {
            ret = 5;
        } else if (func_02027f68(obj, 7) == 0) {
            ret = 6;
        }
        break;
    case 4:
    case 5:
        if (func_020cfe34(base) == 0) {
            ret = 0;
        }
        break;
    }
    return ret;
}
