/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020afbc4(void);
void func_020f8ef0(M2C_UNK);

void func_020f8eac(s32 arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x90);
    switch (temp_r1) {
        case 2:
            func_020afbc4();
            return;
        case 1:
            func_020f8ef0(arg0);
            return;
    }
}
