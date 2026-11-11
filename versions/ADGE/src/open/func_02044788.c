#include "m2c.h"
extern u8 data_0213aa32[];
extern u8 *data_0214da84;
extern u32 data_0214da80[];
extern u8 *data_0215a064[];
void func_01ff8980(s32);
s16 func_02044788(s16 arg0, s16 arg1, s16 arg2) {
    return *(s16 *) ((u8 *) data_0213aa32 + arg0 * 100 + arg1 * 6 + arg2 * 2);
}
