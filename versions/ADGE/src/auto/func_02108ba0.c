/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cf134(void *);                      /* extern */
extern void *data_02159e70;

void func_02108ba0(void *arg0) {
    if (M2C_FIELD(arg0, s8 *, 0x70) == 0) {
        func_020cf134(arg0 + 0x74);
    }
    M2C_FIELD(data_02159e70, s32 *, 0x4868) = 1;
}
