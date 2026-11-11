#include "m2c.h"
extern void *data_02159e70;
extern void func_02003d80(s32);
extern void func_ov006_02162a30(s32);
extern void func_020e26e0(s32);
void func_020f0a5c(M2C_UNK);
void func_020e23fc(M2C_UNK);
extern char data_02124e68[];
M2C_UNK func_020d6068(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020039c8(void);                        /* extern */
void func_020d6a1c(void);                           /* extern */
s32 func_020a5d54(M2C_UNK);
void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 func_01ffdb08(s16);
extern void func_020eb9a8(s32, u16 *, s32);
extern u16 *data_02146a54[];
extern u16 *data_02146a60[];
void func_020ee220(void) {
    s32 v;

    func_02003d80(0x10);
    func_ov006_02162a30(1);
    v = M2C_FIELD(data_02159e70, s32 *, 0xA8);
    if (v == 7) {
        func_020e26e0(0);
        return;
    }
    if (v == 8) {
        func_020e26e0(1);
    }
}
