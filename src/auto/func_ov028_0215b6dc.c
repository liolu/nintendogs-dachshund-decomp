/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov028_0215c030;
void *func_020c0834(void);
s32 func_02064db4(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void func_ov028_0215b088(void);

void func_ov028_0215b6dc(s32 arg0, u32 arg1) {
    if (arg1 > *(u16 *) ((u8 *) func_020c0834() + 0x34)) {
        return;
    }
    if (*(s32 *) (data_ov028_0215c030 + 0x30) == 0) {
        return;
    }
    *(s32 *) (data_ov028_0215c030 + 0x30) = 0;
    if (func_02064db4(func_ov028_0215b088, 0, arg0, arg1, 0xFFFF, 5, 2) != 2) {
        *(s32 *) (data_ov028_0215c030 + 0x30) = 1;
    }
}
