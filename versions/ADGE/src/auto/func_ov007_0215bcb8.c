/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov007_0215e7e0;
extern void func_ov007_0215b578(void);
s32 func_020c04f0(void *, void *);

s32 func_ov007_0215bcb8(void) {
    s32 sp0;
    u8 *d;

    d = data_ov007_0215e7e0;
    if (*(s32 *) (d + 0x28) != 1) {
        return 0;
    }
    *(s32 *) (d + 0x48)                   = 0;
    *(s32 *) (data_ov007_0215e7e0 + 0x2C) = 3;
    *(s32 *) (data_ov007_0215e7e0 + 0x28) = 4;
    func_020c04f0((void *) func_ov007_0215b578, &sp0);
    return 1;
}
