#include "m2c.h"
extern u8 data_02154350[];
extern u8 data_02154354[];
void func_02070e7c(void *p, s32 a, s32 b);
s32 func_0208cfcc(s32 arg0, s32 arg1) {
    u8 *p = (u8 *) data_02154350;

    *(u16 *) (p + 0x22) = arg0;
    if (*(u32 *) data_02154354 == 0) {
        return 0;
    }
    func_02070e7c(&data_02154354, arg0 * *(u16 *) (p + 0x24) / 100, arg1);
    return 1;
}
