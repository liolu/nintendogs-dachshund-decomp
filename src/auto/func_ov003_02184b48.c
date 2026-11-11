/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02023644(void *, s32, s32);
void func_ov003_02184c74(void *, s32, s32);

void func_ov003_02184b48(void *arg0) {
    if (*(u16 *) ((u8 *) arg0 + 0xfc) > 0x1e) {
        func_02023644(arg0, 0xe, 1);
    }
    func_ov003_02184c74(arg0, 6, 0);
}
