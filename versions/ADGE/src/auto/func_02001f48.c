/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02001c54(void);
M2C_UNK func_02080c28(void);
void func_02080c3c(M2C_UNK);

extern M2C_UNK data_0214cce0;

s32 func_02001f48(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_02080c28();
    if (M2C_FIELD(&data_0214cce0, s32 *, 0) != 0) {
        func_02080c3c(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_0214cce0, s32 *, 0) = 1;
    func_02080c3c(temp_r0);
    M2C_FIELD(&data_0214cce0, s32 *, 4) = arg0;
    M2C_FIELD(&data_0214cce0, s32 *, 8) = arg1;
    if (func_02001c54() != 0) {
        return 0;
    }
    return 3;
}
