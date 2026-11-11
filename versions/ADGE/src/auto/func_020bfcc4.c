#include "engine.h"
#include "m2c.h"

extern s32 data_02155678;
extern s32 data_0215567c;

s32 func_020bfcc4(s32 arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        if (M2C_FIELD(arg0, u16 *, 4) == 0xA) {
            data_0215567c = 0;
            if (data_02155678 == 8) {
                data_02155678 = 9;
            } else if (data_02155678 == 4) {
                data_02155678 = 5;
            }
        }
        return 1;
    }
    data_0215567c = 0;
    return 0;
}
