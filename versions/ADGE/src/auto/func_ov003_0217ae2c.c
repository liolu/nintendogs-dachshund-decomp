/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 w0;
    s32 w1;
    s32 w2;
} Words3;

s32 func_0200f8d0(u8 *);
s32 func_02024d30(u8 *, s32, s32, s32);
s32 func_02028114(void);
s32 func_0202cde8(u8 *, s32, s32, s32);
s32 func_020350fc(u8 *);
s32 func_0203535c(u8 *);
s32 func_ov003_0218a480(u8 *, s32, s32);
s32 func_ov003_021964c0(u8 *, s32, s32);
extern u8 *data_0215a064;

void func_ov003_0217ae2c(u8 *arg0) {
    s32 temp_ret;
    s32 temp_r0_4;
    s64 v;
    u8 *temp_r0_2;

    temp_ret = func_02028114();
    v        = (s64) temp_ret * 0x102 + 0x800;
    func_02024d30(arg0, 0x1E, 0x31, (s32) (v >> 12));
    temp_r0_2                  = *(u8 **) (data_0215a064 + 0x1C);
    *(Words3 *) (arg0 + 0x3B4) = *(Words3 *) (temp_r0_2 + 0x30);
    if (func_0200f8d0(arg0) != 0) {
        return;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    temp_r0_4 = func_020350fc(arg0);
    if (func_0202cde8(arg0, 0, temp_r0_4, 1) != 0) {
        return;
    }
    if (temp_r0_4 != 0) {
        func_ov003_021964c0(arg0, temp_r0_4, 0);
        return;
    }
    func_ov003_0218a480(arg0, 0, 0);
}
