#include "m2c.h"

M2C_UNK func_01ffdb08(M2C_UNK);                     /* extern */
void func_020090bc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

extern M2C_S12 data_021384bc;                       /* extern */

M2C_UNK func_01ffdb08(M2C_UNK);
void func_020090bc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_S12 data_021384bc;
extern M2C_S12 data_021384d4;
extern M2C_S12 data_021384ec;
void func_02008a5c(M2C_UNK arg0, void *arg1) {
    M2C_S12 buf;
    M2C_UNK ret;

    ret = func_01ffdb08(arg0);
    if (ret == 0) {
        return;
    }
    buf = data_021384bc;
    func_020090bc(ret, (M2C_UNK) arg1, ret + 0x2DC, (M2C_UNK) &buf);
}
