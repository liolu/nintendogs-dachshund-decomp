/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02066528(void);
void func_02080ca4(void);

extern s32 data_0214f440;
extern s32 (*data_0214f444)();

void func_02066588(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0        = 1;
        data_0214f440 = 1;
        if (data_0214f444 != NULL) {
            var_r0 = data_0214f444();
        }
        if (var_r0 == 0) {
            return;
        }
        func_02066528();
        return;
    }
    func_02080ca4();
}
