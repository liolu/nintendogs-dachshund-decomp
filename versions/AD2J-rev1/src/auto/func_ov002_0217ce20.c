/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020280ec(void);
void func_ov002_0217f9ec(void *, s32, s32, s32);

void func_ov002_0217ce20(void *arg0) {
    s32 t = func_020280ec();
    s64 v = (s64) t * 26 + 0x800;
    func_ov002_0217f9ec(arg0, 4, 0xF3, (s32) (v >> 12));
}
