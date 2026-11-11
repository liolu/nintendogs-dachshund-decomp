/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Tri;

s32 func_02035424(void *, s32);
s32 func_02035450(void *, s32);
s32 func_0203535c(void *);
s32 func_02106ef0(void);
void func_0202afa0(void *, Tri *);
void func_0202fa18(void *);
void func_021058ac(s32);
void func_0203e5ac(void *, s32, s32);
extern s32 *data_0214da84;

void func_ov004_02163698(u8 *arg0) {
    Tri sp0;
    u16 t;

    *(s32 *) (arg0 + 0x484) = 0;
    *(s32 *) (arg0 + 0x2A0) = *(s32 *) (arg0 + 0x2A0) - *(s32 *) (arg0 + 0x484);
    *(s32 *) (arg0 + 0x3F0) = *(s32 *) (arg0 + 0x3F0) - *(s32 *) (arg0 + 0x484);
    *(s32 *) (arg0 + 0x3FC) = *(s32 *) (arg0 + 0x3FC) - *(s32 *) (arg0 + 0x484);
    *(s32 *) (arg0 + 0x488) = *(s32 *) (arg0 + 0x488) + 1;
    if (func_02106ef0() != 0) {
        func_021058ac(*(s32 *) (arg0 + 0x484));
    }
    sp0 = *(Tri *) (arg0 + 0x490);
    if (func_02035450(arg0, 0xC) != 0 && func_02035424(arg0, 0x12) != 0) {
        s32 m;
        s32 nv;
        m              = *data_0214da84 * 0x10DCD;
        nv             = m + 1;
        *data_0214da84 = nv;
        t              = (u16) nv;
        if ((u16) (((u32) t * 0xB4) >> 0x10) == 0) {
            func_0202afa0(arg0, &sp0);
            return;
        }
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0203e5ac(arg0, 0, 0x138);
    func_0202fa18(arg0);
}
