/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020c02ac(void *, void *);
extern void *data_ov028_0215c030;
extern u8 func_ov028_0215b654;

s32 func_ov028_0215bb5c(void) {
    s32 sp0;

    if (*(s32 *) ((u8 *) data_ov028_0215c030 + 0x1C) != 1) {
        return 0;
    }
    *(s32 *) ((u8 *) data_ov028_0215c030 + 0x1C) = 0;
    return func_020c02ac(&func_ov028_0215b654, &sp0);
}
