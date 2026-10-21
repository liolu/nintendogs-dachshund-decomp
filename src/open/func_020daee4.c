#include "m2c.h"

extern void *data_02159e74;
extern void *data_02159e70;
void func_0207ca98(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

void func_020daee4(void) {
    s32 i;
    s8 *base;

    base = (s8 *) data_02159e74 + 4;
    for (i = 0; i < 0x18; i++, base += 0x1B8) {
        s8 *q = base + 0x18;

        if (*(s32 *) (base + 4) == 0 || *(s32 *) (base + 8) == 0 || *(s32 *) (q + 0x194) == 0) {
            continue;
        }
        if (*(s32 *) base != 0) {
            if (*(s32 *) base != 1) {
                continue;
            }
            if (*(s32 *) ((s8 *) data_02159e70 + 0x1000 + 0xdec) == 0) {
                func_0207ca98(0x13, *(s32 *) (q + 0x19C), *(s32 *) (base + 0x10), *(s32 *) (base + 0x14));
                *(s32 *) (q + 0x194) = 0;
            }
        } else {
            if (*(s32 *) ((s8 *) data_02159e70 + 0x2000 + 0x314) == 0) {
                func_0207ca98(0x23, *(s32 *) (q + 0x19C), *(s32 *) (base + 0x10), *(s32 *) (base + 0x14));
                *(s32 *) (q + 0x194) = 0;
            }
        }
    }
}
