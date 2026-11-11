/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020ec028(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020ec050(M2C_UNK, M2C_UNK);

extern void *data_02159e70;

void func_020d8fd0(void) {
    s32 var_r6;

    if (M2C_FIELD(data_02159e70, s32 *, 0xB8) != 7) {
        return;
    }
    var_r6 = 0;
    do {
        func_020ec028(2, var_r6 + 7, func_020ec050(2, 0xE));
        var_r6 += 1;
    } while (var_r6 < 6);
    M2C_FIELD(data_02159e70, s32 *, 0xA10) = 0;
}
