/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0208120c(void);
void func_02081220(M2C_UNK);

extern s32 data_0214a714;

s32 func_02002d8c(void) {
    s32 temp_r0;

    temp_r0 = func_0208120c();
    if (data_0214a714 != 0) {
        func_02081220(temp_r0);
        return 0;
    }
    data_0214a714 = 1;
    func_02081220(temp_r0);
    return 1;
}
