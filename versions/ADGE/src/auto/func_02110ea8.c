/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_01ffdfe4(M2C_UNK);

void func_02110ea8(s32 arg0) {
    void *temp_r1;
    void *temp_r2;

    if (M2C_FIELD(arg0, s32 *, 0x88) != 0) {
        temp_r1                      = M2C_FIELD(arg0, void **, 0x1C);
        M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) | 1);
    }
    func_01ffdfe4(arg0);
    temp_r2                      = M2C_FIELD(arg0, void **, 0x1C);
    M2C_FIELD(temp_r2, s32 *, 4) = (s32) (M2C_FIELD(temp_r2, s32 *, 4) & ~1);
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
}
