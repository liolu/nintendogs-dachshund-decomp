#include "m2c.h"

extern void *data_02159e70;
extern u8 data_0214d624[];
extern s16 data_0213de68[];

s32 func_020eb5a4(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_01ffdb08(M2C_UNK);
void func_0208ff8c(M2C_UNK);
void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020ebbdc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020e23fc(M2C_UNK);
void func_020e1278(M2C_UNK);
void func_020a5c0c(M2C_UNK);
void func_020e1374(M2C_UNK);

void func_0209ef38(s32 arg0) {
    s16 *p;
    s32 b0;
    s32 b1;
    s32 r;

    p = (s16 *) ((u8 *) arg0 + 0x1CE8);
    switch (M2C_FIELD(arg0, s32 *, 4)) {
    case 0:
        if (M2C_FIELD(data_02159e70, s32 *, 0x48B8) == 1) {
            M2C_FIELD(arg0, s32 *, 4) = 3;
            b1 = ((volatile u8 *) data_0214d624)[1];
            b0 = ((volatile u8 *) data_0214d624)[0];
            M2C_FIELD(arg0, u16 *, 0x1C18) = b0;
            M2C_FIELD(arg0, u16 *, 0x1C1A) = b1;
            return;
        }
        if (M2C_FIELD(data_02159e70, s32 *, 0x4860) == 0) {
            return;
        }
        b0 = data_0214d624[1];
        b1 = data_0214d624[0];
        r = func_020eb5a4(2, b1, b0);
        if ((M2C_FIELD(data_0214d624, u16 *, 2) & 2) == 0) {
            return;
        }
        M2C_FIELD(p, s16 *, 0) = -1;
        switch (r) {
        case 0:
            if (func_01ffdb08(0) != 0) {
                M2C_FIELD(p, s16 *, 0) = 0;
            }
            break;
        case 1:
            if (func_01ffdb08(1) != 0) {
                M2C_FIELD(p, s16 *, 0) = 1;
            }
            break;
        case 2:
            if (func_01ffdb08(2) != 0) {
                M2C_FIELD(p, s16 *, 0) = 2;
            }
            break;
        }
        if (M2C_FIELD(p, s16 *, 0) < 0) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 1;
        func_0208ff8c(3);
        func_020eb9fc(2, 0x12, 1);
        func_020eb9fc(2, (u16) (M2C_FIELD(p, s16 *, 0) + 3), 0);
        func_020eb9fc(2, (u16) (M2C_FIELD(p, s16 *, 0) + 6), 1);
        func_020ebbdc(2, 0x12, data_0213de68[M2C_FIELD(p, s16 *, 0)], 0);
        func_020ebbdc(2, (u16) (M2C_FIELD(p, s16 *, 0) + 9), 2, 2);
        func_020ebbdc(2, (u16) (M2C_FIELD(p, s16 *, 0) * 2 + 0xC), 2, 2);
        func_020ebbdc(2, (u16) (M2C_FIELD(p, s16 *, 0) * 2 + 0xD), 2, 2);
        M2C_FIELD(arg0, u16 *, 0x1C18) = b1;
        M2C_FIELD(arg0, u16 *, 0x1C1A) = b0;
        func_020e23fc(0);
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0) = M2C_FIELD(arg0, s32 *, 0) + 1;
        if (M2C_FIELD(arg0, s32 *, 0) <= 0xA) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 2;
        func_020eb9fc(2, 0x12, 0);
        func_020eb9fc(2, (u16) (M2C_FIELD(p, s16 *, 0) + 3), 1);
        func_020eb9fc(2, (u16) (M2C_FIELD(p, s16 *, 0) + 6), 0);
        func_020ebbdc(2, (u16) (M2C_FIELD(p, s16 *, 0) + 9), 0, 0);
        func_020ebbdc(2, (u16) (M2C_FIELD(p, s16 *, 0) * 2 + 0xC), 0, 0);
        func_020ebbdc(2, (u16) (M2C_FIELD(p, s16 *, 0) * 2 + 0xD), 0, 0);
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0) = M2C_FIELD(arg0, s32 *, 0) + 1;
        if (M2C_FIELD(arg0, s32 *, 0) <= 0xA) {
            return;
        }
        func_020e1278(1);
        func_020a5c0c(M2C_FIELD(p, s16 *, 0));
        return;
    case 3:
        if (M2C_FIELD(data_02159e70, s32 *, 0x48BC) != 1) {
            return;
        }
        func_020e1374(4);
        return;
    }
}
