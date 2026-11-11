/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_01ffec30(void *arg0) {
    s32 (*temp_r1)(void *);
    s32 (*temp_r1_2)(void *);
    s32 var_r0;
    void *temp_r5;
    void *var_r4;

    temp_r5 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_r5 == NULL) {
        return arg0;
    }
    var_r4 = temp_r5;
    do {
        var_r0 = M2C_FIELD(var_r4, u8 *, 1) & 1;
        if (var_r0 == 0) {
            temp_r1 = M2C_FIELD(var_r4, s32(**)(void *), 0x14);
            if (temp_r1 != NULL) {
                var_r0 = temp_r1(var_r4);
            }
            temp_r1_2 = M2C_FIELD(var_r4, s32(**)(void *), 0x18);
            if (temp_r1_2 != NULL) {
                var_r0 = temp_r1_2(var_r4);
            }
        }
        var_r4 = M2C_FIELD(var_r4, void **, 0xC);
    } while (var_r4 != temp_r5);
    return (void *) var_r0;
}
