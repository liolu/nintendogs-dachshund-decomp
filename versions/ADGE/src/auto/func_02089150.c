/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_01ffdb08(M2C_UNK);
M2C_UNK func_02027530(M2C_UNK);
void func_0208cf5c(M2C_UNK, M2C_UNK);
void func_0208dd94(M2C_UNK, M2C_UNK);
void func_0208ed44(M2C_UNK, M2C_UNK);
void func_020902d0(M2C_UNK);

extern s32 data_0214da84;
extern M2C_UNK data_0215422c;
extern M2C_UNK data_02154350;

void func_02089150(s32 arg0) {
    s32 temp_r0;
    s32 var_r5;

    if (data_0214da84 != 0) {
        var_r5 = 0;
    loop_2:
        temp_r0 = func_01ffdb08(var_r5);
        if (temp_r0 != 0) {
            M2C_FIELD(&data_02154350, s16 *, 0x20) = (s16) M2C_FIELD((void *) func_02027530(temp_r0), s16 *, 0xC);
            M2C_FIELD(&data_0215422c, s16 *, 0x24) = (s16) var_r5;
        } else {
            var_r5 = (s32) (s16) (var_r5 + 1);
            if (var_r5 < 3) {
                goto loop_2;
            }
        }
    }
    M2C_FIELD(&data_02154350, u16 *, 0x10) = (u16) M2C_FIELD(&data_02154350, u16 *, 0xE);
    func_0208dd94(0, arg0);
    func_0208cf5c(0, arg0);
    func_0208ed44(0, arg0);
    func_020902d0(arg0);
    M2C_FIELD(&data_0215422c, s32 *, 0x1C) = 1;
}
