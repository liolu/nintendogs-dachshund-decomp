/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02003a00(void);

extern void *data_0215a064;

void func_02124894(s32 arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            if (func_02003a00() != 0) {
                M2C_FIELD(arg0, u16 *, 4) = 0x1100U;
                M2C_FIELD(arg0, s16 *, 6) = 0;
            }
            return;
        case 0x1100:
            if (M2C_FIELD(data_0215a064, s16 *, 0x100) == 2) {
                M2C_FIELD(arg0, u16 *, 4)   = 1U;
                M2C_FIELD(arg0, s32 *, 0xC) = 1;
            }
            return;
    }
}
