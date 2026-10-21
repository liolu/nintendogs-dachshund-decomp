#include "m2c.h"
extern void *data_02159e70;
extern char data_02124e68[];
M2C_UNK func_020d6068(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020039c8(void);                        /* extern */
void func_020d6a1c(void);                           /* extern */
extern void func_02003d80(s32);
extern void func_ov006_02162a30(s32);
extern void func_020e26e0(s32);
void func_020f0a5c(M2C_UNK);
void func_020e23fc(M2C_UNK);
s32 func_020a5d54(M2C_UNK);
void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 func_01ffdb08(s16);
extern void func_020eb9a8(s32, u16 *, s32);
extern u16 *data_02146a54[];
extern u16 *data_02146a60[];
void func_020ee498(void *arg0) {
    u16 angle;
    s16 sin;
    s32 v;
    s32 a;
    s32 b;

    if (M2C_FIELD(arg0, s32 *, 0x2F4) != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0) <= 0x19) {
            func_020d6068(2, 8, 1);
            angle = (u16) ((((u32) (M2C_FIELD(arg0, s32 *, 0) << 16)) >> 1) / 25 + 0xC000);
            sin = *(s16 *) (data_02124e68 + ((angle >> 4) * 4));
            v = (s32) (((u32) ((sin + 0x1000) * 12) << 4) >> 16);
            a = v << 7;
            b = v * -200;
            M2C_FIELD(arg0, s32 *, 0x2F8) = a / 25;
            M2C_FIELD(arg0, s32 *, 0x2FC) = b / 25;
            M2C_FIELD(arg0, s32 *, 0) = M2C_FIELD(arg0, s32 *, 0) + 1;
            return;
        }
        M2C_FIELD(data_02159e70, s32 *, 0xC838) = 1;
        M2C_FIELD(data_02159e70, s32 *, 0xC83C) = 1;
        func_020d6068(2, 8, 0);
        M2C_FIELD(arg0, s32 *, 0x2F4) = 0;
        M2C_FIELD(arg0, s32 *, 0x300) = 1;
        func_020d6a1c();
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0) < 0x10) {
        M2C_FIELD(arg0, s32 *, 0) = M2C_FIELD(arg0, s32 *, 0) + 1;
        return;
    }
    if (M2C_FIELD(data_02159e70, s32 *, 0xBC) == 4) {
        func_020d6a1c();
        return;
    }
    if (func_020039c8() == 0) {
        return;
    }
    func_020d6a1c();
}
