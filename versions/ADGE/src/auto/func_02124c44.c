/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02003a00(void);

extern u16 data_0214d5fc;
extern M2C_UNK data_0214d624;

void func_02124c44(s32 arg0) {
    s32 var_r0;
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            if (func_02003a00() == 0) {
                return;
            }
            M2C_FIELD(arg0, u16 *, 4)    = 0x1200U;
            M2C_FIELD(arg0, s16 *, 6)    = 0;
            M2C_FIELD(arg0, s16 *, 0x1C) = 0;
            return;
        case 0x1200:
            var_r0                       = 0;
            M2C_FIELD(arg0, s16 *, 0x1C) = (s16) (M2C_FIELD(arg0, s16 *, 0x1C) + 1);
            if (M2C_FIELD(&data_0214d624, u16 *, 2) & 2) {
                var_r0 = 1;
            } else if ((u16) (data_0214d5fc & 0xC03) != 0) {
                var_r0 = 1;
            } else if ((s32) M2C_FIELD(arg0, s16 *, 0x1C) >= 0x2A30) {
                var_r0 = 1;
            }
            if (var_r0 != 0) {
                M2C_FIELD(arg0, u16 *, 4)   = 1U;
                M2C_FIELD(arg0, s32 *, 0xC) = 1;
            }
            return;
    }
}
