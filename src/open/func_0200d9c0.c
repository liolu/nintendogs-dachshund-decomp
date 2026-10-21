#include "m2c.h"
extern s32 *data_0214da84;
void func_0200da50(int, int, int);
void func_0200d9c0(s32 arg0) {
    s32 next1;
    s32 next2;
    u32 hi1;
    u32 hi2;

    next1 = *data_0214da84 * 0x10DCD + 1;
    *data_0214da84 = next1;
    next2 = *data_0214da84 * 0x10DCD + 1;
    hi2 = (u32) (u16) next2 * 0xC8 >> 16;
    hi1 = (u32) (u16) next1 * 0xC8 >> 16;
    *data_0214da84 = next2;
    func_0200da50(arg0, (u16) hi2 == 0, (u16) hi1 == 0);
}
