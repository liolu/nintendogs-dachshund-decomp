/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov028_0215c030;
extern void func_ov028_0215b4b4(void);
s32 func_020bfe50(void *, void *);

void func_ov028_0215bc1c(void) {
    s32 sp0;
    s16 st;

    st = *(s16 *) (data_ov028_0215c030 + 0x2C);
    if (st == 0) {
        goto done;
    }
    if (st != 1) {
        goto done;
    }
    if (func_020bfe50(func_ov028_0215b4b4, &sp0) != 0) {
        *(s32 *) (data_ov028_0215c030 + 0x1C) = 3;
    }
done:
    *(s16 *) (data_ov028_0215c030 + 0x2C) = 0;
}
