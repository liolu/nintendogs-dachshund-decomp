/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov005_021650cc(void *);

void func_ov005_02165080(void *arg0) {
    s16 t = *(s16 *) ((u8 *) arg0 + 0x90);
    if (t == 0) {
        return;
    }
    if (t != 2) {
        if (t == 3) {
            *(s32 *) ((u8 *) arg0 + 0xA8) = 0;
        }
        return;
    }
    func_ov005_021650cc(arg0);
}
