/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02035264(void *, s32);
void func_0203e5ac(void *, s32, s16);
s32 func_0202df7c(void *);
void func_02122f74(s32);
void func_02122cf8(s32, s32);
void func_02028fd4(void *, s32, s32);
void func_0203e5e8(void *, s32);

void func_ov003_0216fb78(void *arg0) {
    if (func_02035264(arg0, 1) != 0) {
        func_0203e5ac(arg0, 1, 0);
    }
    if (M2C_FIELD(arg0, u16 *, 0xFC) <= 0x64) {
        return;
    }
    if (func_0202df7c(arg0) != 0) {
        func_02122f74(3);
    }
    func_02122cf8(M2C_FIELD(arg0, s8 *, 0x88), M2C_FIELD(arg0, s16 *, 0xF6));
    func_02028fd4(arg0, 0x57, 1);
    func_0203e5e8(arg0, 0xED);
}
