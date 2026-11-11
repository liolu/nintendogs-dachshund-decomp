/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov027_02159bb0;
extern void func_ov027_02159034(void);
s32 func_0211f790(void *, void *);

void func_ov027_0215979c(void) {
    s32 sp0;
    s16 st;

    st = *(s16 *) (data_ov027_02159bb0 + 0x2C);
    if (st == 0) {
        goto done;
    }
    if (st != 1) {
        goto done;
    }
    if (func_0211f790(func_ov027_02159034, &sp0) != 0) {
        *(s32 *) (data_ov027_02159bb0 + 0x1C) = 3;
    }
done:
    *(s16 *) (data_ov027_02159bb0 + 0x2C) = 0;
}
