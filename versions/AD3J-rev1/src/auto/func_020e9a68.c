/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_01ffda04(M2C_UNK);
M2C_UNK func_02027508(M2C_UNK);
void func_020ed7a0(M2C_UNK, M2C_UNK);
void func_020ee5d8(M2C_UNK, M2C_UNK);
void func_020ef588(M2C_UNK, M2C_UNK);
void func_020f0a90(M2C_UNK);

extern s32 data_0214b484;
extern M2C_UNK data_02154cb8;
extern M2C_UNK data_02154dd8;

void func_020e9a68(s32 arg0) {
    s32 temp_r0;
    s32 var_r5;

    if (data_0214b484 != 0) {
        var_r5 = 0;
    loop_2:
        temp_r0 = func_01ffda04(var_r5);
        if (temp_r0 != 0) {
            M2C_FIELD(&data_02154dd8, s16 *, 0x20) = (s16) M2C_FIELD((void *) func_02027508(temp_r0), s16 *, 0xC);
            M2C_FIELD(&data_02154cb8, s16 *, 0x24) = (s16) var_r5;
        } else {
            var_r5 = (s32) (s16) (var_r5 + 1);
            if (var_r5 < 3) {
                goto loop_2;
            }
        }
    }
    M2C_FIELD(&data_02154dd8, u16 *, 0x10) = (u16) M2C_FIELD(&data_02154dd8, u16 *, 0xE);
    func_020ee5d8(0, arg0);
    func_020ed7a0(0, arg0);
    func_020ef588(0, arg0);
    func_020f0a90(arg0);
    M2C_FIELD(&data_02154cb8, s32 *, 0x1C) = 1;
}
