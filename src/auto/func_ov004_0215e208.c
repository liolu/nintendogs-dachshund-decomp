/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_01ffda04(s16);
void func_02027568(s32, s32 *);
void func_0202757c(s32, s32 *);
s32 func_020280f8(s32);
extern u8 *data_ov004_02163cc0;

void func_ov004_0215e208(u8 *arg0) {
    s32 sp0[3];
    s32 r4;
    s32 x;

    r4 = func_01ffda04(*(s16 *) data_ov004_02163cc0);
    if (*(s32 *) (data_ov004_02163cc0 + 4) != 0) {
        func_0202757c(r4, sp0);
    } else {
        func_02027568(r4, sp0);
    }
    x                      = func_020280f8(r4);
    sp0[2]                 = sp0[2] + (s32) (u32) ((((s64) x * 0x4CD) + 0x800) >> 12);
    *(s32 *) (arg0 + 0x20) = sp0[0] + *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 0x18)) + 4);
    *(s32 *) (arg0 + 0x24) = sp0[1] + *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 0x18)) + 8);
    *(s32 *) (arg0 + 0x28) = sp0[2] + *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 0x18)) + 0xC);
    x                      = func_020280f8(r4);
    *(s32 *) (arg0 + 0x44) = (s32) (u32) ((((s64) x * 0x4CD) + 0x800) >> 12);
    *(s32 *) (arg0 + 0x54) = *(s16 *) (data_ov004_02163cc0 + 8);
}
