#include "engine.h"
#include "m2c.h"
extern s16 data_02139b78[];
s32 func_020352ec(s32 arg0, s32 arg1, s32 arg2) {
    u8 *base = (u8 *) (arg0 + arg1 * 2);
    s16 v = data_02139b78[arg1 * 2];
    s16 a;
    s16 b;
    u8 *p;

    base += 0x100;
    a = *(s16 *) (base + 0x62);
    b = *(s16 *) (base + 0x52);
    p = (u8 *) *(s32 *) (arg0 + 0x74);
    p = p + v * 0x24;
    if (a == b && p != NULL && ((*(s32 *) (p + 0x20) >> 12) >= arg2)) {
        return 1;
    }
    return 0;
}
