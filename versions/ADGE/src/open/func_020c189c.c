#include "m2c.h"
extern s32 *data_02156ec0;
s32 func_020beea0(void);
s32 func_020bef20(void);
s32 func_020beeb4(void);
extern s32 data_02156ecc[];
void func_0206f62c(s32 arg0, s32 arg1, M2C_UNK arg2);
void func_0206f5a4(s32 arg0, s32 arg1);
s32 func_020c189c(void) {
    if (func_020beea0() != 0) {
        return 5;
    }
    switch (func_020bef20()) {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
        case 3:
            if (func_020beeb4() != 0) {
                return (data_02156ec0[1] == 0) ? 2 : 4;
            }
            return 3;
        case 4:
            return 3;
    }
    return 5;
}
