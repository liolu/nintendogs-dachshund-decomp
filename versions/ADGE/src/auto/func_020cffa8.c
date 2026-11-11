/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02080978(void);

void func_020cffa8(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r5;

    var_r5  = arg1;
    temp_r0 = func_02080978();
    if (var_r5 == -1) {
        var_r5 = (s32) (s16) ((u16) ((u32) ((u16) ((temp_r0 * 0x10DCD) + 1) * 0x14) >> 0x10) + 0x75);
    }
    M2C_FIELD(arg0, s16 *, 0x70) = (s16) var_r5;
}
