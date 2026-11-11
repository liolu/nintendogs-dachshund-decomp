/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0206e5b8(M2C_UNK, s32 *, M2C_UNK);         /* extern */
s32 func_0206e66c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0207fcb8(M2C_UNK);                     /* extern */
M2C_UNK func_02080858(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_02080874();                            /* extern */
s32 func_0208120c();                                /* extern */
M2C_UNK func_02081220(s32);                         /* extern */
M2C_UNK func_0208127c(M2C_UNK);                     /* extern */

s32 func_02067780(void *arg0, s32 *arg1, s32 arg2) {
    s32 *temp_r7;
    s32 temp_r0;
    s32 temp_r7_2;
    s32 var_r8;

    var_r8 = arg2;
    if (!(M2C_FIELD(arg0, volatile s32 *, 0x34) & 2)) {
        M2C_FIELD(arg0, volatile s32 *, 0x34) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x34) | 2);
        if (func_0206e66c(0xB, 1) == 0) {
            do {
                func_0208127c(0x64);
            } while (func_0206e66c(0xB, 1) == 0);
        }
        func_02067780(arg0, NULL, 1);
    }
    func_02080858(M2C_FIELD(arg0, s32 **, 0), 0x40);
    func_02080874();
loop_6:
    M2C_FIELD(arg0, s32 **, 4)            = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x34) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x34) | 0x20);
    do {

    } while (func_0206e5b8(0xB, arg1, 1) < 0);
    if (arg1 == NULL) {
        temp_r7 = M2C_FIELD(arg0, s32 **, 0);
        do {

        } while (func_0206e5b8(0xB, temp_r7, 1) < 0);
    }
    temp_r7_2 = func_0208120c();
    if (M2C_FIELD(arg0, volatile s32 *, 0x34) & 0x20) {
        do {
            func_0207fcb8(0);
        } while (M2C_FIELD(arg0, volatile s32 *, 0x34) & 0x20);
    }
    func_02081220(temp_r7_2);
    temp_r0 = *M2C_FIELD(arg0, s32 **, 0);
    if (temp_r0 == 4) {
        var_r8 -= 1;
        if (var_r8 > 0) {
            goto loop_6;
        }
    }
    if (temp_r0 == 0) {
        return 1;
    }
    return 0;
}
