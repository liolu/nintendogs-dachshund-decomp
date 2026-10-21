#include "m2c.h"
extern void *data_02159e70;
void func_020d91cc(s32 arg0) {
    s32 r2 = 0;

    if (M2C_FIELD(data_02159e70, s32 *, 0xAC) != 2) {
        return;
    }
    switch (M2C_FIELD(arg0, s32 *, 0x94C)) {
    case 4:
    case 5:
    case 6:
        r2 = 1;
        break;
    }
    func_020d6068(2, 8, r2);
}
