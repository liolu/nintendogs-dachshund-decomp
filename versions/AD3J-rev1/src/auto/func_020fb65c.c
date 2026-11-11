/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020a43f8(void);
void func_020b7ee0(void);
M2C_UNK func_020b7efc(void);
void func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020b8b2c(M2C_UNK, M2C_UNK, M2C_UNK);

extern void *data_02153740;

void func_020fb65c(s32 arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = 6;
        func_020b8b2c(2, 0, 0);
        func_020b8b2c(2, 2, 0);
        func_020b8b0c(2, 0, 1);
        func_020b8b0c(2, 2, 1);
        func_020a43f8();
        return;
    }
    if ((M2C_FIELD(data_02153740, s32 *, 0xBC) == 0x17) && (func_020b7efc() == 0)) {
        return;
    }
    func_020b7ee0();
    func_020b8b0c(2, 2, 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    switch (temp_r0) {                              /* irregular */
        case 0:
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0) <= 0x10) {
                return;
            }
            func_020b8b2c(2, 2, 0);
            func_020b8b2c(2, 0, 1);
            func_020b8b0c(2, 0, 1);
            M2C_FIELD(arg0, s32 *, 0)   = 0;
            M2C_FIELD(arg0, s32 *, 0xC) = 1;
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0) <= 0x10) {
                return;
            }
            func_020b8b2c(2, 0, 0);
            M2C_FIELD(arg0, s32 *, 0)   = 0;
            M2C_FIELD(arg0, s32 *, 0xC) = 2;
            func_020a43f8();
            return;
    }
}
