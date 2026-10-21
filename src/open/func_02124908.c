#include "m2c.h"
#include "engine.h"
M2C_UNK func_02116cb4(M2C_UNK);
M2C_UNK func_02116da0(M2C_UNK);
void func_02116f14(M2C_UNK);
extern u8 data_0212c174[];
void func_02124908(s32 arg0) {
    switch (*(s16 *) (arg0 + 0x2e)) {
    case 0:
        func_02116da0(arg0);
        return;
    case 1:
    case 2:
    case 3:
        break;
    case 4:
        if (func_02116cb4(arg0) == 0) {
            return;
        }
        func_02116f14(arg0);
        return;
    }
}
