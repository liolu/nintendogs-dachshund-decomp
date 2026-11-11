/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

s32 func_02035424(u8 *, s32);
void func_020390b8(u8 *, s32);
s32 func_02106ef0(void);
void func_021058ac(s32);
s32 func_02035450(u8 *, s32);
void func_0202afa0(u8 *, Triple *);
s32 func_0203535c(u8 *);
void func_0203e5ac(u8 *, s32, s32);
void func_0202fa18(u8 *);
extern s32 *data_0214da84;

void func_ov004_02163548(u8 *arg0) {
    Triple tmp;
    s32 *p;
    s32 nv;
    u16 t;
    u32 q;

    if (func_02035424(arg0, 0x12)) {
        func_020390b8(arg0, 0x100);
    }
    *(s32 *) (arg0 + 0x484) = 0;
    *(s32 *) (arg0 + 0x2a0) = *(s32 *) (arg0 + 0x2a0) - *(s32 *) (arg0 + 0x484);
    *(s32 *) (arg0 + 0x3f0) = *(s32 *) (arg0 + 0x3f0) - *(s32 *) (arg0 + 0x484);
    *(s32 *) (arg0 + 0x3fc) = *(s32 *) (arg0 + 0x3fc) - *(s32 *) (arg0 + 0x484);
    *(s32 *) (arg0 + 0x488) = *(s32 *) (arg0 + 0x488) + 1;
    if (func_02106ef0()) {
        func_021058ac(*(s32 *) (arg0 + 0x484));
    }
    tmp = *(Triple *) (arg0 + 0x490);
    if (func_02035450(arg0, 0xc)) {
        if (func_02035424(arg0, 0x12)) {
            p  = data_0214da84;
            nv = *p * 0x10dcd + 1;
            t  = (u16) nv;
            q  = ((u32) t * 0xb4) >> 16;
            *p = nv;
            if ((u16) q == 0) {
                func_0202afa0(arg0, &tmp);
                return;
            }
        }
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0203e5ac(arg0, 0, 0x138);
    func_0202fa18(arg0);
}
