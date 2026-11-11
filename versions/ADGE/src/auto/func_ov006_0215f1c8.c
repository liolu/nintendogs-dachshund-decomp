/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0203535c(void *);
void func_0203e5ac(void *, s32, s32);
void func_020395c4(void *);

void func_ov006_0215f1c8(void *arg0) {
    if (*(s16 *) ((u8 *) arg0 + 0x152) == 0x209) {
        if (func_0203535c(arg0) != 0) {
            func_0203e5ac(arg0, 0, 0x28);
        }
    }
    func_020395c4(arg0);
}
