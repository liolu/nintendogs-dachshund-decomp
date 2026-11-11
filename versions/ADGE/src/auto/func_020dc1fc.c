/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020dc350(void *);                      /* extern */
M2C_UNK func_020dc78c(void *);                      /* extern */
M2C_UNK func_020dc8a4(void *);                      /* extern */
M2C_UNK func_020dd390();                            /* extern */
M2C_UNK func_020dd6d4(void *);                      /* extern */
M2C_UNK func_020dd7c8(void *);                      /* extern */
M2C_UNK func_020ddb18();                            /* extern */
M2C_UNK func_020eb9fc(s32, u16, M2C_UNK);           /* extern */
M2C_UNK func_020f0d14(void *, M2C_UNK);             /* extern */

void func_020dc1fc(void *arg0) {
    func_020dd390();
    func_020dd6d4(arg0);
    func_020dc8a4(arg0);
    func_020dc78c(arg0);
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_020dc350(arg0);
    }
    func_020dd7c8(arg0);
    func_020f0d14(arg0 + 0x198, 1);
    func_020f0d14(arg0 + 0x1B8, 1);
    func_020f0d14(arg0 + 0x1D8, 0);
    func_020f0d14(arg0 + 0x1F8, 0);
    if (M2C_FIELD(arg0, s32 *, 0x220) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x21C) = (s32) (M2C_FIELD(arg0, s32 *, 0x21C) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x21C) >= 0x3C) {
        M2C_FIELD(arg0, s32 *, 0x21C) = 0;
        func_020ddb18();
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x21C) < 0x1E) {
        func_020eb9fc(M2C_FIELD(arg0, s32 *, 0x224), M2C_FIELD(arg0, u16 *, 0x228), 1);
        return;
    }
    func_020eb9fc(M2C_FIELD(arg0, s32 *, 0x224), M2C_FIELD(arg0, u16 *, 0x228), 0);
}
