/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov006_0215bb60;
extern void func_ov006_02158f24(void);
s32 func_0211fe28(void *, void *);

s32 func_ov006_02159664(void) {
    s32 sp0;
    u8 *d;

    d = data_ov006_0215bb60;
    if (*(s32 *) (d + 0x28) != 1) {
        return 0;
    }
    *(s32 *) (d + 0x48)                   = 0;
    *(s32 *) (data_ov006_0215bb60 + 0x2C) = 3;
    *(s32 *) (data_ov006_0215bb60 + 0x28) = 4;
    func_0211fe28((void *) func_ov006_02158f24, &sp0);
    return 1;
}
