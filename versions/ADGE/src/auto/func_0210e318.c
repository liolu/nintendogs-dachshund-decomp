/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02044990(M2C_UNK);
M2C_UNK func_020449ac(M2C_UNK);
void func_02089dd0(void);
void func_020c7f84(M2C_UNK);

extern void *data_0215a044;

void func_0210e318(void) {
    s32 temp_r0;
    s32 var_r5;

    var_r5 = 0;
    if ((s32) M2C_FIELD(data_0215a044, s16 *, 0x20) > 0) {
        do {
            temp_r0 = func_020449ac(var_r5);
            if (temp_r0 != 0) {
                func_020c7f84(temp_r0);
                func_02044990((s32) (s8) var_r5);
            }
            var_r5 = (s32) (s16) (var_r5 + 1);
        } while (var_r5 < (s32) M2C_FIELD(data_0215a044, s16 *, 0x20));
    }
    func_02089dd0();
}
