/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0208df98(M2C_UNK);
void func_0208ff8c(M2C_UNK);
void func_020e1864(void);
M2C_UNK func_02116cb4(M2C_UNK);
void func_02116d20(s32, s32);
s32 func_02116da0(s32);
void func_02116dec(M2C_UNK, M2C_UNK);
void func_02116f14(M2C_UNK);

extern u16 data_0214d5fc;
extern void *data_02159e70;
extern void *data_0215a064;

void func_02121984(s32 arg0) {
    s16 temp_r0;
    s16 temp_r2;
    s16 temp_r2_2;
    s32 var_r1;
    s32 var_r2;

    temp_r2 = M2C_FIELD(arg0, s16 *, 0x2E);
    var_r1  = 0;
    switch (temp_r2) {                              /* irregular */
        case 0:
            func_02116da0(arg0);
            M2C_FIELD(arg0, s16 *, 0x30) = 0;
            return;
        case 1:
            temp_r2_2 = M2C_FIELD(arg0, s16 *, 0x30);
            if ((s32) temp_r2_2 < 0xBB8) {
                M2C_FIELD(arg0, s16 *, 0x30) = (s16) (temp_r2_2 + 1);
            }
            temp_r0 = M2C_FIELD(arg0, s16 *, 0x30);
            if ((s32) temp_r0 >= 0x78) {
                if (M2C_FIELD(data_0215a064, u16 *, 0x84) & 2) {
                    var_r1 = 1;
                } else if ((u16) (data_0214d5fc & 0xC0B) != 0) {
                    var_r1 = 1;
                }
            }
            if ((s32) temp_r0 >= 0xBB8) {
                var_r1 = 1;
            }
            if (var_r1 == 0) {
                return;
            }
            func_02116dec(arg0, 2);
            func_02116d20(arg0, 0);
            M2C_FIELD(arg0, s16 *, 0x30) = 0;
            func_0208df98(0x78);
            func_0208ff8c(0x40);
            func_020e1864();
            return;
        case 4:
            if (func_02116cb4(arg0) == 0) {
                return;
            }
            var_r2 = 0;
            if (M2C_FIELD(data_02159e70, s32 *, 0xB8) == 3) {
                var_r2 = M2C_FIELD(data_02159e70, s32 *, 0x3C4);
            }
            if (var_r2 == 0) {
                return;
            }
            func_02116f14(arg0);
            return;
    }
}
