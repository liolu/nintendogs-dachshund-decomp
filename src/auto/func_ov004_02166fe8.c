/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} Tri;
s32 func_02028114(void *);
s32 func_02035450(void *, s32);
s32 func_0203547c(void *, s32);
void func_02037130(void *, s32);
void func_02037ed0(void *);
void func_0203910c(void *);
void func_0203e5e8(void *, s32);
void func_021058ac(s32);
s32 func_02106ef0(void);
void func_ov004_02168094(void *);
void func_ov004_0216a5a4(void *);

void func_ov004_02166fe8(void *arg0) {
    s32 t;
    s64 p;
    Tri tmp;

    if (func_0203547c(arg0, 0xA) != 0) {
        t                              = func_02028114(arg0);
        p                              = (s64) t * -0x30 + 0x800;
        *(s32 *) ((u8 *) arg0 + 0x25C) = (s32) (p >> 12);
        *(s32 *) ((u8 *) arg0 + 0x264) = *(s32 *) ((u8 *) arg0 + 0x25C) * -0xE;
    }
    *(s32 *) ((u8 *) arg0 + 0x2A0) = *(s32 *) ((u8 *) arg0 + 0x2A0) - *(s32 *) ((u8 *) arg0 + 0x484);
    *(s32 *) ((u8 *) arg0 + 0x26C) = *(s32 *) ((u8 *) arg0 + 0x26C) - *(s32 *) ((u8 *) arg0 + 0x484);
    *(s32 *) ((u8 *) arg0 + 0x3F0) = *(s32 *) ((u8 *) arg0 + 0x3F0) - *(s32 *) ((u8 *) arg0 + 0x484);
    *(s32 *) ((u8 *) arg0 + 0x3FC) = *(s32 *) ((u8 *) arg0 + 0x3FC) - *(s32 *) ((u8 *) arg0 + 0x484);
    *(s32 *) ((u8 *) arg0 + 0x488) = *(s32 *) ((u8 *) arg0 + 0x488) + 1;
    if (func_02106ef0() != 0) {
        func_021058ac(*(s32 *) ((u8 *) arg0 + 0x484));
    }
    tmp                            = *(Tri *) ((u8 *) arg0 + 0x2A0);
    *(Tri *) ((u8 *) arg0 + 0x26C) = tmp;
    *(s32 *) ((u8 *) arg0 + 0x26C) = *(s32 *) ((u8 *) arg0 + 0x26C) + 0x64000;
    func_0203910c(arg0);
    func_02037130(arg0, 0x300);
    func_02037ed0(arg0);
    func_ov004_02168094(arg0);
    if (func_02035450(arg0, 0x2F) == 0) {
        return;
    }
    func_ov004_0216a5a4(arg0);
    func_0203e5e8(arg0, 0x4B8);
}
