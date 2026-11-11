/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02095524(M2C_UNK);
M2C_UNK func_02095610(M2C_UNK);
void func_02095784(M2C_UNK);
void func_020ae8d8(M2C_UNK);

extern void *data_02153720;
extern void *data_02156080;

void func_02097664(s32 arg0) {
    s16 temp_r0;
    s16 temp_r1;
    s16 temp_r2;
    s32 var_r0;
    void *var_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x2E);
    switch (temp_r1) {                              /* irregular */
        case 0:
            func_02095610(arg0);
            return;
        case 1:
            temp_r2 = M2C_FIELD(data_02153720, s16 *, 0x7A);
            if (((s32) temp_r2 < 0) || ((s32) M2C_FIELD(data_02156080, s16 *, 0x20) <= (s32) temp_r2)) {
                var_r1 = NULL;
            } else {
                var_r1 = M2C_FIELD((data_02156080 + (temp_r2 * 4)), void **, 4);
            }
            if (var_r1 == NULL) {
                return;
            }
            if ((M2C_FIELD(var_r1, s16 *, 0x92) == 3) && (M2C_FIELD(var_r1, s16 *, 0x90) == 1)) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            if (var_r0 == 0) {
                return;
            }
            M2C_FIELD(arg0, s16 *, 0x58) = -2;
            temp_r0                      = M2C_FIELD(arg0, s16 *, 0x5A);
            if ((s32) temp_r0 < 0x3E8) {
                M2C_FIELD(arg0, s16 *, 0x5A) = (s16) (temp_r0 + 1);
            }
            M2C_FIELD(arg0, s16 *, 0x5C) = 0;
            M2C_FIELD(arg0, s32 *, 0x60) = 0;
            M2C_FIELD(arg0, s16 *, 0x5E) = 1;
            func_020ae8d8(8);
            return;
        case 4:
            if (func_02095524(arg0) == 0) {
                return;
            }
            func_02095784(arg0);
            return;
    }
}
