#include "m2c.h"
s32 func_01ffdb08(s32);
extern void *data_0215a034;
extern void *data_0215a04c;
extern u8 *data_0214da84;
void *func_020038a8(s32 arg0, s32 arg1);
void func_020fdc5c(s32 arg0);
void func_020fd470(void *arg0);
void func_020fdb30(void);
void func_020fe4cc(void);
extern s32 data_02159e70;
void func_020d6068(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_020ea364(s32 arg0) {
    s32 i;
    s32 found = 0;
    s32 best = -1;

    for (i = 0; i < 3; i = (s16) (i + 1)) {
        if (func_01ffdb08(i) != 0) {
            if (best < 0) {
                found = 1;
                best = i;
            } else {
                found = 0;
            }
        }
    }
    if (found) {
        if (best >= 0) {
            *(s16 *) (arg0 + 4) = best;
        }
    }
    return found;
}
