/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02028114(void);
void func_ov003_02181da0(void *, s32, s32, s32);

void func_ov003_0217ef7c(void *arg0) {
    s32 t = func_02028114();
    s64 v = (s64) t * 26 + 0x800;
    func_ov003_02181da0(arg0, 3, 0xF2, (s32) (v >> 12));
}
