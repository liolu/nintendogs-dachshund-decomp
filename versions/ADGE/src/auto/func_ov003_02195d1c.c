/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02027f68(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02029248(void *);                      /* extern */
M2C_UNK func_0202f9a0(void *);                      /* extern */
M2C_UNK func_02035fcc(void *, s16);                 /* extern */
s32 func_020abb3c(void *);                          /* extern */
M2C_UNK func_ov003_02198408(void *);                /* extern */
extern void *data_021555f8;
extern void *data_0215a064;

void func_ov003_02195d1c(void *arg0) {
    s16 temp_r0;
    s16 temp_r2;
    s32 var_r0;
    void *var_r5;

    temp_r2 = M2C_FIELD(data_0215a064, s16 *, 0x7A);
    if (((s32) temp_r2 < 0) || ((s32) M2C_FIELD(data_021555f8, s16 *, 0x20) <= (s32) temp_r2)) {
        var_r5 = NULL;
    } else {
        var_r5 = M2C_FIELD((data_021555f8 + (temp_r2 * 4)), void **, 4);
    }
    if (var_r5 != NULL) {
        temp_r0 = M2C_FIELD(var_r5, s16 *, 0x90);
        if ((temp_r0 == 0) || (temp_r0 == 2)) {
            var_r0 = 1;
        } else if ((M2C_FIELD(var_r5, s16 *, 0x94) == 0x35) && (func_020abb3c(var_r5) == 0)) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 == 0) {
            if ((M2C_FIELD(var_r5, s16 *, 0x96) == 0) && ((func_020abb3c(var_r5) == 0) || (func_02027f68(arg0, 3) <= 0x12C))) {
                func_0202f9a0(arg0);
            } else if ((M2C_FIELD(var_r5, s16 *, 0x96) == 1) &&
                       ((func_020abb3c(var_r5) == 0) || (func_02027f68(arg0, 4) <= 0x96))) {
                func_0202f9a0(arg0);
            } else {
                func_02035fcc(arg0, (s16) (M2C_FIELD(var_r5, s16 *, 0x88) + 3));
                func_ov003_02198408(arg0);
                M2C_FIELD(arg0, s32 *, 0x488) = 0;
            }
        } else {
            goto block_22;
        }
    } else {
    block_22:
        func_0202f9a0(arg0);
    }
    func_02029248(arg0);
}
