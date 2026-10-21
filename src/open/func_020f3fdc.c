#include "m2c.h"
void func_020ebbdc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern void *data_02159fc4;
void func_020f3fdc(s32 *arg0) {
    s32 n;

    arg0[1]++;
    n = arg0[1];
    if (n > 10) {
        M2C_FIELD(data_02159fc4, s32 *, 0x198) = 1;
        return;
    }
    func_020ebbdc(0, 1, (s16) ((10 - n) * -256 / 10), 0);
}
