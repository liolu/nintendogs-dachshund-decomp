#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214c8dc;
extern M2C_UNK data_0214c8e4;
extern M2C_UNK data_0214c8ec;
extern M2C_UNK data_0214c8f4;
extern M2C_UNK data_0214c8fc;
extern M2C_UNK data_0214c904;

s32 func_0211000c(s32 arg0) {
    M2C_UNK *var_r1;

    var_r1 = NULL;
    switch (arg0) {
        default:
            break;
        case 0:
            var_r1 = &data_0214c8dc;
            break;
        case 1:
            var_r1 = &data_0214c8e4;
            break;
        case 2:
            var_r1 = &data_0214c8ec;
            break;
        case 3:
            var_r1 = &data_0214c8f4;
            break;
        case 4:
            var_r1 = &data_0214c8fc;
            break;
        case 5:
            var_r1 = &data_0214c904;
            break;
    }
    return (s32) var_r1;
}
