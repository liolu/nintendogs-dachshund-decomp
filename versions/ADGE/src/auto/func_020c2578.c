/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020b29bc(M2C_UNK);
void func_020b95c4(M2C_UNK);
void func_020b95d0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020c2578(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 0:
            func_020b95d0(arg0, 0x18, -1, 0);
            func_020b95c4(arg0);
            return;
        case 1:
            func_020b95d0(arg0, 4, func_020b29bc(-1), 0);
            func_020b95c4(arg0);
            return;
        case 2:
            func_020b95d0(arg0, 0x10, -1, 0);
            func_020b95c4(arg0);
            return;
    }
}
