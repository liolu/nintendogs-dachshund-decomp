#include "m2c.h"
extern s32 data_02159e38;
extern char data_0214da84[];
extern void *data_02159e74;
s32 func_02028714(void *, M2C_UNK, M2C_UNK);
s32 func_0202c9f0(void *, M2C_UNK);
void *func_020350fc(void *);
M2C_UNK func_0203e5ac(void *, M2C_UNK, M2C_UNK);
M2C_UNK func_0203e5e8(void *, M2C_UNK);
s32 func_ov003_02196338(void *);
void func_02022b6c(M2C_UNK);
s32 func_02022ddc(void *, s16, u8);
extern void *data_02159e70;
void func_020ccd00(s32, s32, s32, s32);
void func_020d03b4(s16 arg0) {
    s32 bits = -1;
    s32 obj = *(s32 *) ((s8 *) data_02159e38 + arg0 * 0x18 + 0x1000 + 0x44C);
    *(s16 *) ((s8 *) obj + 0xA) = bits;
    *(u16 *) ((s8 *) obj + 0x800 + 0xFE) = *(u16 *) ((s8 *) obj + 0x800 + 0xFE) | 1;
}
