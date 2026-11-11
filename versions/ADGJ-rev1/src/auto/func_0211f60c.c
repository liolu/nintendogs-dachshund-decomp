#include "m2c.h"

extern s32 data_02156100;
extern s32 data_02156104;

s32 func_0211f60c(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        if (M2C_FIELD(arg0, u16 *, 4) == 0xA) {
            data_02156104 = 0;
            if (data_02156100 == 8) {
                data_02156100 = 9;
            } else if (data_02156100 == 4) {
                data_02156100 = 5;
            }
        }
        return 1;
    }
    return 0;
}
