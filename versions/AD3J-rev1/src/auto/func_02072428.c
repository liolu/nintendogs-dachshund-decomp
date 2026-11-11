/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020723f4(void *);                      /* extern */
M2C_UNK func_0206387c(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_02063de0();                                /* extern */
M2C_UNK func_02063eb0(s32);                         /* extern */
M2C_UNK func_02063f40(M2C_UNK);                     /* extern */
M2C_UNK func_02002194(void *);                      /* extern */
M2C_UNK func_020021ac(void *);                      /* extern */

void func_02072428(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_0206387c(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_020021ac(arg0 + 8);
        func_02002194(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = func_02063de0();
        func_02063f40(1);
        func_02063eb0(temp_r5);
    }
    func_020723f4(arg0);
}
