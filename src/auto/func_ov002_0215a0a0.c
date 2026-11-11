/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov002_0215a38c(void);
void func_02003de8(s32);
s32 func_0200412c(void);
s32 func_ov002_0215a0f4(void);
void func_02003fa4(void);
void func_0207cb18(void);
void func_02003eec(void);
void func_020075a4(void);
void func_020c7740(void);
void func_02004270(void);
extern s32 data_ov002_0215a8e0;

s32 func_ov002_0215a0a0(void) {
    s32 r;

    func_ov002_0215a38c();
    func_02003de8(0x1E);
    do {
        func_0200412c();
        r = func_ov002_0215a0f4();
        func_02003fa4();
        func_0207cb18();
        func_02003eec();
    } while (r != 0);
    func_020075a4();
    func_020c7740();
    func_02004270();
    {
        s32 *p = &data_ov002_0215a8e0;
        *p     = 0;
    }
    return 0;
}
