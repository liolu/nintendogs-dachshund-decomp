/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020c07ec(void);
extern void *data_ov028_0215c030;

s32 func_ov028_0215b7a4(void) {
    if ((*(s32 *) ((u8 *) data_ov028_0215c030 + 0x1c) == 2) && (func_020c07ec() != 0)) {
        return 1;
    }
    return 0;
}
