#include "engine.h"
#include "m2c.h"

extern u16 data_02155670;
extern s32 data_02155678;
extern s32 data_0215567c;

s32 func_020bfecc(s32 arg0) {
    u16 temp_r1;

    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        temp_r1 = M2C_FIELD(arg0, u16 *, 8);
        if (temp_r1 == 6) {
            data_0215567c = 0;
            data_02155678 = 8;
        } else if (temp_r1 == 7) {
            data_02155670 = M2C_FIELD(arg0, u16 *, 0xA);
        }
        return 1;
    }
    return 0;
}
