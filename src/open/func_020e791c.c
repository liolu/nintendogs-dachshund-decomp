#include "m2c.h"
extern void *data_02159e70;
extern void func_020d6a1c(void);
extern s32 func_020eaddc(void);
extern void func_020eadc0(void);
extern u16 data_02144f68[];
void func_020ddc48(void);
void func_020e64cc(s32 a0, s32 a1, s32 a2);
void func_020e65dc(s32 a0);
extern void func_0206cbc4(u16 fill, s32 dest, s32 size);
extern void func_020db55c(void);
extern s32 func_020dad78(s32, s32, s32, u16, u16, u16, u16, u16, u16, u16);
extern void func_020dab90(s32, s32, s32);
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
void func_020e791c(s32 arg0) {
    (*(s32 *) arg0)++;
    if (*(s32 *) arg0 <= 0x14) {
        return;
    }
    switch (M2C_FIELD(data_02159e70, s32 *, 0xBC)) {
        case 3:
        case 4:
        case 10:
        case 14:
            func_020d6a1c();
            break;
        case 7:
        case 12:
            if (func_020eaddc() == 0) {
                return;
            }
            func_020d6a1c();
            func_020eadc0();
            break;
        case 0:
        case 1:
        case 2:
        case 5:
        case 6:
        case 8:
        case 9:
        case 11:
        case 13:
            break;
    }
}
