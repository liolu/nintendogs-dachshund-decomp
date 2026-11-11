/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02044980(s16);                             /* extern */
M2C_UNK func_0208b9c8(void *, M2C_UNK);             /* extern */
M2C_UNK func_020a7fdc(void *, void *);              /* extern */
M2C_UNK func_020a80bc(void *, void *, s32);         /* extern */
M2C_UNK func_020afbf4(void *);                      /* extern */
M2C_UNK func_020f7788(void *);                      /* extern */
s32 func_02114564(s32, void *, s32);                /* extern */

void func_020f76c8(void *arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_02044980(M2C_FIELD(arg0, s16 *, 0x9C));
    temp_r5 = M2C_FIELD(arg0, void **, 0x214);
    func_020a7fdc(arg0, arg0 + 0xC8);
    if (temp_r4 == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s16 *, 0x88) == 0) {
        func_020a80bc(arg0, arg0 + 0xBC, 0x4010);
        if (func_02114564(temp_r4, arg0 + 0xBC, 0x333) != 0) {
            func_0208b9c8(arg0 + 0x190, 5);
            func_020afbf4(arg0);
        }
        func_020f7788(arg0);
        return;
    }
    if (M2C_FIELD(temp_r5, s32 *, 8) == 0) {
        return;
    }
    func_020afbf4(arg0);
    M2C_FIELD(temp_r5, s32 *, 8) = 0;
    M2C_FIELD(temp_r5, s32 *, 4) = 1;
}
