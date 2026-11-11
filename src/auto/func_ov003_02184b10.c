/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02023644(void *arg0, s32 a1, s32 a2);
void func_ov003_02184c30(void *arg0, s32 a1, s32 a2);

void func_ov003_02184b10(void *arg0) {
    if (*(u16 *) ((u8 *) arg0 + 0xfc) > 0x1e) {
        func_02023644(arg0, 0xf, 1);
    }
    func_ov003_02184c30(arg0, 7, 0);
}
