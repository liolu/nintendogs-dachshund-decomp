#include "m2c.h"
extern M2C_UNK data_02144cf8;
extern M2C_UNK data_02144cc0;
extern M2C_UNK data_02144cd0;
extern M2C_UNK data_02144ce4;
extern M2C_UNK data_02144d44;
extern M2C_UNK data_02144d0c;
extern M2C_UNK data_02144d1c;
extern M2C_UNK data_02144d30;
extern M2C_UNK data_02144d90;
extern M2C_UNK data_02144d58;
extern M2C_UNK data_02144d68;
extern M2C_UNK data_02144d7c;
extern M2C_UNK data_02144dd4;
extern M2C_UNK data_02144da4;
extern M2C_UNK data_02144db4;
extern M2C_UNK data_02144dc4;
void func_020d6158(s32 a0, void *a1, void *a2, void *a3, void *a4);
void func_020e4a98(s32 arg0, u8 *arg1) {
    s32 st;

    M2C_FIELD(arg1, s32 *, 4) = arg0;
    st = M2C_FIELD(arg1, s32 *, 4);
    if (st < 1 || st > 4) {
        return;
    }
    switch (st) {
    case 1:
        func_020d6158(0, &data_02144cc0, &data_02144cd0, &data_02144ce4, &data_02144cf8);
        break;
    case 2:
        func_020d6158(0, &data_02144d0c, &data_02144d1c, &data_02144d30, &data_02144d44);
        break;
    case 3:
        func_020d6158(0, &data_02144d58, &data_02144d68, &data_02144d7c, &data_02144d90);
        break;
    case 4:
        func_020d6158(0, &data_02144da4, &data_02144db4, &data_02144dc4, &data_02144dd4);
        break;
    }
}
