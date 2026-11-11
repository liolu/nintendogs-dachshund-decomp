/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0208120c(void);
void func_02081220(M2C_UNK);

void func_0208b608(s32 arg0) {
    s32 temp_r0;
    s32 var_r1;
    void *temp_r2;

    temp_r0 = func_0208120c();
    if (M2C_FIELD(arg0, volatile s32 *, 0xC) & 1) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        M2C_FIELD(arg0, volatile s32 *, 0xC)     = (s32) (M2C_FIELD(arg0, volatile s32 *, 0xC) | 2);
        temp_r2                                  = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(temp_r2, volatile s32 *, 0x10) = (s32) (M2C_FIELD(temp_r2, volatile s32 *, 0x10) | 0x20);
    }
    func_02081220(temp_r0);
}
