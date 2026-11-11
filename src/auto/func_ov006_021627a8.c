/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_ov006_02164260;
void func_0207e124(s32);

void func_ov006_021627a8(void) {
    void *p = data_ov006_02164260;
    func_0207e124(*(s32 *) ((u8 *) p + 0x28));
    p                          = data_ov006_02164260;
    *(s32 *) ((u8 *) p + 0x28) = 0;
    data_ov006_02164260        = NULL;
}
