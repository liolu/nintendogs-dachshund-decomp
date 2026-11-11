/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_021077d8(M2C_UNK);
void func_021077e8(M2C_UNK);

void func_020dcc68(s32 arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x90);
    switch (temp_r1) {
        case 3:
            M2C_FIELD(arg0, s16 *, 0xA6) = 1;
            M2C_FIELD(arg0, s32 *, 0xA8) = 0;
            return;
        case 0:
            func_021077d8(arg0);
            return;
        case 2:
            func_021077e8(arg0);
            return;
    }
}
