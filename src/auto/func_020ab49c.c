/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020efb78(M2C_UNK);

void func_020ab49c(s32 arg0) {
    s32 var_r1;

    var_r1 = -1;
    switch (arg0) {                                 /* irregular */
        case 3:
            var_r1 = 4;
            break;
        case 1:
            var_r1 = 2;
            break;
        case 2:
            var_r1 = 3;
            break;
    }
    if (var_r1 < 0) {
        return;
    }
    func_020efb78(var_r1);
}
