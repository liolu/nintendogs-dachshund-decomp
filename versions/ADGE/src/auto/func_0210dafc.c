/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02002e60();            /* extern */
M2C_UNK func_02002fc0();        /* extern */
M2C_UNK func_0210db8c();                            /* extern */
extern M2C_UNK func_02111e2c;
extern M2C_UNK func_021125b4;
extern M2C_UNK func_021125bc;
extern M2C_UNK func_02122dd4;

void func_0210dafc(void) {
    u8 sp4[32];
    M2C_UNK *sp0;

    func_0210db8c();
    func_02002fc0(sp4, &func_021125bc);
    if (func_02002e60(sp4, &sp0) == 1) {
        func_02002fc0(sp4, &func_02122dd4);
        func_02002e60(sp4, (M2C_UNK *) 1);
    }
loop_2:
    func_02002fc0(sp4, &func_02111e2c);
    if (func_02002e60(sp4, sp0) != 3) {
        goto loop_2;
    }
    func_02002fc0(sp4, &func_021125b4);
    func_02002e60(sp4, NULL);
    goto loop_2;
}
