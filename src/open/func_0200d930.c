#include "m2c.h"
extern s32 *data_0214da84;
void func_0200da50(void *, s32, s32);
void func_0200d930(void *arg0) {
    s32 temp_r1;
    s32 temp_r2;
    u16 var_r1;
    u16 var_r2;

    temp_r1 = (*data_0214da84 * 0x10DCD) + 1;
    *data_0214da84 = temp_r1;
    temp_r2 = (*data_0214da84 * 0x10DCD) + 1;
    *data_0214da84 = temp_r2;
    var_r1 = (u16) (((u32) (u16) temp_r2 * 0xC8) >> 0x10);
    var_r2 = (u16) (((u32) (u16) temp_r1 * 0xC8) >> 0x10);
    func_0200da50(arg0, var_r1 == 0, var_r2 == 0);
}
