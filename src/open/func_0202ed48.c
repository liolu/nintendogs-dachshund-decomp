#include "m2c.h"
s32 func_0202f024(s32, s32, s32);
s32 func_0202eddc(s32, s32, s32);
extern u16 data_02139a9c[];
extern M2C_UNK data_02150e58;
extern M2C_UNK data_0213b3e7;
extern M2C_UNK data_02139dd0;
s32 func_0202ed48(s32 arg0, s32 arg1, u32 arg2) {
    switch (*(s8 *) (arg0 + 0x8B)) {
    case 0:
        if (arg2 > data_02139a9c[*(s8 *) (arg0 + 0x8E)]) {
            return func_0202f024(arg0, arg1, arg2);
        }
        break;
    case 4:
    case 5:
        if (arg2 > 0x64) {
            return func_0202eddc(arg0, arg1, arg2);
        }
        break;
    case 1:
    case 2:
    case 3:
        return 0;
    }
    return 0;
}
