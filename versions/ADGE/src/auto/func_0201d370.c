/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02025538(M2C_UNK);
void func_02026c14(M2C_UNK);

extern void *data_02159e70;

void func_0201d370(s32 arg0) {
    s32 var_r2;

    M2C_FIELD(arg0, s16 *, 0x152) = 0;
    func_02026c14(arg0);
    func_02025538(arg0);
    var_r2 = -1;
    if (M2C_FIELD(data_02159e70, s32 *, 0xB8) == 0x1D) {
        var_r2 = M2C_FIELD(data_02159e70, s32 *, 0xE0);
    }
    switch (var_r2) {                               /* irregular */
        case 2:
            M2C_FIELD(arg0, s32 *, 0x464) = 3;
            return;
        case 0:
            M2C_FIELD(arg0, s32 *, 0x464) = 1;
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x464) = 2;
            return;
    }
}
