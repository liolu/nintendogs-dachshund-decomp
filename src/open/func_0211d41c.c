#include "m2c.h"
s32 func_02116da0(s32 arg0);
M2C_UNK func_ov005_0216294c(void);
void func_020d2c64(s16, s32, s32, s32, s32);
s32 func_0211d5d8(s32);
s32 func_020e145c(void);
void func_02118da0(s32 arg0);
void func_02117964(s32 arg0);
extern void *data_02159e70;
extern void *data_0215a064;
extern void *data_02159e64;
void func_0211d41c(s32 arg0) {
    s32 mode;
    s32 anim;

    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        if (func_02116da0(arg0) != 0) {
            M2C_FIELD(arg0, u16 *, 0x2A) = 0;
        }
        return;
    case 1:
        switch (M2C_FIELD(arg0, s16 *, 0x2A)) {
        case 0:
            if (M2C_FIELD(data_02159e70, s32 *, 0x48BC) == 1) {
                M2C_FIELD(arg0, u16 *, 0x2E) = 2;
                M2C_FIELD(arg0, u16 *, 0x30) = 0;
                M2C_FIELD(arg0, u16 *, 0x100) = 7;
                return;
            }
            if (func_ov005_0216294c() != 0) {
                M2C_FIELD(arg0, u16 *, 0x2A) = 1;
                M2C_FIELD(arg0, u16 *, 0x30) = 0;
                func_020d2c64(2, 0xDBA, 0, (s32) func_0211d5d8, 1);
                M2C_FIELD(data_0215a064, u32 *, 0x20) &= ~1;
                return;
            }
            anim = func_020e145c();
            mode = -1;
            if (anim != 1) {
                if (anim == 2) {
                    mode = 0x6E;
                }
            } else {
                mode = 0x6F;
            }
            if (mode == -1) {
                return;
            }
            if (M2C_FIELD(arg0, s16 *, 0x7C) == mode) {
                return;
            }
            func_02118da0(arg0);
            M2C_FIELD(arg0, s16 *, 0x7C) = mode;
            func_02117964(arg0);
            return;
        case 1:
            if (M2C_FIELD(data_02159e64, s32 *, 0xA4) == 0) {
                return;
            }
            M2C_FIELD(arg0, u16 *, 0x2E) = 2;
            M2C_FIELD(arg0, u16 *, 0x30) = 0;
            M2C_FIELD(arg0, u16 *, 0x100) = 7;
            return;
        }
        return;
    case 2:
        break;
    }
}
