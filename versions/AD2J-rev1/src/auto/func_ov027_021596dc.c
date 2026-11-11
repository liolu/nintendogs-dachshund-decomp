/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0211fbec(void *, void *);
extern void *data_ov027_02159bb0;
extern u8 func_ov027_021591d4;

s32 func_ov027_021596dc(void) {
    s32 sp0;

    if (*(s32 *) ((u8 *) data_ov027_02159bb0 + 0x1C) != 1) {
        return 0;
    }
    *(s32 *) ((u8 *) data_ov027_02159bb0 + 0x1C) = 0;
    return func_0211fbec(&func_ov027_021591d4, &sp0);
}
