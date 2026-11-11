/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003be4(M2C_UNK);                     /* extern */
M2C_UNK func_020a3aec(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_020cd3ac();                            /* extern */
extern M2C_UNK data_02147fcc;
extern void *data_02153740;

void func_020fde44(void *arg0) {
    s32 temp_r0;

    func_020a3aec(M2C_FIELD(arg0, s32 *, 0x754), &data_02147fcc, 2);
    func_020cd3ac();
    temp_r0 = M2C_FIELD(data_02153740, s32 *, 0xB4);
    if ((temp_r0 != 0x19) && (temp_r0 != 0x1B)) {
        return;
    }
    func_02003be4(0xA);
}
