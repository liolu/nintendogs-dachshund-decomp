/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02000e2c(void);
void func_02080ca4(void);

extern s32 (*data_0214cbcc)();

void func_02000e4c(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0 = 0;
        if (data_0214cbcc != NULL) {
            var_r0 = data_0214cbcc();
        }
        if (var_r0 == 0) {
            return;
        }
        func_02000e2c();
        return;
    }
    func_02080ca4();
}
