/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020a5dcc(void);
M2C_UNK func_020b29bc(M2C_UNK);
void func_020b34c8(M2C_UNK, M2C_UNK);

void func_020bd4d4(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (func_020a5dcc() == 0xA) {
        M2C_FIELD(arg0, s32 *, 0) = 0;
        temp_r0                   = M2C_FIELD(arg0, s32 *, 0);
        switch (temp_r0) {                          /* switch 1; irregular */
            case 0:                                     /* switch 1 */
                M2C_FIELD(arg0, s16 *, 4) = 0;
                return;
            case 1:                                     /* switch 1 */
                M2C_FIELD(arg0, s16 *, 0x5C) = (s16) func_020b29bc(-1);
                return;
            case 2:                                     /* switch 1 */
                M2C_FIELD(arg0, s16 *, 0x5C) = (s16) func_020b29bc(-1);
                func_020b34c8(arg0 + 8, (s32) M2C_FIELD(arg0, s16 *, 0x5C));
                M2C_FIELD(arg0, s32 *, 0x58) = 0;
                return;
        }
    } else {
        if (func_020a5dcc() != 0xB) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 0) = 2;
        temp_r0_2                 = M2C_FIELD(arg0, s32 *, 0);
        switch (temp_r0_2) {                        /* switch 2; irregular */
            case 0:                                     /* switch 2 */
                M2C_FIELD(arg0, s16 *, 4) = 0;
                return;
            case 1:                                     /* switch 2 */
                M2C_FIELD(arg0, s16 *, 0x5C) = (s16) func_020b29bc(-1);
                return;
            case 2:                                     /* switch 2 */
                M2C_FIELD(arg0, s16 *, 0x5C) = (s16) func_020b29bc(-1);
                func_020b34c8(arg0 + 8, (s32) M2C_FIELD(arg0, s16 *, 0x5C));
                M2C_FIELD(arg0, s32 *, 0x58) = 0;
                return;
        }
    }
}
