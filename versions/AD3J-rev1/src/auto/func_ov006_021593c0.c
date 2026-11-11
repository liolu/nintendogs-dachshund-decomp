/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov006_0215bb60;
void *func_0212016c(void);
s32 func_02066250(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void func_ov006_02157e10(void);

void func_ov006_021593c0(s32 arg0, u32 arg1) {
    if (arg1 > *(u16 *) ((u8 *) func_0212016c() + 0x34)) {
        return;
    }
    if (*(s32 *) (data_ov006_0215bb60 + 0x3C) == 0) {
        return;
    }
    *(s32 *) (data_ov006_0215bb60 + 0x3C) = 0;
    if (func_02066250(func_ov006_02157e10, 0, arg0, arg1, 0xFFFF, 5, 2) != 2) {
        *(s32 *) (data_ov006_0215bb60 + 0x3C) = 1;
    }
}
