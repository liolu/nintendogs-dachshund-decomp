/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0211cf24(M2C_UNK);

void func_0211ced0(s32 arg0) {
    u16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u16 *, 4);
    switch (temp_r1) {                              /* irregular */
        case 0x0:
            M2C_FIELD(arg0, u16 *, 4) = 0xB00U;
            M2C_FIELD(arg0, s16 *, 6) = 0;
            return;
        case 0xB00:
            func_0211cf24(arg0);
            return;
    }
}
