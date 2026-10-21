#include "m2c.h"
extern M2C_UNK func_02070064(void);
extern M2C_UNK func_02070144(void);
extern M2C_UNK func_0205df50(M2C_UNK, M2C_UNK);
extern M2C_UNK data_0213cae0;
extern M2C_UNK data_0213cae4;
extern M2C_UNK data_0213cae8;
M2C_UNK func_0206ee38(M2C_UNK arg0, M2C_UNK arg1) {
    s32 i;
    M2C_UNK temp;
    M2C_UNK *node;
    s32 t;

    node = (M2C_UNK *)func_02070064();
    if ((u32)arg0 < 0x3E8) {
        return arg1;
    }
    while (node != 0) {
        if (M2C_FIELD(node, s32 *, 0) == arg0) {
            if (arg0 == data_0213cae4) {
                i = 0;
                while (arg1 == data_0213cae0 || arg1 == data_0213cae8) {
                    arg1++;
                    temp = func_02070144();
                    t = (s32)func_0205df50(M2C_FIELD(node, s32 *, 4) + temp - 1, func_02070144()) - 1;
                    i++;
                    if (arg1 > t) {
                        arg1 = 0;
                    }
                    if (i > 2) {
                        break;
                    }
                }
            }
            data_0213cae4 = arg0;
            data_0213cae8 = data_0213cae0;
            data_0213cae0 = arg1;
            return arg1;
        }
        node = (M2C_UNK *)M2C_FIELD(node, s32 *, 0x28);
    }
    return -1;
}
