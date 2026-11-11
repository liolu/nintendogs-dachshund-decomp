/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02120124(void);
extern void *data_ov027_02159bb0;

s32 func_ov027_02159324(void) {
    if ((*(s32 *) ((u8 *) data_ov027_02159bb0 + 0x1c) == 2) && (func_02120124() != 0)) {
        return 1;
    }
    return 0;
}
