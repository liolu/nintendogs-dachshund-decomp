/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207f618(M2C_UNK);                     /* extern */
M2C_UNK lbl_02084574(s32);                          /* extern */
M2C_UNK lbl_020845c0(s32);                          /* extern */

void func_02083a20(s32 arg0) {
    if (arg0 & 0x20) {
        func_0207f618(0x70);
    }
    lbl_02084574(arg0 & 2);
    lbl_020845c0(arg0 & 1);
}
