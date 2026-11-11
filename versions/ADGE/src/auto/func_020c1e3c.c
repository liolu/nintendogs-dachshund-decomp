/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020a5dcc(void);
M2C_UNK func_020b29bc(M2C_UNK);
void func_020b2ea8(M2C_UNK, M2C_UNK);
void func_020b300c(M2C_UNK, M2C_UNK);
void func_020ba364(M2C_UNK, M2C_UNK);

void func_020c1e3c(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_020b29bc(-1);
    if (func_020a5dcc() == 0x11) {
        func_020b300c(arg0, temp_r4);
    } else if (func_020a5dcc() == 0x12) {
        func_020b2ea8(arg0, temp_r4);
    }
    func_020ba364(arg0, arg1);
}
