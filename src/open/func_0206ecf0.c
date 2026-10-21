#include "m2c.h"
s32 func_0206ecf0(s32 *arg0, s32 arg1) {
    s32 var = 1;
    if (!((1 << (arg1 & 0x1F)) & arg0[arg1 >> 5]))
        var = 0;
    return var;
}
