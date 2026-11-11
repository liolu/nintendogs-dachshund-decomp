/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020e3098(s32 arg0) {
    s32 var_r6;

    var_r6 = 0;
    do {
        func_020eb9fc(2, (s32) (u16) (var_r6 + 5), 0);
        var_r6 += 1;
    } while (var_r6 < 2);
    switch (arg0) {                                 /* irregular */
        case 1:
            func_020eb9fc(2, 5, 1);
            return;
        case 2:
            func_020eb9fc(2, 6, 1);
            return;
    }
}
