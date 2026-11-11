/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020ebbbc(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020e6aec(s32 arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C60);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_020eb9fc(2, 0xB, 0);
            func_020eb9fc(2, 0xC, 1);
            func_020eb9fc(2, 0xD, 0);
            break;
        case 1:
            func_020eb9fc(2, 0xB, 0);
            func_020eb9fc(2, 0xC, 0);
            func_020eb9fc(2, 0xD, 1);
            break;
        case 2:
            func_020eb9fc(2, 0xB, 1);
            func_020eb9fc(2, 0xC, 0);
            func_020eb9fc(2, 0xD, 0);
            break;
    }
    func_020ebbbc(2, 0xB, 3);
    func_020ebbbc(2, 0xC, 3);
    func_020ebbbc(2, 0xD, 3);
}
