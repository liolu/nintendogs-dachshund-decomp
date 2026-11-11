/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02044980();                         /* extern */
M2C_UNK func_0208b9c8();             /* extern */
M2C_UNK func_020a7fdc();              /* extern */
M2C_UNK func_020a80bc();            /* extern */
s32 func_020a9a80();                                /* extern */
M2C_UNK func_020afbc4();                      /* extern */
M2C_UNK func_020afbf4();                      /* extern */
s32 func_021144f0();                /* extern */
extern void *data_021555f8;

void func_020b27dc(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_020a9a80();
    temp_r4 = func_02044980(0);
    func_020a80bc(arg0, arg0 + 0xBC, temp_r5);
    func_020a7fdc(arg0, arg0 + 0xC8);
    if (M2C_FIELD(data_021555f8, s32 *, 0x24) != 0) {
        func_020afbc4(arg0);
        return;
    }
    if (func_021144f0(temp_r4, arg0 + 0xBC, M2C_FIELD(arg0, s32 *, 0x120)) == 0) {
        return;
    }
    func_020afbf4(arg0);
    func_0208b9c8(arg0 + 0x190, 5);
}
