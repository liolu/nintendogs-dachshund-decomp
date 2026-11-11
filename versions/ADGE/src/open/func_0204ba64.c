#include "m2c.h"
void *func_02036258(void);
void func_0203e5ac(s32, s32, s32);
void func_0204d5d4(s32, void *);
void func_0204bb68(s32, void *, s32);
extern s32 *data_0214da84;
void func_0204ba64(s32 arg0) {
    s16 *temp_r0;
    s32 temp_r1;
    s32 var;

    temp_r0 = (s16 *) func_02036258();
    if (temp_r0 != 0) {
        var = ((temp_r0[0x75] == 0x279) && (M2C_FIELD(temp_r0, s32 *, 0x464) != 0));
        if (var != 0) {
            temp_r1        = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp_r1;
            switch ((u16) (((u32) (u16) temp_r1 * 0x78) >> 0x10)) {
                case 0:
                    func_0203e5ac(arg0, 0, 0);
                    break;
                case 1:
                    func_0203e5ac(arg0, 0, 0x1A8);
                    break;
                case 2:
                    func_0203e5ac(arg0, 0, 0x1A9);
                    break;
            }
        }
    }
    func_0204d5d4(arg0, temp_r0);
    func_0204bb68(arg0, temp_r0, 1);
}
