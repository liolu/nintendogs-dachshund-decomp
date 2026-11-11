/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_021006f4(M2C_UNK);
void func_021008e0(M2C_UNK);

void func_0210069c(s32 arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x90);
    switch (temp_r1) {
        case 0:
            return;
        case 2:
            func_021008e0(arg0);
            return;
        case 3:
            func_021006f4(arg0);
            return;
    }
}
