#include "m2c.h"
extern void *data_02159e70;
extern u8 data_0214d624[];
s32 func_020eb5a4(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020ddbd8(void);
void func_020e23fc(M2C_UNK);
void func_020e1710(M2C_UNK, M2C_UNK);
extern u16 data_02144f68[];
void func_020ddc48(void);
void func_020e64cc(s32 a0, s32 a1, s32 a2);
void func_020e65dc(s32 a0);
extern void func_0206cbc4(u16 fill, s32 dest, s32 size);
extern void func_020db55c(void);
extern s32 func_020dad78(s32, s32, s32, u16, u16, u16, u16, u16, u16, u16);
extern void func_020dab90(s32, s32, s32);
extern void func_020d6a1c(void);
extern s32 func_020eaddc(void);
extern void func_020eadc0(void);
extern void *data_02159fe4;
extern u8 data_021452a0[];
extern s32 data_02145278[];
s32 func_020c7790(u8 *);
void func_0205ece8(void *, s32, const void *, s32, s32);
s32 func_0207e0d0(void *);
void func_020e7a74(s32 arg0) {
    s32 b1;
    s32 b0;
    s32 r;

    switch (M2C_FIELD(arg0, s32 *, 8)) {
    case 0:
        if (M2C_FIELD(data_02159e70, s32 *, 0x48B8) == 1) {
            M2C_FIELD(arg0, s32 *, 8) = 2;
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
        switch (r) {
        case 1:
            M2C_FIELD(arg0, s32 *, 0xC) = 0;
            break;
        case 3:
            M2C_FIELD(arg0, s32 *, 0xC) = 1;
            break;
        case 4:
            M2C_FIELD(arg0, s32 *, 0xC) = 2;
            break;
        case 0:
            M2C_FIELD(arg0, s32 *, 0xC) = 3;
            break;
        case 2:
            M2C_FIELD(arg0, s32 *, 0xC) = 4;
            break;
        case 5:
            M2C_FIELD(arg0, s32 *, 0xC) = 5;
            break;
        case 6:
            M2C_FIELD(arg0, s32 *, 0xC) = 6;
            break;
        }
        if (M2C_FIELD(arg0, s32 *, 0xC) != -1) {
            M2C_FIELD(arg0, u16 *, 0x1C18) = b1;
            M2C_FIELD(arg0, u16 *, 0x1C1A) = b0;
            func_020eb9fc(2, (u16) (r + 0xE), 1);
            func_020ddbd8();
            func_020e23fc(0);
            M2C_FIELD(arg0, s32 *, 8) = 1;
        }
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0) = M2C_FIELD(arg0, s32 *, 0) + 1;
        if (M2C_FIELD(arg0, s32 *, 0) <= 0xA) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, s32 *, 8) = -1;
        func_020e1710(M2C_FIELD(arg0, s32 *, 0xC), -1);
        return;
    case 2:
        if (M2C_FIELD(data_02159e70, s32 *, 0x48BC) == 1) {
            M2C_FIELD(data_02159e70, s32 *, 0x486C) = 1;
            M2C_FIELD(arg0, s32 *, 8) = -1;
        }
        return;
    }
}
