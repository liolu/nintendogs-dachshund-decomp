/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0203e5e8(void *, s32);
extern void *data_0214da84;

void func_ov003_0218dbb0(void *arg0) {
    s32 *p;
    u32 v;

    if (M2C_FIELD(arg0, u16 *, 0xFC) <= 0x3C) {
        return;
    }
    p  = (s32 *) data_0214da84;
    v  = (u32) (*p * 0x10DCD) + 1;
    *p = v;
    if ((u16) (((u32) (u16) v * 0x1E) >> 16) == 0) {
        func_0203e5e8(arg0, 0x423);
    }
}
