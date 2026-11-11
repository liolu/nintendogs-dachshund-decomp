/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200f86c(void *);
void func_02024de8(void *, s32, s32);
s32 func_020280ec(void *);
s32 func_020351a0(void *);
void func_020392c8(void *);
void func_0203e2b8(void *, s32);

void func_ov002_021798a4(void *arg0) {
    s32 temp_r0;
    s64 prod;

    temp_r0 = func_020280ec(arg0);
    prod    = (s64) temp_r0 * 0x5DLL + 0x800LL;
    func_02024de8(arg0, 0xB, -(s32) ((u64) prod >> 12));
    func_020392c8(arg0);
    if (func_0200f86c(arg0) != 0) {
        return;
    }
    if (func_020351a0(arg0) == 0) {
        return;
    }
    func_0203e2b8(arg0, 0x354);
}
