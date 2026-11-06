#include "m2c.h"

extern M2C_UNK data_0213ba9c;
extern M2C_UNK data_0213baa4;
extern M2C_UNK data_0213baac;
extern M2C_UNK data_0213bab4;
extern M2C_UNK data_0213babc;
extern M2C_UNK data_0213bac4;

M2C_UNK *func_0208ea64(u32 arg0) {
    M2C_UNK *var_r1;

    var_r1 = NULL;
    switch (arg0) {
        default:
            break;
        case 0:
            var_r1 = &data_0213ba9c;
            break;
        case 1:
            var_r1 = &data_0213baa4;
            break;
        case 2:
            var_r1 = &data_0213baac;
            break;
        case 3:
            var_r1 = &data_0213bab4;
            break;
        case 4:
            var_r1 = &data_0213babc;
            break;
        case 5:
            var_r1 = &data_0213bac4;
            break;
    }
    return var_r1;
}
