/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020039e4(void);
M2C_UNK func_020d128c(void);
void func_020d6a1c(void);
void func_020eadc0(void);
M2C_UNK func_020eaddc(void);
void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020eba1c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020ebbdc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern void *data_02159e70;

void func_020a16b8(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (func_020d128c() == 0) {
        return;
    }
    if ((M2C_FIELD(data_02159e70, s32 *, 0xBC) == 0x1D) || (func_020039e4() == 0)) {
        if (M2C_FIELD(data_02159e70, s32 *, 0xBC) != 0x1D) {
            return;
        }
        if (func_020eaddc() == 0) {
            return;
        }
        goto block_8;
    }
block_8:
    func_020eb9fc(2, 2, 1);
    func_020eadc0();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x10);
    switch (temp_r0) {                              /* irregular */
        case 0:
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0) <= 0x10) {
                return;
            }
            func_020eba1c(2, 2, 0);
            func_020eba1c(2, 1, 1);
            func_020eb9fc(2, 1, 1);
            M2C_FIELD(arg0, s32 *, 0)    = 0;
            M2C_FIELD(arg0, s32 *, 0x10) = 1;
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0) <= 0x10) {
                return;
            }
            func_020eba1c(2, 1, 0);
            func_020eba1c(2, 0, 1);
            func_020eba1c(2, 3, 1);
            func_020eb9fc(2, 0, 1);
            func_020eb9fc(2, 3, 1);
            M2C_FIELD(arg0, s32 *, 0)    = 0;
            M2C_FIELD(arg0, s32 *, 0x10) = 2;
            return;
        case 2:
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0) > 0x10) {
                func_020eba1c(2, 0, 0);
                func_020eba1c(2, 3, 0);
                func_020ebbdc(2, 3, 0, 0);
                M2C_FIELD(arg0, s32 *, 0)    = 0;
                M2C_FIELD(arg0, s32 *, 0x10) = 3;
                func_020d6a1c();
                return;
            }
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 8);
            if (temp_r0_2 >= 0) {
                return;
            }
            M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r0_2 + 4);
            func_020ebbdc(2, 3, (s32) (s16) M2C_FIELD(arg0, s32 *, 8), 0);
            return;
    }
}
