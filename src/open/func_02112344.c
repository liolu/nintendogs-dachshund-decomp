#include "m2c.h"
M2C_UNK func_02002fc0();
M2C_UNK func_02002e60();
void func_02111634(s32 arg0, s32 arg1);
void func_021115ec(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_021116b4(s32 arg0, s32 arg1, s32 arg2);
void func_02111580(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern M2C_UNK func_0210e4f0;
s32 func_02112344(void) {
    u8 sp0[0x1c];
    u8 sp1c[0xc];
    u8 sp28[0x40];
    s32 ret;

    ret = -1;
    func_02111634((s32) sp1c, 3);
    func_02002fc0(sp0, &func_0210e4f0);
    func_02002e60(sp0, sp1c);
    if (*(s16 *) (sp1c + 6) >= 0) {
        ret = *(s16 *) (sp1c + 6);
        func_021115ec(3, 2, *(s16 *) (sp1c + 8), *(s16 *) (sp1c + 6));
        func_02002fc0(sp0, &func_0210e4f0);
        func_02002e60(sp0, 0);
        func_021116b4((s32) sp28, *(s16 *) (sp1c + 6), *(s16 *) (sp1c + 8));
        func_02002fc0(sp0, &func_0210e4f0);
        func_02002e60(sp0, sp28);
        func_02111580(*(s16 *) (sp1c + 6), 2, *(s16 *) (sp1c + 8), 3);
        func_02002fc0(sp0, &func_0210e4f0);
        func_02002e60(sp0, sp28);
    }
    return ret;
}
