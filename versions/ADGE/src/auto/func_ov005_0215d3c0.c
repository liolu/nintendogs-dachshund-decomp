/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0203e5e8(void *, s32);
extern void *data_0215a064;

void func_ov005_0215d3c0(void *arg0) {
    s32 flag;

    flag = M2C_FIELD(arg0, u16 *, 0xFC) > 0x3C;
    if ((M2C_FIELD(data_0215a064, u16 *, 0x84) & 1) == 0) {
        M2C_FIELD(arg0, u16 *, 0x11A) = M2C_FIELD(arg0, u16 *, 0x11A) + 1;
    } else {
        M2C_FIELD(arg0, u16 *, 0x11A) = 0;
    }
    M2C_FIELD(arg0, u16 *, 0x11C) = 1;
    M2C_FIELD(arg0, u16 *, 0x11E) = 0;
    if (flag != 0) {
        func_0203e5e8(arg0, 0x451);
    }
}
