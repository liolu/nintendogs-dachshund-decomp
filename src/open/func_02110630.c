#include "m2c.h"
s64 func_02080d64();
void func_02080df4();
s32 func_020ce5fc();
void func_020ce618();
void func_020ce1a0();
extern s8 data_0213aa2d[];
void func_02110630(void) {
    s8 local[8];
    s64 v;
    s32 r4;
    v = func_02080d64();
    func_02080df4(&local, (s32) (v >> 32));
    r4 = func_020ce5fc();
    func_020ce618();
    func_020ce618();
    func_020ce1a0(r4, 0, 2, &local, v);
}
