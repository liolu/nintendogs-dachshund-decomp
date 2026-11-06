/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02084af8(s32);                         /* extern */
extern s32 *data_02154c9c;

void func_020d6d54(void) {
    if (data_02154c9c == NULL) {
        return;
    }
    func_02084af8(*data_02154c9c);
}
