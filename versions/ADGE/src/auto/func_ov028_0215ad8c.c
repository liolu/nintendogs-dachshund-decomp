/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0206fc80(s32);
void func_0206f6c4(void);
void func_ov028_0215b80c(void);
extern void *data_ov028_0215bfb4;

void func_ov028_0215ad8c(void) {
    func_0206fc80(0xFFFF);
    func_0206f6c4();
    *(s32 *) ((u8 *) data_ov028_0215bfb4 + 0)     = 0;
    *(s32 *) ((u8 *) data_ov028_0215bfb4 + 0x108) = 0;
    *(s32 *) ((u8 *) data_ov028_0215bfb4 + 0x10C) = 0;
    func_ov028_0215b80c();
}
