/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020d6a1c(void);
void func_020eadc0(void);
M2C_UNK func_020eaddc(void);
void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020eba1c(M2C_UNK, M2C_UNK, M2C_UNK);

extern void *data_02159e70;

void func_0209b160(s32 arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = 6;
        func_020eba1c(2, 0, 0);
        func_020eba1c(2, 2, 0);
        func_020eb9fc(2, 0, 1);
        func_020eb9fc(2, 2, 1);
        func_020d6a1c();
        return;
    }
    if ((M2C_FIELD(data_02159e70, s32 *, 0xBC) == 0x17) && (func_020eaddc() == 0)) {
        return;
    }
    func_020eadc0();
    func_020eb9fc(2, 2, 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    switch (temp_r0) {                              /* irregular */
        case 0:
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0) <= 0x10) {
                return;
            }
            func_020eba1c(2, 2, 0);
            func_020eba1c(2, 0, 1);
            func_020eb9fc(2, 0, 1);
            M2C_FIELD(arg0, s32 *, 0)   = 0;
            M2C_FIELD(arg0, s32 *, 0xC) = 1;
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0) <= 0x10) {
                return;
            }
            func_020eba1c(2, 0, 0);
            M2C_FIELD(arg0, s32 *, 0)   = 0;
            M2C_FIELD(arg0, s32 *, 0xC) = 2;
            func_020d6a1c();
            return;
    }
}
