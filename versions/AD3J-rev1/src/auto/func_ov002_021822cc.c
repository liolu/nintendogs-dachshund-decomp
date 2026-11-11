/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02022b38(void *arg0);
s32 func_020351a0(void);
void func_ov002_021852bc(void *arg0, s32 a1, s32 a2, s32 a3);

void func_ov002_021822cc(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_020351a0();
    func_02022b38(arg0);
    func_ov002_021852bc(arg0, 8, 0x7f, temp_r4);
}
