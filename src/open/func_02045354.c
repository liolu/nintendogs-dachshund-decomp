#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

s32 func_02036258(s32);
void func_02039128(s32);
void func_02027644(void *, void *);
void func_02037130(s32, M2C_UNK);
s32 func_02028114(s32);
void func_0202507c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_02035450(void *, s32);
void func_0202f9a0(s32);

extern s32 *data_0214da84;
extern s16 data_02139b88[];
extern u8 data_0213aa1c[];
void func_02045354(s32 arg0) {
    s32 temp;
    s32 d;

    temp = func_02036258(arg0);
    if (temp != 0) {
        func_02039128(arg0);
        func_02027644((void *) temp, (void *) (arg0 + 0x278));
        *(M2C_S12 *) (arg0 + 0x3B4) = *(M2C_S12 *) (arg0 + 0x278);
        func_02037130(arg0, 0x300);
    }
    d = (s32) (((s64) func_02028114(arg0) * -630 + 0x800) >> 12);
    func_0202507c(arg0, 5, 0x11, d);
    if (func_02035450((void *) arg0, 0x1A) != 0) {
        func_0202f9a0(arg0);
    }
}
