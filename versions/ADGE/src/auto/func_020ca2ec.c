/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02077ac8(s32, s32);                    /* extern */
void *func_0207d038(void **, void *);               /* extern */
extern void ***data_02159e28;

void func_020ca2ec(void) {
    s32 temp_r0;
    s32 temp_r1;
    u16 temp_r2;
    void **temp_r5;
    void *var_r4;

    temp_r5 = *data_02159e28;
    var_r4  = *temp_r5;
    if (var_r4 == NULL) {
        return;
    }
    do {
        temp_r0 = M2C_FIELD(var_r4, s32 *, 8);
        if (temp_r0 != 0) {
            temp_r2 = M2C_FIELD(var_r4, u16 *, 4);
            if (!(temp_r2 & 1)) {
                temp_r1 = temp_r2 & 2;
                if (temp_r1 == 0) {
                    func_02077ac8(temp_r0, temp_r1);
                    M2C_FIELD(var_r4, u16 *, 4) = (u16) (M2C_FIELD(var_r4, u16 *, 4) | 2);
                }
            }
        }
        var_r4 = func_0207d038(temp_r5, var_r4);
    } while (var_r4 != NULL);
}
