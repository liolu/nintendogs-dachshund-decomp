/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} T12;

extern void *data_0214da80;
extern u8 *data_0215a064;
extern s32 *data_0214da84;

void func_02114690(void *, void *);
s32 func_02028120(void *);
void func_01ff832c(s32, void *, void *, void *);
void func_ov005_0215e51c(void *, s32);

void func_ov005_0215de54(u8 *arg0) {
    u8 *q;
    s32 seed;
    u32 t;
    s32 v;

    func_02114690(data_0214da80, arg0 + 0x3b4);
    if ((*(u16 *) (data_0215a064 + 0x84) & 1) == 0) {
        *(u16 *) (arg0 + 0x11a) = *(u16 *) (arg0 + 0x11a) + 1;
    } else {
        *(u16 *) (arg0 + 0x11a) = 0;
    }
    *(u16 *) (arg0 + 0x11c) = 1;
    *(u16 *) (arg0 + 0x11e) = 0;
    *(s32 *) (arg0 + 0x488) = *(s32 *) (arg0 + 0x488) + 1;
    seed                    = *data_0214da84 * 0x10dcd + 1;
    *data_0214da84          = seed;
    t                       = (u16) (((u32) (u16) seed * 0x12c) >> 16);
    if (t == 0) {
        *(s32 *) (arg0 + 0x464) = 1 - *(s32 *) (arg0 + 0x464);
    }
    if (*(s32 *) (arg0 + 0x464) == 0) {
        v = func_02028120(arg0);
        func_01ff832c(v << 2, arg0 + 0x1a4, arg0 + 0x2a0, arg0 + 0x3b4);
    } else {
        q                       = *(u8 **) (data_0215a064 + 0x1c);
        *(T12 *) (arg0 + 0x3b4) = *(T12 *) (q + 0x30);
    }
    func_ov005_0215e51c(arg0, 2);
}
