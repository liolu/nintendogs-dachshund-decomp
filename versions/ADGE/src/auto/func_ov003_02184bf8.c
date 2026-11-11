/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02023644(void *arg0, s32 a1, s32 a2);
void func_ov003_021851a8(void *arg0, s32 a1, s32 a2);

void func_ov003_02184bf8(void *arg0) {
    if (*(u16 *) ((u8 *) arg0 + 0xfc) > 0x1e) {
        func_02023644(arg0, 0xa, 1);
    }
    func_ov003_021851a8(arg0, 0, 0);
}
