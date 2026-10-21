#include "m2c.h"
extern s32 data_0214f574;
void func_0206f850(s32 arg0, s32 arg1, s32 arg2) {
    s32 buffer[0x27];
    s32 enabled;
    s32 i;
    u8 *p;

    enabled = func_02080c28();
    if (data_0214f574 == 1) {
        func_02080c3c(enabled);
        return;
    }
    data_0214f574 = 1;
    func_02070008(0);
    func_02070054(0);
    p = (u8 *) func_02070118();
    *(s32 *) (p + 0x0) = 0;
    *(u16 *) (p + 0x8) = 0;
    *(u16 *) (p + 0xa) = 0;
    *(s32 *) (p + 0x10) = 0;
    *(s32 *) (p + 0x138) = 0;
    *(u16 *) (p + 0x140) = 0;
    *(u16 *) (p + 0x142) = 0;
    *(s32 *) (p + 0x148) = arg2;
    for (i = 0; i < 0x10; i++) {
        p[0x1d7] = 0;
        p += 0x68;
    }
    buffer[0] = 0;
    func_02070074(buffer);
    func_02070164();
    func_02070124(arg0 - 0xE);
    func_02070134(arg1 - 0xE);
    func_02080c3c(enabled);
}
