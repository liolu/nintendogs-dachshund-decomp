/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02022dd0(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02029204(void *);                      /* extern */
M2C_UNK func_0202c938(void *, M2C_UNK);             /* extern */

void func_0200cef8(void *arg0) {
    if ((M2C_FIELD(arg0, s16 *, 0xF0) != 0x6F) && (func_02022dd0(arg0, 0x4D) == 0)) {
        func_02029204(arg0);
    }
    func_0202c938(arg0, 0);
}
