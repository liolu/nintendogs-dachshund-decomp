/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0211f528(void);
void func_0211fb34(void *, void *);
extern void *data_ov006_0215bb60;
extern u8 func_ov006_02158808;

void func_ov006_02158aa0(void) {
    s32 sp0;

    if (func_0211f528() == 0) {
        return;
    }
    *(s16 *) ((u8 *) data_ov006_0215bb60 + 0x58) = 0x384;
    func_0211fb34(&func_ov006_02158808, &sp0);
}
