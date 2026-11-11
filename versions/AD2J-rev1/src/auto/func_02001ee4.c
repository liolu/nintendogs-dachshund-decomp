/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02001bf0(void);
M2C_UNK func_0208120c(void);
void func_02081220(M2C_UNK);

extern M2C_UNK data_0214a6e0;

s32 func_02001ee4(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_0208120c();
    if (M2C_FIELD(&data_0214a6e0, s32 *, 0) != 0) {
        func_02081220(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_0214a6e0, s32 *, 0) = 1;
    func_02081220(temp_r0);
    M2C_FIELD(&data_0214a6e0, s32 *, 4) = arg0;
    M2C_FIELD(&data_0214a6e0, s32 *, 8) = arg1;
    if (func_02001bf0() != 0) {
        return 0;
    }
    return 3;
}
