/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s16 func_0211290c(M2C_UNK);                         /* extern */
extern void *data_0215607c;

s16 func_021060d4(void) {
    s16 temp_r0;

    if (data_0215607c != NULL) {
        temp_r0 = M2C_FIELD(data_0215607c, s16 *, 0x84);
        switch (temp_r0) {                          /* irregular */
            case 1:
                return M2C_FIELD(data_0215607c, s16 *, 0xC6);
            case 8:
                return func_0211290c(-1);
            default:
                return -1;
        }
    } else {
        return -1;
    }
}
