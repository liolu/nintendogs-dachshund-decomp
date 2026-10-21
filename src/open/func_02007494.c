#include "m2c.h"
s32 func_0207ca98(u32 type, u32 dstAddr, const void *pSrc, u32 szByte);
extern void *data_0214d628;
s32 func_0205df50(s32 dividend, s32 divisor);
s32 func_02067c34(s32 value);
s32 func_02007494(void *arg0) {
    func_0207ca98(1, (M2C_FIELD(arg0, u32 *, 0x2C) & 0xFFFF) << 3, (void *) ((u8 *) arg0 + M2C_FIELD(arg0, u32 *, 0x38)), M2C_FIELD(arg0, u16 *, 0x30) << 3);
    M2C_FIELD(arg0, u16 *, 0x32) |= 1;
    return 1;
}
