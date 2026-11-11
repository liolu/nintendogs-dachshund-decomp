/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_01ffdb08(s16);
void func_02027590(s32, s32 *);
void func_020275a4(s32, s32 *);
s32 func_02028120(s32);
extern u8 *data_ov005_02165fa0;

void func_ov005_02160640(u8 *arg0) {
    s32 sp0[3];
    s32 r4;
    s32 x;

    r4 = func_01ffdb08(*(s16 *) data_ov005_02165fa0);
    if (*(s32 *) (data_ov005_02165fa0 + 4) != 0) {
        func_020275a4(r4, sp0);
    } else {
        func_02027590(r4, sp0);
    }
    x                      = func_02028120(r4);
    sp0[2]                 = sp0[2] + (s32) (u32) ((((s64) x * 0x4CD) + 0x800) >> 12);
    *(s32 *) (arg0 + 0x20) = sp0[0] + *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 0x18)) + 4);
    *(s32 *) (arg0 + 0x24) = sp0[1] + *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 0x18)) + 8);
    *(s32 *) (arg0 + 0x28) = sp0[2] + *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 0x18)) + 0xC);
    x                      = func_02028120(r4);
    *(s32 *) (arg0 + 0x44) = (s32) (u32) ((((s64) x * 0x4CD) + 0x800) >> 12);
    *(s32 *) (arg0 + 0x54) = *(s16 *) (data_ov005_02165fa0 + 8);
}
