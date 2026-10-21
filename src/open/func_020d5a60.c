#include "m2c.h"
void func_020ec028(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020ebbdc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
u32 func_0205e15c(s32, s32);
void func_020d5a60(u8 *base, s32 value) {
    s32 j;
    s32 place;
    s32 blank;
    s32 flag;
    u32 d;
    u16 digit;
    s32 i;

    blank = 0;
    place = 1;
    flag = 1;
    for (j = 0; j < *(u16 *) (base + 0x1a); j++) {
        d = func_0205e15c(value, place);
        digit = d % 10;
        flag = 1;
        if (*(s32 *) (base + 0x24) != 0 && j > 0 && d == 0) {
            blank = (s16) (blank - *(u16 *) (base + 0x1c));
            flag = 0;
        }
        func_020ec028(*(M2C_UNK *) base, (u16) (*(u16 *) (base + 0x18) + j),
            *(u16 *) (base + 4 + digit * 2));
        func_020eb9fc(*(M2C_UNK *) base, (u16) (*(u16 *) (base + 0x18) + j), flag);
        place *= 10;
    }
    if (*(s32 *) (base + 0x24) != 0) {
        for (i = 0; i < *(u16 *) (base + 0x1a); i++) {
            func_020ebbdc(*(M2C_UNK *) base, (u16) (*(u16 *) (base + 0x18) + i), blank, 0);
        }
    }
}
