#include "m2c.h"

extern void *data_02159e70;
void func_020ccd00(s32, s32, s32, s32);

s32 func_02028714(void *, M2C_UNK, M2C_UNK);
s32 func_0202c9f0(void *, M2C_UNK);
void *func_020350fc(void *);
M2C_UNK func_0203e5ac(void *, M2C_UNK, M2C_UNK);
M2C_UNK func_0203e5e8(void *, M2C_UNK);
s32 func_ov003_02196338(void *);
extern char data_0214da84[];
void func_02022b6c(M2C_UNK);
s32 func_02022ddc(void *, s16, u8);
void func_020e098c(s32 arg0, s32 arg1) {
    s8 *base = (s8 *) data_02159e70;
    s32 value;
    s32 x, y;

    value = M2C_FIELD(base + arg0 * 0x294 + arg1 * 4, s32 *, 0x2074);
    func_020ccd00((s32) (base + 0x4CC8), value, x, y);
}
