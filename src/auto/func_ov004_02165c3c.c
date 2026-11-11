/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0202517c(void *, s32, s32);
s32 func_02028114(void *);
s32 func_02035424(void *, s32);
void func_ov004_02165d10(void *, s32);

void func_ov004_02165c3c(void *arg0) {
    s8 *b;
    s32 r4;
    s32 t;
    s64 p;

    b = (s8 *) arg0;
    if (b[0xA0] == 0) {
        r4 = 0x100;
    } else if (func_02035424(arg0, 0xA) != 0) {
        r4 = 0x112;
    } else {
        r4 = 0x100;
    }
    t = func_02028114(arg0);
    p = (s64) t * 0x500 + 0x800;
    if (func_0202517c(arg0, 0x12, (s32) (p >> 12)) == 0) {
        t = func_02028114(arg0);
        p = (s64) t * 0x140 + 0x800;
        func_0202517c(arg0, 0x22, (s32) (p >> 12));
    }
    func_ov004_02165d10(arg0, r4);
}
