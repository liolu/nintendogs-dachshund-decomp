#include "m2c.h"
extern void *data_02159e64;
extern void *data_0215a04c;
extern void *data_0214d750;
void func_02116dec(s32, s32);
void func_02116d20(s32, s32);
s32 func_01ffdb08(s32);
s32 func_0202816c(s32);
void func_020d0108(s32, s32);
s32 func_020e5458(void);
void func_020cfb98(s32, s32, s32);
void func_02028174(s32);
void func_020d2c64(s32, s32, s32, s32, s32);
s32 func_02122d20(s32, s32);
void func_02041e98(s32);
void func_020d1b74(s32);
void func_020d1bc4(s32, s32, s32);
void func_020d08e8(void);
s32 func_020d0c6c(s32, s32, s32, s32);
void func_020d08c8(void);
void func_020d2c38(void);
void func_021227f8(s32 arg0) {
    s32 v;
    s32 base;
    s32 t;
    s16 f;
    u16 idx;
    u16 i;

    switch (M2C_FIELD(arg0, s16 *, 0x2A)) {
    case 0:
        if (M2C_FIELD(data_02159e64, s32 *, 0xA4) == 0) {
            return;
        }
        switch (M2C_FIELD(data_02159e64, s16 *, 0x9A)) {
        case 0:
            if (M2C_FIELD(data_0215a04c, u16 *, 0) != 0x11) {
                M2C_FIELD(arg0, u16 *, 0x2A) = 1;
                func_020d2c64(0, 0x4B0, 0, (s32) func_02122d20, 0);
            } else {
                func_02116dec(arg0, 0x19);
                func_02116d20(arg0, 0);
            }
            f = M2C_FIELD(arg0, s16 *, 0x112);
            v = func_01ffdb08(f);
            base = func_0202816c(v);
            t = M2C_FIELD(arg0, s16 *, 0x114) * 0x3C + (base + 0x90);
            func_020d0108(t, func_020e5458());
            func_020cfb98(base, (s32) data_0214d750 + 0x1C, (s32) data_0214d750 + 0x2C);
            func_02028174(v);
            return;
        case 1:
            func_02116dec(arg0, 0x16);
            func_02116d20(arg0, 0);
            func_020e77dc();
            return;
        }
        return;
    case 1:
        if (M2C_FIELD(data_02159e64, s16 *, 0x6C) != 2) {
            return;
        }
        f = M2C_FIELD(arg0, s16 *, 0x112);
        func_02041e98((s8) f);
        func_020d1b74(f);
        func_020d1bc4(0, 0, 0);
        func_020d08e8();
        func_020d0c6c(0, 0, 0, 1);
        idx = (u16) f;
        func_020d0c6c(1, idx, 0, 1);
        for (i = 0; i < 0x14; i++) {
            func_020d0c6c(2, idx, i, 1);
        }
        func_020d08c8();
        func_020d2c38();
        func_02116dec(arg0, 0x19);
        func_02116d20(arg0, 0);
        return;
    }
}
