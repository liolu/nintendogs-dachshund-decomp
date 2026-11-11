/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0214da84;

void func_ov006_02160088(void *arg0) {
    u8 *a = (u8 *) arg0;
    u8 *g;
    u8 *t;
    s32 v;

    if (a == 0) {
        return;
    }
    g                   = data_0214da84;
    v                   = *(s32 *) (g + 0x8C);
    t                   = g + 0x8C;
    *(s32 *) (a + 0x20) = v + *(s32 *) (*(u8 **) (*(u8 **) (a + 0x18)) + 4);
    *(s32 *) (a + 0x24) = *(s32 *) (t + 4) + *(s32 *) (*(u8 **) (*(u8 **) (a + 0x18)) + 8);
    *(s32 *) (a + 0x28) = *(s32 *) (t + 8) + *(s32 *) (*(u8 **) (*(u8 **) (a + 0x18)) + 0xC);
}
