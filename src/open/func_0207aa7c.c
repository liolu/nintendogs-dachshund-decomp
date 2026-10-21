#include "m2c.h"
void func_0207782c(M2C_UNK, M2C_UNK, M2C_UNK);
void (*data_0213cd10[8])(s32 *, M2C_UNK);
void func_0207aa7c(M2C_UNK arg0) {
    s32 sp[20];
    s32 cond;

    cond = M2C_FIELD(arg0, s32 *, 0) & 8;
    if (cond) {
        sp[0] = 0x101610;
    } else {
        sp[0] = 0x101810;
    }
    sp[17] = 0x1000;
    sp[1] = 3;
    sp[18] = 2;
    sp[16] = 0;
    sp[13] = 0;
    sp[12] = 0;
    sp[11] = 0;
    sp[10] = 0;
    sp[9] = 0;
    sp[8] = 0;
    sp[5] = 0;
    sp[4] = 0;
    data_0213cd10[M2C_FIELD(arg0, s32 *, 0) & 7](&sp[2], arg0);
    if (M2C_FIELD(arg0, s32 *, 0x30) != 0x1000) {
        sp[2] = (s32) (((s64) sp[2] * M2C_FIELD(arg0, s32 *, 0x30)) >> 12);
        sp[3] = (s32) (((s64) sp[3] * M2C_FIELD(arg0, s32 *, 0x30)) >> 12);
        sp[14] = (s32) (((s64) sp[14] * M2C_FIELD(arg0, s32 *, 0x30)) >> 12);
    }
    if (M2C_FIELD(arg0, s32 *, 0x34) != 0x1000) {
        sp[6] = (s32) (((s64) sp[6] * M2C_FIELD(arg0, s32 *, 0x34)) >> 12);
        sp[7] = (s32) (((s64) sp[7] * M2C_FIELD(arg0, s32 *, 0x34)) >> 12);
        sp[15] = (s32) (((s64) sp[15] * M2C_FIELD(arg0, s32 *, 0x34)) >> 12);
    }
    func_0207782c(sp[0], &sp[1], 0x12);
}
