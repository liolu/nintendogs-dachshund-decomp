#include "m2c.h"

typedef struct { u8 pad[0x3C]; } Entry;

s32 func_02027884(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_021390a8;
extern u16 *data_0215a04c;
extern u16 data_ov003_02198808[];
extern s8 data_0213aa2d[];
s64 func_02080d64();
void func_02080df4();
s32 func_020ce5fc();
void func_020ce618();
void func_020ce1a0();
s32 func_02027884(M2C_UNK, M2C_UNK);
s32 func_020234f8(s32 arg0, u16 arg1, u8 arg2) {
    s16 i;
    Entry *entry;

    i = 0;
    do {
        if (i < 0 || i >= 0x14) {
            entry = 0;
        } else {
            entry = (Entry *) ((u8 *) M2C_FIELD(arg0, u32 *, 0x9E8) + 0x90) + i;
        }
        if (entry != 0 && M2C_FIELD(entry, u16 *, 0) == arg1 &&
            M2C_FIELD(entry, u8 *, 0x28) == arg2) {
            return i;
        }
        i = (s16) (i + 1);
    } while (i < 0x14);
    return -1;
}
