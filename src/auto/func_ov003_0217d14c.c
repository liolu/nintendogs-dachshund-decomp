/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov003_0217df20(void *, s16, s32);
s32 func_02035450(void *, s32);
void func_0203e5e8(void *, s16);

void func_ov003_0217d14c(void *arg0) {
    u8 *p = (u8 *) arg0;

    if (func_ov003_0217df20(arg0, (s16) (*(s32 *) (p + 0x484) + 5), 0) != 0) {
        return;
    }
    if (func_02035450(arg0, 0x22) == 0) {
        return;
    }
    func_0203e5e8(arg0, (s16) (*(s32 *) (p + 0x484) + 0x211));
}
