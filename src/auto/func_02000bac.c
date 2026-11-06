/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207f618();                            /* extern */
M2C_UNK func_02081220(s32);                         /* extern */

void func_02000bac(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_0207f618(arg0);
    }
    func_02081220(M2C_FIELD(arg1, s32 *, 4));
}
