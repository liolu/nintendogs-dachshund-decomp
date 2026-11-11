/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02080c28(void);
void func_02080c3c(M2C_UNK);

extern s32 data_02156fa0;
extern s32 data_02156fa4;

void func_020c5858(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_02080c28();
    if (data_02156fa4 == 0) {
        data_02156fa4 = arg0;
        data_02156fa0 = arg0;
    } else {
        *(M2C_UNK *) data_02156fa4 = arg0;
        data_02156fa4              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
    func_02080c3c(temp_r0);
}
