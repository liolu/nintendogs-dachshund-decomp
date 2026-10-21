#include "m2c.h"
extern s32 *data_0214da84;
extern s16 data_02139b88[];
void func_02040e48(s32 arg0) {
    s32 t;
    u16 r;

    t = (*data_0214da84 * 0x10DCD) + 1;
    r = (u16) ((u32) ((u16) t * 0x1E) >> 0x10);
    *data_0214da84 = t;
    *(u16 *) (arg0 + 0x10C) = r + 0x3C;
}
