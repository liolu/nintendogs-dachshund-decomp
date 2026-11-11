/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020aa2f0(void *);                      /* extern */
extern void *data_02153740;

void func_020afc00(void) {
    func_020aa2f0(data_02153740 + 0x3C98);
    M2C_FIELD(data_02153740, s32 *, 0x3528) = 0;
}
