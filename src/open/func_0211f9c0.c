#include "m2c.h"
extern s16 data_02134eb4[];
extern s16 data_02134ec0[];
extern s16 data_02134ec8[];
u32 func_02080978(void);
void func_0211f9c0(s32 arg0, s32 arg1, s32 arg2) {
    s32 n = 0;
    s16 *table = 0;
    u32 seed;
    u16 idx;

    seed = func_02080978();
    switch (arg2) {
    case 1:
        n     = 2;
        table = data_02134eb4;
        if (arg1 == 0) {
            *(s16 *) (arg0 + 0x3C) = 0x78;
        } else {
            *(s16 *) (arg0 + 0x3C) = 0xB4;
        }
        break;
    case 2:
        n     = 4;
        table = data_02134ec0;
        if (arg1 == 0) {
            *(s16 *) (arg0 + 0x3C) = 0xB4;
        } else {
            *(s16 *) (arg0 + 0x3C) = 0x12C;
        }
        break;
    case 3:
        n     = 5;
        table = data_02134ec8;
        if (arg1 == 0) {
            *(s16 *) (arg0 + 0x3C) = 0x12C;
        } else {
            *(s16 *) (arg0 + 0x3C) = 0x258;
        }
        break;
    case 4:
        n     = 5;
        table = data_02134ec8;
        if (arg1 == 0) {
            *(s16 *) (arg0 + 0x3C) = 0x258;
        } else {
            *(s16 *) (arg0 + 0x3C) = 0x384;
        }
        break;
    case 5:
        n     = 5;
        table = data_02134ec8;
        if (arg1 == 0) {
            *(s16 *) (arg0 + 0x3C) = 0x384;
        } else {
            *(s16 *) (arg0 + 0x3C) = 0x4B0;
        }
        break;
    }

    idx                    = (u16) ((u32) ((u16) n * (u16) (seed * 0x10DCD + 1)) >> 16);
    *(s16 *) (arg0 + 0x3E) = table[(s16) idx];
}
