#include "engine.h"
#include "m2c.h"
s32 func_020a59c8(void);
void func_020a59e4(void);
void func_0208f250(M2C_UNK, M2C_UNK);
void func_0208ff8c(M2C_UNK);
void func_02113754(M2C_UNK);
void func_020e23c0(M2C_UNK);
void func_020a5a00(M2C_UNK);
extern u16 data_0214d5fc;
extern M2C_UNK data_0214d624;
void func_02118fac(s32 arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 4);
    switch (temp_r0) {
    case 0x0:
        M2C_FIELD(arg0, volatile s16 *, 6) = (s16) (M2C_FIELD(arg0, volatile s16 *, 6) + 1);
        if ((s32) M2C_FIELD(arg0, volatile s16 *, 6) >= 2) {
            M2C_FIELD(arg0, volatile u16 *, 4) = 0x100;
            M2C_FIELD(arg0, volatile s16 *, 6) = 0;
        }
        return;
    case 0x1:
        return;
    case 0x100:
        if (func_020a59c8() != 0) {
            M2C_FIELD(arg0, volatile u16 *, 4) = 0x101;
            M2C_FIELD(arg0, volatile s16 *, 6) = 0;
            return;
        }
        if (!(M2C_FIELD(&data_0214d624, u16 *, 2) & 2)) {
            if ((u16) (data_0214d5fc & 0xC03) == 0) {
                return;
            }
        }
        func_020a59e4();
        func_0208f250(4, 0x1E);
        func_0208ff8c(0x52);
        return;
    case 0x101:
        M2C_FIELD(arg0, volatile s16 *, 6) = (s16) (M2C_FIELD(arg0, volatile s16 *, 6) + 1);
        if ((s32) M2C_FIELD(arg0, volatile s16 *, 6) >= 4) {
            M2C_FIELD(arg0, volatile u16 *, 4) = 0x102;
            M2C_FIELD(arg0, volatile s16 *, 6) = 0;
            func_02113754(1);
        }
        return;
    case 0x102:
        M2C_FIELD(arg0, volatile s16 *, 6) = (s16) (M2C_FIELD(arg0, volatile s16 *, 6) + 1);
        if ((s32) M2C_FIELD(arg0, volatile s16 *, 6) >= 2) {
            M2C_FIELD(arg0, volatile u16 *, 4) = 0x103;
            M2C_FIELD(arg0, volatile s16 *, 6) = 0;
            func_020e23c0(0);
        }
        return;
    case 0x103:
        func_021191e8(arg0);
        return;
    case 0x104:
        M2C_FIELD(arg0, volatile s16 *, 6) = (s16) (M2C_FIELD(arg0, volatile s16 *, 6) + 1);
        if ((s32) M2C_FIELD(arg0, volatile s16 *, 6) >= 0x5A) {
            M2C_FIELD(arg0, volatile u16 *, 4) = 0x105;
            M2C_FIELD(arg0, volatile s16 *, 6) = 0;
            func_020a5a00(0);
        }
        return;
    case 0x105:
        M2C_FIELD(arg0, volatile s16 *, 6) = (s16) (M2C_FIELD(arg0, volatile s16 *, 6) + 1);
        M2C_FIELD(arg0, volatile u16 *, 4) = 0x106;
        M2C_FIELD(arg0, volatile s16 *, 6) = 0;
        return;
    case 0x106:
        M2C_FIELD(arg0, volatile s16 *, 6) = (s16) (M2C_FIELD(arg0, volatile s16 *, 6) + 1);
        if ((s32) M2C_FIELD(arg0, volatile s16 *, 6) >= 0x1E) {
            M2C_FIELD(arg0, volatile u16 *, 4) = 1;
            M2C_FIELD(arg0, volatile s32 *, 0xC) = 1;
            M2C_FIELD(arg0, volatile s32 *, 0x18) = 0x13;
        }
        return;
    }
}
