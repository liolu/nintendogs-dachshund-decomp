#include "m2c.h"
extern u8 *data_02159e30;
extern void *data_02143b9c[];
extern s8 data_02143bf0[];
extern s8 data_02143c00[];
void func_0205ece8();
s32 func_020038a8();
M2C_UNK func_020c79a0();
void func_020cbc38();
#pragma opt_propagation off
void func_020cbea0(M2C_UNK arg0, s32 arg1) {
    s8 buf[0x40];
    void *obj;
    void *name;
    void *sub;

    if (*(u32 *) ((u8 *) data_02159e30 + arg1 * 4 + 4) != 0) {
        return;
    }
    obj = (void *) func_020038a8(arg0, 0x2C);
    name = data_02143b9c[arg1];
    sub = NULL;
    if (sub != NULL) {
        func_0205ece8(buf, 0x40, data_02143bf0, sub, name);
    } else {
        func_0205ece8(buf, 0x40, data_02143c00, name);
    }
    func_020cbc38(obj, func_020c79a0(arg0, buf));
    *(void **) ((u8 *) data_02159e30 + (arg1 << 2) + 4) = obj;
}
