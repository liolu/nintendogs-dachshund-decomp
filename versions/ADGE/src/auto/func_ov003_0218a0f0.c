/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02024130();                                /* extern */
s32 func_0202df7c(void *);                          /* extern */
s32 func_0202dfb0(void *);                          /* extern */
s32 func_020399a4(void *);                          /* extern */
s32 func_02044878(s32);                             /* extern */
M2C_UNK func_020a5a1c(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020a5fcc();                                /* extern */
extern void *data_0215a064;

void func_ov003_0218a0f0(void *arg0, s32 arg1) {
    s32 temp_r0;
    u8 *temp_r4;

    temp_r0 = M2C_FIELD(data_0215a064, u16 *, 0x84) & 2;
    if ((temp_r0 != 0) && (func_02044878(temp_r0) == 0) && (func_02024130() == 0) && (arg1 == 0)) {
        M2C_FIELD(arg0, s16 *, 0x12A) = (s16) (M2C_FIELD(arg0, s16 *, 0x12A) + 1);
    }
    if (!(M2C_FIELD(data_0215a064, u16 *, 0x84) & 1)) {
        M2C_FIELD(arg0, u16 *, 0x11A) = (u16) (M2C_FIELD(arg0, u16 *, 0x11A) + 1);
        if ((u32) M2C_FIELD(arg0, u16 *, 0x11A) > 0x3CU) {
            M2C_FIELD(arg0, s16 *, 0x12A) = 0;
        }
    } else {
        M2C_FIELD(arg0, u16 *, 0x11A) = 0U;
    }
    if ((s32) M2C_FIELD(arg0, s16 *, 0x12A) < 4) {
        return;
    }
    if (func_0202dfb0(arg0) != 0) {
        return;
    }
    temp_r0 = func_0202df7c(arg0);
    if (temp_r0 != 0) {
        return;
    }
    temp_r0 = func_02044878(temp_r0);
    if (temp_r0 != 0) {
        return;
    }
    if (func_02024130() != 0) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x12A) = 0;
    if (func_020399a4(arg0) == 0) {
        return;
    }
    func_020a5a1c(1, -1);
    temp_r4                   = (u8 *) func_020a5fcc() + 0x88;
    *(s32 *) (temp_r4 + 0x6C) = 0;
}
