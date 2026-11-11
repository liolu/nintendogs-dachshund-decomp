/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 w0;
    s32 w1;
    s32 w2;
} Words3;

void func_02037130(u8 *, s32);
void func_02039128(u8 *);
u16 func_0203e5e8(u8 *, s32);
void func_02068270(u8 *, Words3 *, u8 *);
void func_021058ac(s32);
s32 func_02106ef0(void);
extern s32 *data_0214da84;

u16 func_ov004_02162990(u8 *arg0) {
    Words3 sp0;
    u16 temp_r0;
    s32 temp_r2;

    *(s32 *) (arg0 + 0x484) = 0;
    *(s32 *) (arg0 + 0x2A0) = *(s32 *) (arg0 + 0x2A0) - *(s32 *) (arg0 + 0x484);
    *(s32 *) (arg0 + 0x3F0) = *(s32 *) (arg0 + 0x3F0) - *(s32 *) (arg0 + 0x484);
    *(s32 *) (arg0 + 0x3FC) = *(s32 *) (arg0 + 0x3FC) - *(s32 *) (arg0 + 0x484);
    *(s32 *) (arg0 + 0x488) = *(s32 *) (arg0 + 0x488) + 1;
    if (func_02106ef0() != 0) {
        func_021058ac(*(s32 *) (arg0 + 0x484));
    }
    sp0 = *(Words3 *) (arg0 + 0x490);
    func_02039128(arg0);
    func_02068270(arg0 + 0x2A0, &sp0, arg0 + 0x278);
    func_02037130(arg0, 0x300);
    temp_r2        = (*data_0214da84 * 0x10DCD) + 1;
    temp_r0        = (u16) ((u32) ((u16) temp_r2 * 0x1E) >> 0x10);
    *data_0214da84 = temp_r2;
    if (temp_r0 != 0) {
        return temp_r0;
    }
    return func_0203e5e8(arg0, 0x49C);
}
