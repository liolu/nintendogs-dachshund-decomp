/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0208120c(void);
void func_02081220(M2C_UNK);

extern s32 data_0214b9f0;
extern s32 data_0214b9f4;

void func_020640e0(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_0208120c();
    if (data_0214b9f4 == 0) {
        data_0214b9f4 = arg0;
        data_0214b9f0 = arg0;
    } else {
        *(M2C_UNK *) data_0214b9f4 = arg0;
        data_0214b9f4              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
    func_02081220(temp_r0);
}
