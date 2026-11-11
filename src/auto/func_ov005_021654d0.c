/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020a7924(void *a, s16 b);
u8 *func_020038a8(s32 a, s32 b);
extern u8 *data_ov005_02165fac;
extern void func_ov005_02164b18(void);
extern void func_ov005_02164c20(void);
extern void func_ov005_02165080(void);
extern void func_ov005_02165430(void);

void func_ov005_021654d0(u8 *arg0, s32 arg1, s32 arg2) {
    s16 i;
    u8 *temp_r3;

    func_020a7924(arg0, (s16) arg2);
    *(void **) (arg0 + 0x1F4) = (void *) func_ov005_02165080;
    *(void **) (arg0 + 0x1F8) = (void *) func_ov005_02164c20;
    *(void **) (arg0 + 0x1FC) = (void *) func_ov005_02164b18;
    *(void **) (arg0 + 0x1F0) = (void *) func_ov005_02165430;
    *(u8 **) (arg0 + 0x214)   = func_020038a8(arg1, 0x1C);
    temp_r3                   = *(u8 **) (arg0 + 0x214);
    *(s16 *) temp_r3          = -1;
    *(s16 *) (temp_r3 + 0x18) = 0;
    i                         = 0;
    do {
        ((s32 *) (temp_r3 + 8))[i] = 0;
        i++;
    } while (i < 4);
    data_ov005_02165fac = arg0;
}
