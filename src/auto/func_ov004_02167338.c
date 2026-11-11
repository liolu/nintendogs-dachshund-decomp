/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov004_0216a5a4(void *);
void func_ov004_02167384(void *, s32);
void func_0208dae8(s32);

void func_ov004_02167338(void *arg0) {
    if (*(u16 *) ((u8 *) arg0 + 0xFC) < 0x190) {
        func_ov004_0216a5a4(arg0);
    }
    func_ov004_02167384(arg0, 0);
    if (*(s16 *) ((u8 *) arg0 + 0xEA) == 0x4C6) {
        return;
    }
    func_0208dae8(1);
}
