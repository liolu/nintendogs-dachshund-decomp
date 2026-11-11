#include "m2c.h"
extern s32 data_0213ec38;
extern s32 data_0213ec3c;
void func_020b2a54(s32 arg0, s32 *arg1) {
    s32 local[4];
    s32 m;
    s32 r;

    func_02027658(arg0, arg1);
    func_02027680(arg0, local);
    m = data_0213ec38;
    r = func_02028120(arg0);
    arg1[1] += (s32) (((s64) r * m + 0x800) >> 12);
    m = data_0213ec3c;
    r = func_02028120(arg0);
    func_01ff832c((s32) (((s64) r * m + 0x800) >> 12), local, arg1, arg1);
}
