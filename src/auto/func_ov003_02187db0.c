/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct w3 {
    s32 a;
    s32 b;
    s32 c;
};

extern s32 data_0214da80;
extern s32 data_02150e58[];
extern void *data_0215a064;

void func_02114658(s32, void *, void *);
void func_0206823c(void *, void *, void *);
void func_01ff832c(s32, void *, void *, void *);
s32 func_020681f8(void *, void *);
void func_ov003_02188bb0(u8 *, s32, s32, void *, s32, s32);

void func_ov003_02187db0(u8 *arg0) {
    s32 a[3];
    s32 b[3];
    s32 c[3];
    s32 r;

    a[0] = *(s32 *) ((u8 *) data_02150e58 + 0x4C);
    a[1] = *(s32 *) ((u8 *) data_02150e58 + 0x58);
    a[2] = *(s32 *) ((u8 *) data_02150e58 + 0x64);
    func_02114658(data_0214da80, b, arg0 + 0x2C4);
    func_0206823c(b, arg0 + 0x2C4, b);
    *(struct w3 *) c = *(struct w3 *) (*(u8 **) ((u8 *) data_0215a064 + 0x1C) + 0x30);
    func_01ff832c(0x3000, b, c, arg0 + 0x3B4);
    *(s32 *) (arg0 + 0x3B8) += 0xA000;
    r = func_020681f8(b, a);
    if (r > 0) {
        *(u16 *) (arg0 + 0x100 + 0x2E) = 0x1000;
    } else {
        *(u16 *) (arg0 + 0x100 + 0x2E) = 0xF000;
    }
    func_ov003_02188bb0(arg0, 4, 0x1F, arg0 + 0x348, 0x14D2, 2);
}
