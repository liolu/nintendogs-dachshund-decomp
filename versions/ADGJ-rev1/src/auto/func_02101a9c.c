/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02003980();                                /* extern */
M2C_UNK func_020a43f8();                            /* extern */
M2C_UNK func_020b7ee0();                            /* extern */
s32 func_020b7efc();                                /* extern */
M2C_UNK func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020b8b2c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020b8ce8(M2C_UNK, M2C_UNK, s16, M2C_UNK); /* extern */
s32 func_020cba34();                                /* extern */
extern void *data_02153740;

void func_02101a9c(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (func_020cba34() == 0) {
        return;
    }
    if ((M2C_FIELD(data_02153740, s32 *, 0xBC) == 0x1D) || (func_02003980() == 0)) {
        if (M2C_FIELD(data_02153740, s32 *, 0xBC) != 0x1D) {
            return;
        }
        if (func_020b7efc() == 0) {
            return;
        }
        goto block_8;
    }
block_8:
    func_020b8b0c(2, 2, 1);
    func_020b7ee0();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x10);
    switch (temp_r0) {                              /* irregular */
        case 0:
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0) <= 0x10) {
                return;
            }
            func_020b8b2c(2, 2, 0);
            func_020b8b2c(2, 1, 1);
            func_020b8b0c(2, 1, 1);
            M2C_FIELD(arg0, s32 *, 0)    = 0;
            M2C_FIELD(arg0, s32 *, 0x10) = 1;
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0) <= 0x10) {
                return;
            }
            func_020b8b2c(2, 1, 0);
            func_020b8b2c(2, 0, 1);
            func_020b8b2c(2, 3, 1);
            func_020b8b0c(2, 0, 1);
            func_020b8b0c(2, 3, 1);
            M2C_FIELD(arg0, s32 *, 0)    = 0;
            M2C_FIELD(arg0, s32 *, 0x10) = 2;
            return;
        case 2:
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0) > 0x10) {
                func_020b8b2c(2, 0, 0);
                func_020b8b2c(2, 3, 0);
                func_020b8ce8(2, 3, 0, 0);
                M2C_FIELD(arg0, s32 *, 0)    = 0;
                M2C_FIELD(arg0, s32 *, 0x10) = 3;
                func_020a43f8();
                return;
            }
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 8);
            if (temp_r0_2 >= 0) {
                return;
            }
            M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r0_2 + 4);
            func_020b8ce8(2, 3, (s16) M2C_FIELD(arg0, s32 *, 8), 0);
            return;
    }
}
