/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020bfbe8(void);
void func_020c01fc(void *, void *);
extern void *data_ov007_0215e7e0;
extern u8 func_ov007_0215ae5c;

void func_ov007_0215b0f4(void) {
    s32 sp0;

    if (func_020bfbe8() == 0) {
        return;
    }
    *(s16 *) ((u8 *) data_ov007_0215e7e0 + 0x58) = 0x384;
    func_020c01fc(&func_ov007_0215ae5c, &sp0);
}
