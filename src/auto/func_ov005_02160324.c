/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_ov005_02161dc0;
void func_0207e76c(s32);

void func_ov005_02160324(void) {
    void *p = data_ov005_02161dc0;
    func_0207e76c(*(s32 *) ((u8 *) p + 0x28));
    p                          = data_ov005_02161dc0;
    *(s32 *) ((u8 *) p + 0x28) = 0;
    data_ov005_02161dc0        = NULL;
}
