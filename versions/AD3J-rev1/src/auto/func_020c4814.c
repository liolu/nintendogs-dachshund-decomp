/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02006518(void *);                      /* extern */
M2C_UNK func_020069bc(void *, void *);              /* extern */
s32 _s32_div_f(s32, s16);                        /* extern */
M2C_UNK func_02069504(void *, void *, void *);      /* extern */
M2C_UNK func_02069634(void *, void *, void *);      /* extern */
M2C_UNK func_020c4f28(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_02124fd8;
extern M2C_UNK func_020c4644;

void func_020c4814(void *arg0) {
    void *temp_r0;
    void *temp_r0_2;

    func_020c4f28(arg0, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_020c4644;
    M2C_FIELD(arg0, s32 *, 0x18)      = 0;
    func_02006518(arg0 + 0x1C);
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
    M2C_FIELD(arg0, s16 *, 0x26) = 0;
    M2C_FIELD(arg0, s16 *, 0x28) = 0;
    M2C_FIELD(arg0, s16 *, 0x2A) = 0;
    M2C_FIELD(arg0, s16 *, 0x2C) = 0x100;
    M2C_FIELD(arg0, s16 *, 0x2E) = 0xC0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0x5000;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    func_02069634(arg0 + 0x3C, arg0 + 0x30, arg0 + 0x48);
    temp_r0 = arg0 + 0x48;
    func_020069bc(temp_r0, temp_r0);
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    func_02069504(arg0 + 0x54, arg0 + 0x48, arg0 + 0x60);
    temp_r0_2 = arg0 + 0x60;
    func_020069bc(temp_r0_2, temp_r0_2);
    M2C_FIELD(arg0, s16 *, 0x6C) = (s16) M2C_FIELD(&data_02124fd8, s16 *, 0x54);
    M2C_FIELD(arg0, s16 *, 0x6E) = (s16) M2C_FIELD(&data_02124fd8, s16 *, 0x56);
    M2C_FIELD(arg0, s32 *, 0x70) = _s32_div_f(M2C_FIELD(arg0, s16 *, 0x2C) << 0xC, M2C_FIELD(arg0, s16 *, 0x2E));
    M2C_FIELD(arg0, s32 *, 0x74) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x78) = 0x190000;
}
