#include "engine.h"
#include "m2c.h"

extern void *data_0215a064;

void func_0211d660(s32 arg0) {
    u16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u16 *, 4);
    switch (temp_r1) {                              /* irregular */
        case 0x0:
            M2C_FIELD(arg0, u16 *, 4) = 0xE00U;
            M2C_FIELD(arg0, s16 *, 6) = 0;
            return;
        case 0xE00:
            if (M2C_FIELD(data_0215a064, s16 *, 0x100) == 2) {
                M2C_FIELD(arg0, u16 *, 4)   = 1U;
                M2C_FIELD(arg0, s32 *, 0xC) = 1;
            }
            return;
    }
}
