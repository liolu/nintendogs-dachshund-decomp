/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0211fc08(void);
extern u8 *data_ov027_02159bb0;

void func_ov027_02159204(void) {
    if (func_0211fc08() != 0) {
        *(s32 *) (data_ov027_02159bb0 + 0x1C) = 1;
    }
}
