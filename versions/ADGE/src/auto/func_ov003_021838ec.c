/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02022b6c(void *);
s32 func_0202c55c(void *, s32);
void func_0203e5e8(void *, s32);

void func_ov003_021838ec(void *arg0) {
    func_02022b6c(arg0);
    if (func_0202c55c(arg0, 2) != 0) {
        return;
    }
    if (*(u16 *) ((u8 *) arg0 + 0xFC) <= 0xC8) {
        return;
    }
    func_0203e5e8(arg0, 0x233);
}
