/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov027_02159bb0;
extern void func_ov027_02159204(void);
s32 func_0211fc94(void *, s32, void *);

s32 func_ov027_0215972c(void) {
    s32 sp0;

    if (*(s32 *) (data_ov027_02159bb0 + 0x1C) != 0) {
        return 0;
    }
    *(s32 *) (data_ov027_02159bb0 + 0x20) = 1;
    *(s32 *) (data_ov027_02159bb0 + 0x28) = 0;
    *(s16 *) (data_ov027_02159bb0 + 0x24) = 0;
    *(s16 *) (data_ov027_02159bb0 + 0x26) = 0;
    return func_0211fc94((void *) func_ov027_02159204, 2, &sp0);
}
