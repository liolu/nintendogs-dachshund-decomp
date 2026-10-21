#include "m2c.h"

extern void *data_0215a07c;
extern void *data_02159e64;

s32 func_02088fa4();
s32 func_02003a00();
void func_020ce0a8(s32);
void func_020d19f0(s32);
void func_020d0928(s32);
s32 func_020d08b8();
void func_020d2c64(s32, s32, s32, s32, s32);
void func_0208ff28(s32, s32);

void func_0211fe98(void) {
    s32 *state;
    s32 v5;

    state = (s32 *) data_0215a07c;
    switch (M2C_FIELD(state, s16 *, 0x0)) {
    case 0:
        v5 = func_02088fa4();
        if (func_02003a00() == 0) {
            return;
        }
        if (M2C_FIELD(data_02159e64, s16 *, 0x6C) != 2) {
            return;
        }
        M2C_FIELD(state, s16 *, 0x0) = 2;
        M2C_FIELD(state, s16 *, 0x2) = 0;
        if (v5 != 0) {
            func_020ce0a8(v5);
        }
        func_020d19f0(0);
        func_020d0928(1);
        break;
    case 2:
        M2C_FIELD(state, s16 *, 0x2) += 1;
        if (func_020d08b8() != 0) {
            M2C_FIELD(state, s16 *, 0x0) = 3;
            M2C_FIELD(state, s16 *, 0x2) = 0;
        }
        break;
    case 3:
        M2C_FIELD(state, s16 *, 0x2) = M2C_FIELD(state, s16 *, 0x2) + 1;
        M2C_FIELD(state, s16 *, 0x0) = 4;
        M2C_FIELD(state, s16 *, 0x2) = 0;
        func_020d2c64(0, 0x4C5, 0, 0, 0);
        func_0208ff28(0x43, 0x1E);
        break;
    case 4:
        if (M2C_FIELD(data_02159e64, s32 *, 0xA4) == 0) {
            return;
        }
        if (M2C_FIELD(data_02159e64, s16 *, 0x9A) != 0) {
            if (M2C_FIELD(data_02159e64, s16 *, 0x9A) == 1) {
                M2C_FIELD(state, s32 *, 0x4) = 0;
            }
        } else {
            M2C_FIELD(state, s32 *, 0x4) = 1;
        }
        M2C_FIELD(state, s16 *, 0x0) = 5;
        M2C_FIELD(state, s16 *, 0x2) = 0;
        M2C_FIELD(state, s32 *, 0x8) = 1;
        break;
    }
}
