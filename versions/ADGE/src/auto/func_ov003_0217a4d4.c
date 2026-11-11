/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Vec3;

extern u8 *data_0215a064;
void func_02039128(void *);
void func_02037130(void *, s32);
s32 func_0203535c(void *);
void func_0202f9a0(void *);

void func_ov003_0217a4d4(void *arg0) {
    u8 *p = (u8 *) arg0;
    u8 *src;

    func_02039128(arg0);
    src                   = *(u8 **) (data_0215a064 + 0x1C) + 0x30;
    *(Vec3 *) (p + 0x278) = *(Vec3 *) src;
    *(Vec3 *) (p + 0x3B4) = *(Vec3 *) (p + 0x278);
    func_02037130(arg0, 0x300);
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0202f9a0(arg0);
}
