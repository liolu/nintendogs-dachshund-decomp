/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_02093000(void);
M2C_UNK func_020aadfc(void);
void func_020b8b0c(s32, s32, s32);
void func_020bd9f0(s32, s32);
void func_020bda9c(s32);

extern void *data_02153740;
extern s32 data_02156080;

void func_020aab8c(s32 arg0) {
    s32 temp_r2;
    s32 var_r0;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r6;

    var_r4 = 0;
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        if (M2C_FIELD(data_02153740, s32 *, 0xB8) == 1) {
            return;
        }
        func_020b8b0c(1, 0x18, 0);
        func_020b8b0c(1, 0x19, 0);
        func_020b8b0c(1, 0x1A, 0);
        func_020b8b0c(1, 0x1C, 0);
        func_020b8b0c(3, 0x1C, 0);
        func_020bda9c(arg0 + 0x120);
        func_020bda9c(arg0 + 0xE4);
        return;
    }
    var_r0 = 0;
    if (data_02156080 != 0) {
        var_r0 = func_02093000();
    }
    switch (var_r0) {                               /* switch 1; irregular */
        case 0:                                         /* switch 1 */
            var_r4 = 0;
            break;
        case 1:                                         /* switch 1 */
            M2C_FIELD(arg0, s32 *, 0x50) = 0;
            var_r4                       = 1;
            break;
        case 2:                                         /* switch 1 */
            var_r4 = 2;
            if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
                M2C_FIELD(arg0, s32 *, 0x50) = 1;
                if (M2C_FIELD(arg0, s32 *, 0x54) == 0) {
                    M2C_FIELD(arg0, s32 *, 0x58) = 1;
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0x50) = 0;
            }
            break;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x58) != 0) && (func_020aadfc() != 0)) {
        M2C_FIELD(arg0, s32 *, 0x58) = 0;
    }
    var_r2 = 0;
    var_r6 = 0;
    switch (var_r4) {                               /* switch 2; irregular */
        case 2:                                         /* switch 2 */
            var_r2 = 1;
            break;
        case 1:                                         /* switch 2 */
            var_r6 = 1;
            break;
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        var_r6 = 0;
        var_r2 = 0;
    }
    func_020b8b0c(1, 0x18, var_r2);
    func_020b8b0c(1, 0x19, var_r6);
    func_020b8b0c(1, 0x1A, M2C_FIELD(arg0, s32 *, 0x50));
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) M2C_FIELD(arg0, s32 *, 0x50);
    temp_r2                      = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r2 == 0) {
        var_r4_2 = 1;
    } else {
        var_r4_2 = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x13C) == 4) {
        func_020b8b0c(1, 0x1B, temp_r2);
    } else {
        func_020bd9f0(arg0 + 0x120, temp_r2);
    }
    if (M2C_FIELD(arg0, s32 *, 0x100) == 4) {
        func_020b8b0c(3, 0x1B, var_r4_2);
    } else {
        func_020bd9f0(arg0 + 0xE4, var_r4_2);
    }
    if (M2C_FIELD(data_02153740, s32 *, 0xB8) == 3) {
        func_020b8b0c(1, 0x1C, 0);
        func_020b8b0c(3, 0x1C, 0);
        return;
    }
    func_020b8b0c(1, 0x1C, M2C_FIELD(arg0, s32 *, 0x14));
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        var_r2_2 = 1;
    } else {
        var_r2_2 = 0;
    }
    func_020b8b0c(3, 0x1C, var_r2_2);
}
