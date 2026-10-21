#include "m2c.h"
s32 func_0206fff8(void);
M2C_UNK func_02070018(M2C_UNK);
s32 func_0206ee38(M2C_UNK, M2C_UNK);
M2C_UNK func_0206eda0(M2C_UNK, s32);
s32 func_02070144(void);
void func_0206ea70(M2C_UNK, s32, s32, s32);
s32 func_0206f2a4(M2C_UNK arg0, s32 arg1, u8 arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6);
s32 func_0206e110(M2C_UNK arg0, s32 arg1, M2C_UNK arg2) {
    s32 result;
    u8 *r6;
    u8 *rec;
    M2C_UNK r8;
    u8 *r11;
    s32 r4;
    M2C_UNK obj;
    s32 tmp;

    result = 0;
    r6 = (u8 *) arg0 + 0x138;
    rec = (u8 *) arg0 + 0x1d4 + arg1 * 0x68;
    if (*rec == 2) {
        r8 = func_0206fff8() == 0 ? 0xFFFE : 1;
        if (rec[1] == 4) {
            r11 = (u8 *) func_02070018(*(M2C_UNK *) (rec + 0x10));
            if (r11 != 0) {
                r4 = func_0206ee38(*(M2C_UNK *) (rec + 0x10), *(M2C_UNK *) (rec + 0x14));
                if (r4 != -1) {
                    if (*(u16 *) (r11 + 0x32) == 0) {
                        obj = func_0206eda0(*(M2C_UNK *) (rec + 0x10), r4);
                        tmp = func_02070144();
                        result = func_0206f2a4(arg2, r8, rec[2], *(M2C_UNK *) (rec + 0x10), r4, obj, tmp);
                    } else if (*(u16 *) (r11 + 0x32) == 1) {
                        *(M2C_UNK *) (r6 + 0x14) = *(M2C_UNK *) (rec + 0x10);
                        *(M2C_UNK *) (r6 + 0x18) = r4;
                        *(s16 *) (r6 + 0x20) = (s16) func_02070144();
                        *(M2C_UNK *) (r6 + 0x1c) = 0;
                        func_0206ea70(arg0, 13, arg1, 0);
                        if (*(M2C_UNK *) (r6 + 0x1c) != 0) {
                            result = func_0206f2a4(arg2, r8, rec[2], *(M2C_UNK *) (r6 + 0x14), *(M2C_UNK *) (r6 + 0x18),
                                *(M2C_UNK *) (r6 + 0x1c), *(s16 *) (r6 + 0x20));
                        }
                    }
                }
            }
            *rec = 1;
        }
    }
    return result;
}
