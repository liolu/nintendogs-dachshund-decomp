/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0208cf24();                                /* extern */
M2C_UNK func_02095590(void *, M2C_UNK);             /* extern */
M2C_UNK func_0209565c(void *, M2C_UNK);             /* extern */
M2C_UNK func_020af2c0();                            /* extern */
M2C_UNK func_020ee8d0(s32, M2C_UNK, M2C_UNK);       /* extern */
extern void *data_02153720;

void func_0209cd0c(void) {
    s32 temp_r0;

    func_0209565c(data_02153720, 0x1C);
    func_02095590(data_02153720, 0);
    temp_r0 = func_0208cf24();
    if (temp_r0 >= 0) {
        func_020ee8d0(temp_r0, 0x7F, 0);
    }
    func_020af2c0();
    M2C_FIELD(data_02153720, s16 *, 0x68) = 0;
}
