/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0207782c(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_02150e58;
extern M2C_UNK data_02150e5c;
extern M2C_UNK data_02150ea4;
extern M2C_UNK data_02150ed4;

void func_020749f8(void) {
    s32 sp0;
    s32 temp_r1;

    func_0207782c(0x1610, (s32) &data_02150e5c, 0x11);
    func_0207782c(0x19, (s32) &data_02150ea4, 0xC);
    sp0 = 2;
    func_0207782c(0x10, (s32) &sp0, 1);
    func_0207782c(0x15, (s32) &data_02150ed4, 0x20);
    temp_r1                                = M2C_FIELD(&data_02150e58, s32 *, 0xFC) & ~1;
    M2C_FIELD(&data_02150e58, s32 *, 0xFC) = temp_r1;
    M2C_FIELD(&data_02150e58, s32 *, 0xFC) = (s32) (temp_r1 | 2);
}
