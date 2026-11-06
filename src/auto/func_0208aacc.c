/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207fcb8(void *);                      /* extern */
s32 func_0208120c();                                /* extern */
M2C_UNK func_02081220(s32);                         /* extern */

s32 func_0208aacc(void *arg0) {
    s32 temp_r5;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r6;

    temp_r5 = func_0208120c();
    if (M2C_FIELD(arg0, volatile s32 *, 0x10) & 8) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        var_r6 = 1;
    } else {
        var_r6 = 0;
    }
    if (var_r6 != 0) {
        if (M2C_FIELD(arg0, volatile s32 *, 0x10) & 0x10) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        if (var_r0_2 != 0) {
            M2C_FIELD(arg0, volatile s32 *, 0x10) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x10) | 0x40);
            do {
                func_0207fcb8(arg0 + 0xE);
                if (M2C_FIELD(arg0, volatile s32 *, 0x10) & 0x40) {
                    var_r0_3 = 1;
                } else {
                    var_r0_3 = 0;
                }
            } while (var_r0_3 != 0);
        } else {
            M2C_FIELD(arg0, volatile s32 *, 0x10) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x10) | 8);
        }
    }
    func_02081220(temp_r5);
    return var_r6;
}
