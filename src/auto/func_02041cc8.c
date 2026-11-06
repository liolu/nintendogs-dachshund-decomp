/* compiler: 1.2/sp2p3 -O2 */
#include "m2c.h"

s32 func_020418c8(M2C_UNK);                         /* extern */
s32 func_020c3bcc(s32);                             /* extern */
M2C_UNK func_020c4eac(void *, M2C_UNK *);           /* extern */
M2C_UNK func_020c4ef0(M2C_UNK, void *);             /* extern */
void *func_020c4f70();                              /* extern */
M2C_UNK func_020c519c(void *, s32);                 /* extern */
M2C_UNK func_020c51a8(void *, M2C_UNK);             /* extern */
void *func_020c5468(M2C_UNK, M2C_UNK, s32);         /* extern */
extern void *data_0214b484;
extern M2C_UNK func_02024114;
extern M2C_UNK func_0203e090;

void func_02041cc8(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s16 var_r8;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r4;

    temp_r0 = func_020c4f70();
    func_020c4eac(temp_r0, &func_02024114);
    func_020c4ef0(arg1, temp_r0);
    var_r8 = 0;
    sp0    = 0;
    do {
        temp_r0_2                         = func_020c5468(arg0, 0x8C, M2C_FIELD(data_0214b484, s32 *, 0x7404));
        M2C_FIELD(temp_r0_2, u16 *, 0x20) = (u16) (M2C_FIELD(temp_r0_2, u16 *, 0x20) | 8);
        M2C_FIELD(temp_r0_2, s16 *, 0x84) = 0;
        M2C_FIELD(temp_r0_2, s16 *, 0x86) = 0;
        func_020c4eac(temp_r0_2, &func_0203e090);
        func_020c51a8(temp_r0_2, 8);
        func_020c519c(temp_r0_2, func_020c3bcc(sp0));
        M2C_FIELD(temp_r0_2, s16 *, 0x88)                          = var_r8;
        M2C_FIELD((data_0214b484 + (var_r8 * 4)), void **, 0x7408) = temp_r0_2;
        func_020c4ef0(arg1, M2C_FIELD((data_0214b484 + (var_r8 * 4)), void **, 0x7408));
        var_r8 += 1;
    } while ((s32) var_r8 < 3);
    temp_r4                           = data_0214b484;
    M2C_FIELD(temp_r4, s32 *, 0x741C) = func_020418c8(arg0);
    func_020c4ef0(arg1, M2C_FIELD(data_0214b484, void **, 0x741C));
}
