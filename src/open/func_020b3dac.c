#include "m2c.h"
s32 func_02061d7c(void);
extern u16 data_0215561c;
extern s32 data_02155624;
void func_020b3dac(void) {
    s32 q;
    s32 t;
    s64 p;

    q = (func_02061d7c() << 12) / 0x7FFF;
    t = (s32) (((s64) q * 0xF0000 + 0x800) >> 12) + 0x3C000;
    p = (s64) t * 0xB60B60B60BLL + 0x80000000000LL;
    data_0215561c = (u16) (p >> 44);

    q = (func_02061d7c() << 12) / 0x7FFF;
    t = (s32) (((s64) q * 0x1B000 + 0x800) >> 12) + 0x3000;
    data_02155624 = t;
}
