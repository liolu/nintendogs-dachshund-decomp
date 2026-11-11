/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02080858(s32, s32);
void func_020072e0(void *, s32, s32);
extern void *data_ov026_021581e0;

void func_ov026_02157d84(void) {
    void *temp_r1;
    s32 t;

    temp_r1 = *(void **) ((u8 *) data_ov026_021581e0 + 0x4);
    t       = *(s32 *) temp_r1;
    func_02080858(t, *(s32 *) ((u8 *) temp_r1 + 0x10));
    func_020072e0(*(void **) ((u8 *) data_ov026_021581e0 + 0x4), 0, 0);
}
