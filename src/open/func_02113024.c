#include "m2c.h"
void func_02005e08(void *);
void func_020d4660(void *);
s32 func_0200562c(s32, void *);
void func_020055a4(s32, s32, s32, s32, s32, s32, s32);
void func_020d45fc(s32);
extern s32 *data_0215a050;
s32 *func_020038a8(s32 arg0, s32 arg1);
s32 func_02113024(s32 arg0) {
    s16 local[22];
    s32 ret;

    func_02005e08(local);
    local[1] = 4;
    local[2] = 4;
    local[3] = 1;
    local[4] = 0;
    local[5] = 0;
    local[6] = 0;
    func_020d4660(local);
    local[7] = 3;
    local[14] = 4;
    local[8] = 0x40;
    ret = func_0200562c(arg0, local);
    func_020055a4(ret + 0x2C, 3, 0, 0, 0, 6, 1);
    func_020055a4(ret + 0x78, 3, 0, 0, 0, 6, 1);
    func_020d45fc(ret);
    return ret;
}
