/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_01ff832c(M2C_UNK, M2C_UNK *, M2C_UNK *, void *);
s32 func_ov018_021585d4(s32, void *, M2C_UNK);
M2C_UNK func_ov018_02158718(s32, M2C_UNK *);
M2C_UNK func_ov018_02158730(s32, M2C_UNK *);
s32 func_ov018_021588c8(s16);

void func_ov018_02159d98(void *arg0) {
    s32 buf0[3];
    s32 buf1[3];
    s32 t;

    t = func_ov018_021588c8(M2C_FIELD(arg0, s16 *, 0x2C));
    if (t == 0) {
        return;
    }
    func_ov018_02158718(t, buf0);
    func_ov018_02158730(t, buf1);
    func_01ff832c(0x5000, buf0, buf1, (u8 *) arg0 + 0x3C);
    if (func_ov018_021585d4(t, (u8 *) arg0 + 0x3C, 0x1000) != 0) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 3;
    }
}
