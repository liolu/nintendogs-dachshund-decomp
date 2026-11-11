/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} T12;

extern void *data_0214da80;

s32 func_0203547c(void *, s32);
s32 func_02028114(void *);
s32 func_02035450(void *, s32);
void func_020447ac(void *);
void func_021145d8(void *, void *, void *, void *);
void func_02037130(void *, s32);
void func_02022b6c(void *);
s32 func_0203535c(void *);
void func_ov003_02177c58(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

void func_ov003_02176ac4(u8 *arg0) {
    T12 buf;
    s64 pq;
    s32 ret;
    s32 val;
    s32 r5;
    s32 ret0;

    if (func_0203547c(arg0, 0x12) != 0) {
        ret                     = func_02028114(arg0);
        pq                      = (s64) ret * (-0x6d) + 0x800;
        val                     = (s32) (pq >> 12);
        *(s32 *) (arg0 + 0x25c) = val;
        *(s32 *) (arg0 + 0x264) = *(s32 *) (arg0 + 0x25c) * -15;
    }
    r5 = func_02035450(arg0, 0x30);
    func_020447ac(&buf);
    func_021145d8(data_0214da80, arg0 + 0x26c, arg0 + 0x2dc, &buf);
    *(T12 *) (arg0 + 0x278) = *(T12 *) (arg0 + 0x26c);
    *(T12 *) (arg0 + 0x3b4) = *(T12 *) (arg0 + 0x26c);
    func_02037130(arg0, 0x300);
    func_02022b6c(arg0);
    ret0 = func_0203535c(arg0);
    func_ov003_02177c58(arg0, 0, 0, 1, 1, r5, 0, ret0, 0x30, 0, 3, 0);
}
