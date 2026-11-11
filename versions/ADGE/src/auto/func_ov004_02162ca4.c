/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} T12;

s32 func_0203535c(void *);
void func_02037130(void *, s32);
void func_02039128(void *);
void func_0203e5e8(void *, s16);
void func_02068270(void *, void *, void *);
void func_021058ac(s32);
s32 func_02106ef0(void);
extern s32 *data_0214da84;

void func_ov004_02162ca4(u8 *arg0) {
    T12 t;
    s32 seed;
    u32 m;
    s16 v;

    *(s32 *) (arg0 + 0x484) = 0;
    *(s32 *) (arg0 + 0x2a0) = *(s32 *) (arg0 + 0x2a0) - *(s32 *) (arg0 + 0x484);
    *(s32 *) (arg0 + 0x3f0) = *(s32 *) (arg0 + 0x3f0) - *(s32 *) (arg0 + 0x484);
    *(s32 *) (arg0 + 0x3fc) = *(s32 *) (arg0 + 0x3fc) - *(s32 *) (arg0 + 0x484);
    *(s32 *) (arg0 + 0x488) = *(s32 *) (arg0 + 0x488) + 1;
    if (func_02106ef0() != 0) {
        func_021058ac(*(s32 *) (arg0 + 0x484));
    }
    t = *(T12 *) (arg0 + 0x490);
    func_02039128(arg0);
    func_02068270(arg0 + 0x2a0, &t, arg0 + 0x278);
    func_02037130(arg0, 0x300);
    if (func_0203535c(arg0) == 0) {
        return;
    }
    seed           = *data_0214da84 * 0x10dcd + 1;
    *data_0214da84 = seed;
    m              = (u16) seed * 3;
    v              = (s16) (0x499 + (u16) (m >> 16));
    func_0203e5e8(arg0, v);
}
