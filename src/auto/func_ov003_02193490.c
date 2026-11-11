/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0202507c(void *, s32, s32, s32);
void func_0202fa5c(void *);
s32 func_020361ac(void *);
void func_ov003_02198408(void *);

void func_ov003_02193490(void *arg0) {
    func_0202507c(arg0, 5, 0x14, *(s32 *) ((u8 *) arg0 + 0x240));
    if (*(u16 *) ((u8 *) arg0 + 0xFC) < 0x64) {
        return;
    }
    if (func_020361ac(arg0) != 0) {
        func_ov003_02198408(arg0);
        return;
    }
    func_0202fa5c(arg0);
}
