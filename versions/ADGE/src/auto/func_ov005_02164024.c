/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_ov005_02163e70(void);
extern void func_ov005_02163980(void);
extern void func_ov005_02163fc4(void);
void func_020a7924(void *, s32);
void *func_020038a8(void *, s32);

void func_ov005_02164024(void *arg0, void *arg1) {
    u8 *p = (u8 *) arg0;
    u8 *q;

    func_020a7924(arg0, 0x6E);
    *(void **) (p + 0x1F4) = (void *) func_ov005_02163e70;
    *(void **) (p + 0x1F8) = (void *) func_ov005_02163980;
    *(void **) (p + 0x1F0) = (void *) func_ov005_02163fc4;
    *(void **) (p + 0x214) = func_020038a8(arg1, 0xC);
    q                      = *(u8 **) (p + 0x214);
    *(s16 *) q             = -1;
    *(s32 *) (q + 4)       = 0;
}
