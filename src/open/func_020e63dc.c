#include "m2c.h"
extern u16 data_02144f68[];
void func_020ddc48(void);
void func_020e64cc(s32 a0, s32 a1, s32 a2);
void func_020e65dc(s32 a0);
extern void func_0206cbc4(u16 fill, s32 dest, s32 size);
extern void func_020db55c(void);
extern s32 func_020dad78(s32, s32, s32, u16, u16, u16, u16, u16, u16, u16);
extern void func_020dab90(s32, s32, s32);
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
void func_020e63dc(s32 arg0) {
    s32 v;
    s16 *e;
    s32 i;
    u16 cnt;

    func_020ddc48();
    func_020e64cc(arg0, M2C_FIELD(arg0, s32 *, 8), 1);
    v = M2C_FIELD(arg0, s32 *, 8);
    e = (s16 *) ((u8 *) arg0 + 0x38);
    for (i = 0; i < 10; i++) {
        if (e[1] == 0) {
            e[0] = v;
            e[1] = 5;
            break;
        }
        e += 2;
    }
    v = M2C_FIELD(arg0, s32 *, 0x874) - 1;
    cnt = M2C_FIELD(arg0, u16 *, 0x30);
    if (cnt < v) {
        if (M2C_FIELD(arg0, u16 *, 0xC) != 0) {
            data_02144f68[M2C_FIELD(arg0, u16 *, 0x30)] = M2C_FIELD(arg0, u16 *, 0xC);
            data_02144f68[M2C_FIELD(arg0, u16 *, 0x30) + 1] = 0;
            M2C_FIELD(arg0, u16 *, 0x30) = M2C_FIELD(arg0, u16 *, 0x30) + 1;
            func_020e65dc(arg0);
        }
    } else if (cnt == v) {
        if (M2C_FIELD(arg0, u16 *, 0xC) != 0) {
            data_02144f68[M2C_FIELD(arg0, u16 *, 0x30) - 1] = M2C_FIELD(arg0, u16 *, 0xC);
            func_020e65dc(arg0);
        }
    }
}
