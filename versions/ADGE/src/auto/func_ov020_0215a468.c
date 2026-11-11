/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_020c9990(void *);
void func_020ca4b0(void *, void *);
extern u8 func_ov020_0215a4a8;

void *func_ov020_0215a468(void *arg0) {
    void *p                    = func_020c9990(arg0);
    *(s32 *) ((u8 *) p + 0x3C) = 0;
    *(s32 *) ((u8 *) p + 0x40) = 0x2000;
    *(s32 *) ((u8 *) p + 0x44) = 0;
    func_020ca4b0(p, &func_ov020_0215a4a8);
    *(s32 *) ((u8 *) p + 0x7C) = 0x6000;
    return p;
}
