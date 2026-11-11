#include "m2c.h"
extern void *data_02159fe4;
extern u8 data_021452a0[];
extern s32 data_02145278[];
s32 func_020c7790(u8 *);
void func_0205ece8(void *, s32, const void *, s32, s32);
s32 func_0207e0d0(void *);
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
s32 func_020e7ec4(s32 arg0, u8 *arg1) {
    s8 buf[0x40];
    s32 result;
    s32 i;
    s32 r;
    s32 v;

    result = 0;
    if (arg1[0] == 0) {
        return 0;
    }
    if (arg0 == 0) {
        result = func_020c7790(arg1);
    } else if (M2C_FIELD(data_02159fe4, void **, 0) != 0) {
        for (i = result; i < 0xA; i++) {
            v = ((s32(*)[4]) data_02159fe4)[i][2];
            if (v == arg0) {
                func_0205ece8(buf, 0x40, data_021452a0, data_02145278[i], (s32) arg1);
                r = func_0207e0d0(buf);
                if (r != 0) {
                    return r;
                }
            }
        }
    }
    return result;
}
