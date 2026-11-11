/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02080858(s32, s32);
void func_020072e0(void *, s32, s32);
extern void *data_ov013_021583c0;

void func_ov013_02157cf0(void) {
    void *temp_r1;
    s32 t;

    temp_r1 = *(void **) ((u8 *) data_ov013_021583c0 + 0x398);
    t       = *(s32 *) temp_r1;
    func_02080858(t, *(s32 *) ((u8 *) temp_r1 + 0x10));
    func_020072e0(*(void **) ((u8 *) data_ov013_021583c0 + 0x398), 0, 0);
}
