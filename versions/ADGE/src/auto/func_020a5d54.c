/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020b29bc(M2C_UNK);

extern void *data_021555f4;

s32 func_020a5d54(void) {
    s16 temp_r0;

    if (data_021555f4 != NULL) {
        temp_r0 = M2C_FIELD(data_021555f4, s16 *, 0x84);
        switch (temp_r0) {                          /* irregular */
            case 1:
                return (s32) M2C_FIELD(data_021555f4, s16 *, 0xC6);
            case 8:
                return func_020b29bc(-1);
            default:
                return -1;
        }
    } else {
        return -1;
    }
}
