#include "m2c.h"
extern void *data_02159e70;
s32 func_02003a6c(void);
s32 func_02003a34(void);
s32 func_02116cb4(u8 *arg0) {
    u16 f = *(u16 *) (arg0 + 0x2C);
    s32 ret = 1;

    if (f & 1) {
        if (func_02003a6c() == 0) {
            ret = 0;
        }
    } else if (f & 2) {
        if (func_02003a34() == 0) {
            ret = 0;
        }
    } else {
        u8 *p = (u8 *) data_02159e70;

        if (p != 0) {
            s32 bc = *(volatile s32 *) (p + 0xBC);

            if (*(s32 *) (p + 0xB8) == bc) {
                ret = 0;
            }
        }
    }
    return ret;
}
