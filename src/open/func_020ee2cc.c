#include "m2c.h"
extern void *data_02159e70;
void func_020f0a5c(M2C_UNK);
void func_020e23fc(M2C_UNK);
extern void func_02003d80(s32);
extern void func_ov006_02162a30(s32);
extern void func_020e26e0(s32);
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
void func_020ee2cc(void) {
    s32 i;
    u8 *b;
    u8 *a;

    M2C_FIELD(data_02159e70, u32 *, 0x1D80) = 0;
    a = (u8 *) data_02159e70 + 0xC4;
    func_020f0a5c((s32) (a + 0x18));
    func_020f0a5c((s32) (a + 0x54));
    func_020f0a5c((s32) (a + 0x90));
    b = a + 0xCC;
    a = a + 0x180;
    for (i = 0; i < 3; i++) {
        func_020f0a5c((s32) b);
        func_020f0a5c((s32) a);
        b += 0x3C;
        a += 0x3C;
    }
    func_020e23fc(1);
}
