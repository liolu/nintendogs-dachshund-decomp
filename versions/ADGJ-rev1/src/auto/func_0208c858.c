/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02044654(M2C_UNK);
M2C_UNK func_02044670(M2C_UNK);
void func_020c29dc(M2C_UNK);
void func_020ea6d8(void);

extern void *data_02153700;

void func_0208c858(void) {
    s32 temp_r0;
    s32 var_r5;

    var_r5 = 0;
    if ((s32) M2C_FIELD(data_02153700, s16 *, 0x20) > 0) {
        do {
            temp_r0 = func_02044670(var_r5);
            if (temp_r0 != 0) {
                func_020c29dc(temp_r0);
                func_02044654((s32) (s8) var_r5);
            }
            var_r5 = (s32) (s16) (var_r5 + 1);
        } while (var_r5 < (s32) M2C_FIELD(data_02153700, s16 *, 0x20));
    }
    func_020ea6d8();
}
