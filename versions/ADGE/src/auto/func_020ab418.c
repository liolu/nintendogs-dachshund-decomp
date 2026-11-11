/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020ab454(M2C_UNK);

void func_020ab418(s32 arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x90);
    switch (temp_r1) {                              /* irregular */
        case 0:
            return;
        case 1:
            func_020ab454(arg0);
            return;
    }
}
