/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02080210(M2C_UNK, M2C_UNK);
void func_020c52a8(void);
void func_020c52bc(void);

void func_020c6494(s32 arg0) {
    void *temp_r6;
    void *var_r0;

    func_020c52bc();
    var_r0 = M2C_FIELD(arg0, void **, 0x18);
    if (var_r0 != NULL) {
        do {
            temp_r6                       = M2C_FIELD(var_r0, void **, 4);
            M2C_FIELD(var_r0, s32 *, 0)   = 0;
            M2C_FIELD(var_r0, void **, 4) = NULL;
            func_02080210((s32) var_r0, 8);
            var_r0 = temp_r6;
        } while (temp_r6 != NULL);
    }
    func_020c52a8();
}
