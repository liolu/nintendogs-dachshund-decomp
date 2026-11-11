/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0203e5ac(void *, s32, s32);
s32 func_02034e44(void *);
void func_02026468(void *);
void func_02025e44(void *);
extern u32 *data_0214da84;

void func_ov004_02169320(void *arg0) {
    u8 *a;
    u32 v;
    u16 idx;
    s32 t;

    a              = arg0;
    v              = *data_0214da84 * 0x10DCD + 1;
    idx            = (u16) (((u32) (v << 16)) >> 29);
    *data_0214da84 = v;
    switch (idx) {
        case 0:
            func_0203e5ac(arg0, 0, 0x111);
            t = func_02034e44(arg0);
            func_0203e5ac(arg0, 3, t);
            func_02026468(arg0);
            *(s32 *) (a + 0x46C) = 1;
            return;
        case 1:
            func_0203e5ac(arg0, 0, 0x180);
            func_0203e5ac(arg0, 3, 0);
            func_02026468(arg0);
            *(s32 *) (a + 0x46C) = 2;
            return;
        case 5:
            func_0203e5ac(arg0, 0, 0x165);
            func_0203e5ac(arg0, 3, 0);
            func_02025e44(arg0);
            *(s32 *) (a + 0x46C) = 6;
            return;
        case 6:
            func_0203e5ac(arg0, 0, 0x168);
            func_0203e5ac(arg0, 3, 0);
            func_02026468(arg0);
            *(s32 *) (a + 0x46C) = 7;
            return;
        case 7:
            func_0203e5ac(arg0, 0, 0x169);
            func_0203e5ac(arg0, 3, 0);
            func_02026468(arg0);
            *(s32 *) (a + 0x46C) = 8;
            return;
        default:
            break;
    }
}
