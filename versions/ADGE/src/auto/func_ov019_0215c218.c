/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_01ff832c(M2C_UNK, M2C_UNK *, M2C_UNK *, void *);
s32 func_ov019_0215aa54(s32, void *, M2C_UNK);
M2C_UNK func_ov019_0215ab98(s32, M2C_UNK *);
M2C_UNK func_ov019_0215abb0(s32, M2C_UNK *);
s32 func_ov019_0215ad48(s16);

void func_ov019_0215c218(void *arg0) {
    s32 buf0[3];
    s32 buf1[3];
    s32 t;

    t = func_ov019_0215ad48(M2C_FIELD(arg0, s16 *, 0x2C));
    if (t == 0) {
        return;
    }
    func_ov019_0215ab98(t, buf0);
    func_ov019_0215abb0(t, buf1);
    func_01ff832c(0x5000, buf0, buf1, (u8 *) arg0 + 0x3C);
    if (func_ov019_0215aa54(t, (u8 *) arg0 + 0x3C, 0x1000) != 0) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 3;
    }
}
