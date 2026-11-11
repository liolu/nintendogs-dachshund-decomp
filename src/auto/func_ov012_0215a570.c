/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_020038a8(M2C_UNK, M2C_UNK);              /* extern */
s32 func_02006cb4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020c77e0();                            /* extern */
M2C_UNK func_020d6354(s32);                         /* extern */
M2C_UNK func_020d636c(s32);                         /* extern */
s32 func_020d7b2c(M2C_UNK, M2C_UNK);                /* extern */
extern void *data_ov012_0215a7c0;

void func_ov012_0215a570(M2C_UNK arg0) {
    u32 temp_r1;
    void *temp_r0;

    func_020c77e0();
    temp_r0                         = func_020038a8(arg0, 0x24);
    M2C_FIELD(temp_r0, s32 *, 0)    = 0;
    M2C_FIELD(temp_r0, s32 *, 4)    = 0;
    M2C_FIELD(temp_r0, u32 *, 8)    = 0U;
    M2C_FIELD(temp_r0, s32 *, 0xC)  = 0;
    M2C_FIELD(temp_r0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x14) = 0;
    temp_r1                         = M2C_FIELD(temp_r0, u32 *, 8);
    switch (temp_r1) {
        default:
            break;
        case 0:
            M2C_FIELD(temp_r0, s32 *, 0x18) = func_020d7b2c(2, arg0);
            break;
        case 1:
            M2C_FIELD(temp_r0, s32 *, 0x18) = func_020d7b2c(9, arg0);
            break;
        case 2:
            M2C_FIELD(temp_r0, s32 *, 0x18) = func_020d7b2c(9, arg0);
            break;
        case 3:
            M2C_FIELD(temp_r0, s32 *, 0x18) = func_020d7b2c(0, arg0);
            break;
        case 4:
            M2C_FIELD(temp_r0, s32 *, 0x18) = func_020d7b2c(0, arg0);
            break;
        case 6:
            M2C_FIELD(temp_r0, s32 *, 0x18) = func_020d7b2c(1, arg0);
            break;
        case 5:
            M2C_FIELD(temp_r0, s32 *, 0x18) = func_020d7b2c(2, arg0);
            break;
    }
    M2C_FIELD(temp_r0, s32 *, 0x1C) = func_02006cb4(arg0, 0x80);
    M2C_FIELD(temp_r0, s32 *, 0x20) = func_02006cb4(arg0, 0x80);
    func_020d636c(M2C_FIELD(temp_r0, s32 *, 0x1C));
    func_020d6354(M2C_FIELD(temp_r0, s32 *, 0x20));
    data_ov012_0215a7c0 = temp_r0;
}
