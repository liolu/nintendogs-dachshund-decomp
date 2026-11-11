/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Tri {
    u32 a;
    u32 b;
    u32 c;
} Tri;

s32 func_02035450(void *, s32);
s32 func_0202f9b4(void *);
void func_02027644(s32, void *);
void func_0203910c(void *);
void func_02037130(void *, s32);
s32 func_ov004_02169ec8(void *, s32);
void func_0203e5e8(void *, s32);

void func_ov004_02169c24(void *arg0) {
    s32 r5;
    s32 r4;

    r5 = func_02035450(arg0, 0x2D);
    r4 = func_0202f9b4(arg0);
    if (r4 != 0) {
        func_02027644(r4, (u8 *) arg0 + 0x26C);
        *(Tri *) ((u8 *) arg0 + 0x3B4) = *(Tri *) ((u8 *) arg0 + 0x26C);
        func_0203910c(arg0);
        func_02037130(arg0, 0x300);
    }
    if (func_ov004_02169ec8(arg0, r4) != 0) {
        return;
    }
    if (r5 == 0) {
        return;
    }
    func_0203e5e8(arg0, 0x4A3);
}
