/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02107c9c(void *a, s16 b);
u8 *func_02003844(s32 a, s32 b);
extern u8 *data_ov004_02163ccc;
extern void func_ov004_02162950(void);
extern void func_ov004_02162a58(void);
extern void func_ov004_02162eb8(void);
extern void func_ov004_02163268(void);

void func_ov004_02163308(u8 *arg0, s32 arg1, s32 arg2) {
    s16 i;
    u8 *temp_r3;

    func_02107c9c(arg0, (s16) arg2);
    *(void **) (arg0 + 0x1F4) = (void *) func_ov004_02162eb8;
    *(void **) (arg0 + 0x1F8) = (void *) func_ov004_02162a58;
    *(void **) (arg0 + 0x1FC) = (void *) func_ov004_02162950;
    *(void **) (arg0 + 0x1F0) = (void *) func_ov004_02163268;
    *(u8 **) (arg0 + 0x214)   = func_02003844(arg1, 0x1C);
    temp_r3                   = *(u8 **) (arg0 + 0x214);
    *(s16 *) temp_r3          = -1;
    *(s16 *) (temp_r3 + 0x18) = 0;
    i                         = 0;
    do {
        ((s32 *) (temp_r3 + 8))[i] = 0;
        i++;
    } while (i < 4);
    data_ov004_02163ccc = arg0;
}
