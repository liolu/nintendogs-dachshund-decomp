/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 *data_0214da84;

s32 func_02106ef0(void);
void func_021058ac(s32);
s32 func_0203535c(void *);
void func_0208dae8(s32);
void func_0203e5e8(void *, s32);

void func_ov004_02164160(u8 *arg0) {
    s32 t;

    *(s32 *) (arg0 + 0x484) = 0;
    *(s32 *) (arg0 + 0x2A0) = *(s32 *) (arg0 + 0x2A0) - *(s32 *) (arg0 + 0x484);
    *(s32 *) (arg0 + 0x3F0) = *(s32 *) (arg0 + 0x3F0) - *(s32 *) (arg0 + 0x484);
    *(s32 *) (arg0 + 0x3FC) = *(s32 *) (arg0 + 0x3FC) - *(s32 *) (arg0 + 0x484);
    *(s32 *) (arg0 + 0x488) = *(s32 *) (arg0 + 0x488) + 1;
    if (func_02106ef0() != 0) {
        func_021058ac(*(s32 *) (arg0 + 0x484));
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0208dae8(1);
    t              = (*data_0214da84 * 0x10DCD) + 1;
    *data_0214da84 = t;
    switch ((u16) ((u32) (t << 0x10) >> 0x1F)) {
        case 0:
            func_0203e5e8(arg0, 0x48D);
            return;
        case 1:
            func_0203e5e8(arg0, 0x48E);
            return;
    }
}
