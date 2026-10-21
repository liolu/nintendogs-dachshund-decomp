#include "m2c.h"
s32 func_02022e04(s32, s32);
void func_02029248(s32);
void func_0200ccc4(s32);
void func_0203e5e8(s32, s32);
void func_0200cb28(s32 arg0) {
    if (*(s16 *) (arg0 + 0xF0) != 0x6F && func_02022e04(arg0, 0x46) == 0 &&
        func_02022e04(arg0, 0x4D) == 0) {
        func_02029248(arg0);
    }
    func_0200ccc4(arg0);
    if (*(u16 *) (arg0 + 0xFC) < 0x50) {
        if (*(s8 *) (arg0 + 0xA0) != 0) {
            return;
        }
        if (*(s8 *) (arg0 + 0xA1) != 0) {
            return;
        }
    }
    func_0203e5e8(arg0, 0x47D);
}
