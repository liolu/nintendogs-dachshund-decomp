/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_01ffdb08(M2C_UNK);
void func_020a5bf0(void);
void func_020a5c0c(s32);
void func_020d2c64(s16, s32, s32, s32, s32);
s32 func_020e15a8(void);
void func_020e15dc(void);
M2C_UNK func_0211a19c(M2C_UNK);
M2C_UNK func_0211a638(void);
s32 func_0211a8b8(s32);

extern M2C_UNK data_0214c988;
extern void *data_02159e64;
extern void *data_02159e70;
extern void *data_0215a044;

void func_0211a3a0(s32 arg0) {
    s16 temp_r0;
    s16 temp_r0_3;
    s16 var_r6;
    s16 var_r6_2;
    s32 temp_r0_2;
    s32 var_r5;
    s32 var_r5_2;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x2A);
    switch (temp_r0) {                              /* switch 1; irregular */
        case 0:                                         /* switch 1 */
            if (M2C_FIELD(data_02159e70, s32 *, 0x48BC) == 1) {
                M2C_FIELD(arg0, s16 *, 0x6C) = -2;
                M2C_FIELD(arg0, s16 *, 0x2E) = 2;
                M2C_FIELD(arg0, s16 *, 0x30) = 0;
                return;
            }
            if (func_020e15a8() < 0) {
                return;
            }
            func_020e15a8();
            temp_r0_2 = func_0211a638();
            if (temp_r0_2 != -1) {
                M2C_FIELD(arg0, s16 *, 0x2A) = 1;
                func_020d2c64(0, (s32) * ((u16 *) ((s8 *) &data_0214c988 + (temp_r0_2 * 4))),
                              (s32) M2C_FIELD(((M2C_UNK *) ((s8 *) &data_0214c988 + (temp_r0_2 * 4))), u16 *, 2),
                              (s32) func_0211a8b8, 0);
            } else {
                M2C_FIELD(arg0, s16 *, 0x2A) = 2;
                func_020d2c64(0, 0x44D, func_0211a19c(M2C_FIELD(data_0215a044, s32 *, 4)), (s32) func_0211a8b8, 0);
            }
            func_020a5c0c(func_020e15a8());
            return;
        case 1:                                         /* switch 1 */
            if (M2C_FIELD(data_02159e64, s32 *, 0xA4) == 0) {
                return;
            }
            var_r6 = 0;
            var_r5 = 0;
            do {
                if (func_01ffdb08(var_r5) != 0) {
                    var_r6 += 1;
                }
                var_r5 = (s32) (s16) (var_r5 + 1);
            } while (var_r5 < 3);
            if ((s32) var_r6 > 1) {
                func_020e15dc();
                M2C_FIELD(arg0, s16 *, 0x2A) = 0;
                func_020a5bf0();
                return;
            }
            M2C_FIELD(arg0, s16 *, 0x6C) = -2;
            M2C_FIELD(arg0, s16 *, 0x2E) = 2;
            M2C_FIELD(arg0, s16 *, 0x30) = 0;
            return;
        case 2:                                         /* switch 1 */
            if (M2C_FIELD(data_02159e64, s32 *, 0xA4) == 0) {
                return;
            }
            temp_r0_3 = M2C_FIELD(data_02159e64, s16 *, 0x9A);
            switch (temp_r0_3) {                        /* switch 2; irregular */
                case 0:                                     /* switch 2 */
                    M2C_FIELD(arg0, s16 *, 0x6C) = (s16) func_020e15a8();
                    M2C_FIELD(arg0, s16 *, 0x2E) = 2;
                    M2C_FIELD(arg0, s16 *, 0x30) = 0;
                    return;
                case 1:                                     /* switch 2 */
                    var_r6_2 = 0;
                    var_r5_2 = 0;
                    do {
                        if (func_01ffdb08(var_r5_2) != 0) {
                            var_r6_2 += 1;
                        }
                        var_r5_2 = (s32) (s16) (var_r5_2 + 1);
                    } while (var_r5_2 < 3);
                    if ((s32) var_r6_2 > 1) {
                        func_020e15dc();
                        M2C_FIELD(arg0, s16 *, 0x2A) = 0;
                        func_020a5bf0();
                        return;
                    }
                    M2C_FIELD(arg0, s16 *, 0x6C) = -2;
                    M2C_FIELD(arg0, s16 *, 0x2E) = 2;
                    M2C_FIELD(arg0, s16 *, 0x30) = 0;
                    return;
            }
            break;
    }
}
