/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0202fa5c(M2C_UNK);
M2C_UNK func_0203535c(M2C_UNK);
s32 func_02036258(s32);
void func_0203e5e8(s32, s32);
s32 func_0204469c(void);

extern s32 *data_0214da84;

void func_020487f8(s32 arg0) {
    s32 temp_r1;
    s32 temp_r5;
    u16 temp_r0;

    if (func_0203535c(arg0) == 0) {
        return;
    }
    temp_r5 = func_02036258(arg0);
    if (!(func_0204469c() & 0x20)) {
        func_0202fa5c(arg0);
        return;
    }
    if (temp_r5 == 0) {
        return;
    }
    temp_r1        = (*data_0214da84 * 0x10DCD) + 1;
    *data_0214da84 = temp_r1;
    temp_r0        = (u16) ((u32) (temp_r1 << 0x10) >> 0x1F);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_0203e5e8(arg0, 0x2CD);
            return;
        case 1:
            func_0203e5e8(arg0, 0x2CE);
            return;
    }
}
