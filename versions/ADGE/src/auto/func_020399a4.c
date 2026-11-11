/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020a5d54(void);

extern void *data_0214da84;

s32 func_020399a4(s32 arg0) {
    s32 var_r5;
    s8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s8 *, 0x88);
    var_r5  = 1;
    if ((temp_r4 != func_020a5d54()) && (temp_r4 != M2C_FIELD(data_0214da84, s8 *, 7))) {
        var_r5 = 0;
    }
    return var_r5;
}
