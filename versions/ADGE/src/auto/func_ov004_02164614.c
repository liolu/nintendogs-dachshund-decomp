/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} T12;

s32 func_02028114();

void func_0202507c(void *, s32, s32, s32);
void func_02024d30(void *, s32, s32, s32);
s32 func_02106ef0(void);
void func_021058ac(s32);
void func_ov004_02168094(void *);
s32 func_0203535c(void *);
void func_0203e5e8(void *, s16);

void func_ov004_02164614(u8 *arg0) {
    s64 pq;
    s32 ret;
    s32 val;
    s32 ret2;

    ret = func_02028114();
    pq  = (s64) ret * 0x9d + 0x800;
    val = (s32) (pq >> 12);
    func_0202507c(arg0, 0xe, 0x28, val);
    ret2 = func_02028114(arg0);
    pq   = (s64) ret2 * -0x44 + 0x800;
    val  = (s32) (pq >> 12);
    func_02024d30(arg0, 0x11, 0x23, -val);
    *(s32 *) (arg0 + 0x484) = 0;
    *(s32 *) (arg0 + 0x2a0) = *(s32 *) (arg0 + 0x2a0) - *(s32 *) (arg0 + 0x484);
    *(s32 *) (arg0 + 0x3f0) = *(s32 *) (arg0 + 0x3f0) - *(s32 *) (arg0 + 0x484);
    *(s32 *) (arg0 + 0x3fc) = *(s32 *) (arg0 + 0x3fc) - *(s32 *) (arg0 + 0x484);
    *(s32 *) (arg0 + 0x488) = *(s32 *) (arg0 + 0x488) + 1;
    if (func_02106ef0() != 0) {
        func_021058ac(*(s32 *) (arg0 + 0x484));
    }
    func_ov004_02168094(arg0);
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0203e5e8(arg0, 0x484);
}
