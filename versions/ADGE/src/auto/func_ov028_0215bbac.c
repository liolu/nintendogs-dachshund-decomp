/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov028_0215c030;
extern void func_ov028_0215b684(void);
s32 func_020c0354(void *, s32, void *);

s32 func_ov028_0215bbac(void) {
    s32 sp0;

    if (*(s32 *) (data_ov028_0215c030 + 0x1C) != 0) {
        return 0;
    }
    *(s32 *) (data_ov028_0215c030 + 0x20) = 1;
    *(s32 *) (data_ov028_0215c030 + 0x28) = 0;
    *(s16 *) (data_ov028_0215c030 + 0x24) = 0;
    *(s16 *) (data_ov028_0215c030 + 0x26) = 0;
    return func_020c0354((void *) func_ov028_0215b684, 2, &sp0);
}
