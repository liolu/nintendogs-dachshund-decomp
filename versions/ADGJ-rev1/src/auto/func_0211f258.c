#include "m2c.h"

extern s16 data_021560f4;
extern s32 data_02156100;
extern s32 data_02156104;

void func_0211f258(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        return;
    }
    data_021560f4 = 0;
    data_02156104 = 0;
    data_02156100 = 0;
}
