#include "m2c.h"
extern void func_0206cbc4(u16 fill, s32 dest, s32 size);
extern void func_020db55c(void);
extern s32 func_020dad78(s32, s32, s32, u16, u16, u16, u16, u16, u16, u16);
extern void func_020dab90(s32, s32, s32);
extern u16 data_02144f68[];
void func_020ddc48(void);
void func_020e64cc(s32 a0, s32 a1, s32 a2);
void func_020e65dc(s32 a0);
extern void *data_02159e70;
extern void func_020d6a1c(void);
extern s32 func_020eaddc(void);
extern void func_020eadc0(void);
extern u8 data_0214d624[];
s32 func_020eb5a4(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020ddbd8(void);
void func_020e23fc(M2C_UNK);
void func_020e1710(M2C_UNK, M2C_UNK);
extern void *data_02159fe4;
extern u8 data_021452a0[];
extern s32 data_02145278[];
s32 func_020c7790(u8 *);
void func_0205ece8(void *, s32, const void *, s32, s32);
s32 func_0207e0d0(void *);
void func_020e6bec(s32 arg0) {
    s32 dst;
    u16 w;
    volatile u16 fill;
    s32 y;

    switch (M2C_FIELD(arg0, u32 *, 0x1C60)) {
    case 0:
        M2C_FIELD(arg0, u32 *, 0x874) = 8;
        M2C_FIELD(arg0, u16 *, 0x878) = 9;
        M2C_FIELD(arg0, u16 *, 0x87A) = 3;
        M2C_FIELD(arg0, u16 *, 0x87C) = 0xE;
        M2C_FIELD(arg0, u16 *, 0x87E) = 3;
        M2C_FIELD(arg0, u16 *, 0x880) = 7;
        break;
    case 1:
        M2C_FIELD(arg0, u32 *, 0x874) = 0xB;
        M2C_FIELD(arg0, u16 *, 0x878) = 6;
        M2C_FIELD(arg0, u16 *, 0x87A) = 3;
        M2C_FIELD(arg0, u16 *, 0x87C) = 0x14;
        M2C_FIELD(arg0, u16 *, 0x87E) = 3;
        M2C_FIELD(arg0, u16 *, 0x880) = 0xA;
        break;
    case 2:
        M2C_FIELD(arg0, u32 *, 0x874) = 0x1B;
        M2C_FIELD(arg0, u16 *, 0x878) = 3;
        M2C_FIELD(arg0, u16 *, 0x87A) = 2;
        M2C_FIELD(arg0, u16 *, 0x87C) = 0x1A;
        M2C_FIELD(arg0, u16 *, 0x87E) = 5;
        M2C_FIELD(arg0, u16 *, 0x880) = 0xD;
        break;
    }

    w = M2C_FIELD(arg0, u16 *, 0x87C) * M2C_FIELD(arg0, u16 *, 0x87E);
    fill = 0x1FF;
    y = 0x232;
    dst = arg0 + 0x64;
    func_0206cbc4(fill, dst, 0x800);
    func_020db55c();
    M2C_FIELD(arg0, s32 *, 0x10) = func_020dad78(0, 1, dst, M2C_FIELD(arg0, u16 *, 0x878), M2C_FIELD(arg0, u16 *, 0x87A), M2C_FIELD(arg0, u16 *, 0x87C), M2C_FIELD(arg0, u16 *, 0x87E), y, 2, 0x32);
    M2C_FIELD(arg0, s32 *, 0x14) = func_020dad78(0, 1, dst, 6, 9, 0x18, 0xA, (u16) (y + w), 2, (u16) (w + 0x32));
    func_020dab90(0, M2C_FIELD(arg0, s32 *, 0x10), 0);
}
