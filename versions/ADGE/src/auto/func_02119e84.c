/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02119ed8(void);

void func_02119e84(s32 arg0) {
    u16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u16 *, 4);
    switch (temp_r1) {                              /* irregular */
        case 0x0:
            M2C_FIELD(arg0, u16 *, 4) = 0x200U;
            M2C_FIELD(arg0, s16 *, 6) = 0;
            return;
        case 0x200:
            func_02119ed8();
            return;
    }
}
