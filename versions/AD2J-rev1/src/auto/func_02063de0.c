/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0208120c(void);
void func_02081220(M2C_UNK);

extern s32 data_0214b9ec;
extern s32 data_0214b9f0;
extern s32 data_0214ba08;

s32 func_02063de0(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0208120c();
    if (data_0214b9f0 == 0) {
        var_r4 = data_0214b9ec;
    } else {
        var_r4 = data_0214ba08;
    }
    func_02081220(temp_r0);
    return var_r4;
}
