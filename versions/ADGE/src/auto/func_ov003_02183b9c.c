/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02022b6c(void *);                      /* extern */
s32 func_0203535c(void *);                          /* extern */
s32 func_02035424(void *, M2C_UNK);                 /* extern */
M2C_UNK func_020390b8(void *, s32);                 /* extern */
M2C_UNK func_ov003_0218758c(void *, M2C_UNK, s32, s32); /* extern */

void func_ov003_02183b9c(void *arg0) {
    s16 temp_r1;
    s32 temp_r4;

    if (func_02035424(arg0, 6) != 0) {
        temp_r1 = M2C_FIELD(arg0, s16 *, 0x152);
        switch (temp_r1) {                          /* irregular */
            case 0x1E3:
                func_020390b8(arg0, 0x23C);
                break;
            case 0x1E4:
                func_020390b8(arg0, 0xFDC4);
                break;
        }
    }
    temp_r4 = func_0203535c(arg0);
    func_02022b6c(arg0);
    func_ov003_0218758c(arg0, 0, 0x1FF, temp_r4);
}
