/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} Triple;

extern u8 *data_0215a064;
s32 func_02028114(void *);
void func_0202507c(void *, s32, s32, s32);
void func_02039128(void *);
void func_02037130(void *, s32);
s32 func_0203535c(void *);
void func_0202f9a0(void *);

void func_ov003_0217a53c(void *arg0) {
    s32 t0;
    s64 v;
    u8 *g;

    t0 = func_02028114(arg0);
    v  = (s64) t0 * 0x117 + 0x800;
    func_0202507c(arg0, 0x10, 0x26, (u32) (v >> 12));
    func_02039128(arg0);
    g                                 = *(u8 **) (data_0215a064 + 0x1C);
    *(Triple *) ((u8 *) arg0 + 0x278) = *(Triple *) (g + 0x30);
    *(Triple *) ((u8 *) arg0 + 0x3B4) = *(Triple *) ((u8 *) arg0 + 0x278);
    func_02037130(arg0, 0x300);
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0202f9a0(arg0);
}
