/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02023644(void *, s32, s32);
void func_ov003_02184c30(void *, s32, s32);

void func_ov003_02184ad8(void *arg0) {
    if (*(u16 *) ((u8 *) arg0 + 0xFC) > 30) {
        func_02023644(arg0, 16, 1);
    }
    func_ov003_02184c30(arg0, 8, 0);
}
