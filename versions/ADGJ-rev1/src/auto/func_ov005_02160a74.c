/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02069b68(s32);
void func_0207d0e0(s32, s32, s32, s32);
s32 func_020894a0(s32);
s32 func_020894a8(s32);
extern u8 *data_ov005_02161dc4;

void func_ov005_02160a74(void) {
    s32 temp_r4;
    u8 *temp_r3;
    u8 *temp_r3_2;

    if (*(s32 *) (data_ov005_02161dc4 + 0x180) == 0) {
        return;
    }
    func_02069b68(0);
    *(u16 *) 0x0400100A = (u16) ((*(u16 *) 0x0400100A & 0x43) | 0x504);
    temp_r4             = func_020894a0(*(s32 *) (data_ov005_02161dc4 + 0x15C));
    func_0207d0e0(0x23, 0, func_020894a8(*(s32 *) (data_ov005_02161dc4 + 0x15C)), temp_r4);
    temp_r3 = *(u8 **) (data_ov005_02161dc4 + 0x17C);
    func_0207d0e0(0x19, 0, (s32) (temp_r3 + 0xC), *(s32 *) (temp_r3 + 8));
    temp_r3_2 = *(u8 **) (data_ov005_02161dc4 + 0x174);
    func_0207d0e0(0x15, 0, *(s32 *) (temp_r3_2 + 0x14), *(s32 *) (temp_r3_2 + 0x10));
    func_0207d0e0(0x1E, 0, *(s32 *) (*(u8 **) (data_ov005_02161dc4 + 0x170) + 0xC), 0x1C0);
    func_0207d0e0(0x1F, 0, *(s32 *) (*(u8 **) (data_ov005_02161dc4 + 0x178) + 0xC), 0x1C0);
    *(u16 *) 0x0400100A = (u16) ((*(u16 *) 0x0400100A & ~3) | 1);
    *(s32 *) 0x04001000 |= 0x1200;
    *(s32 *) 0x04001000 &= ~0xC00;
    *(u16 *) 0x04001050 = 0;
    *(s32 *) 0x04001014 = 0;
}
