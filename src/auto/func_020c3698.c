/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003790(s32);                         /* extern */
extern void *data_02154c1c;

void func_020c3698(void) {
    if (data_02154c1c == NULL) {
        return;
    }
    func_02003790(M2C_FIELD(data_02154c1c, s32 *, 0x28));
}
