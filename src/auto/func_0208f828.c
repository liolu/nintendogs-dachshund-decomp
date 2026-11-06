/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffec9c(void *);                      /* extern */

void func_0208f828(void *arg0) {
    void *temp_r1;
    void *temp_r2;

    if (M2C_FIELD(arg0, s32 *, 0x88) != 0) {
        temp_r1                      = M2C_FIELD(arg0, void **, 0x1C);
        M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) | 1);
    }
    func_01ffec9c(arg0);
    temp_r2                      = M2C_FIELD(arg0, void **, 0x1C);
    M2C_FIELD(temp_r2, s32 *, 4) = (s32) (M2C_FIELD(temp_r2, s32 *, 4) & ~1);
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
}
