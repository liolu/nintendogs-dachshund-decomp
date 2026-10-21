#include "m2c.h"
extern s32 data_02156ecc[];
s32 func_020bef20(void);
void func_0206f62c(s32 arg0, s32 arg1, M2C_UNK arg2);
void func_0206f5a4(s32 arg0, s32 arg1);
extern s32 *data_02156ec0;
s32 func_020beea0(void);
s32 func_020beeb4(void);
void func_020c16b0(s32 arg0, s32 arg1, s32 arg2) {
    s32 ret = func_020bef20();

    if (ret == 2) {
        if (arg1 == 0) {
            data_02156ecc[arg0] = 0;
            return;
        }
        data_02156ecc[arg0] = 1;
        func_0206f62c(arg1, arg2, arg0);
        return;
    } else if (ret == 3) {
        if (arg1 == 0) {
            data_02156ecc[0] = 0;
            return;
        }
        data_02156ecc[0] = 1;
        func_0206f5a4(arg1, arg2);
    }
}
