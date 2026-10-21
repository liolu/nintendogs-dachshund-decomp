#include "m2c.h"
extern void *data_02159e70;
extern void func_020ddd58(s32 arg0, s32 arg1);
extern void func_020df48c(void *arg0);
extern void func_020e38c8(s32 arg0);
extern void func_020e315c(s32 arg0);
void func_020e2c78(s32 arg0) {
    if (M2C_FIELD((u8 *) arg0 + 0x1C48, s32 *, 8) != 0) {
        func_020ddd58(arg0, M2C_FIELD((u8 *) arg0 + 0x1C48, s32 *, 8));
        M2C_FIELD((u8 *) arg0 + 0x1C48, s32 *, 8) = 0;
    }
    func_020df48c((void *) (arg0 + 0xC));
    switch (M2C_FIELD(data_02159e70, s32 *, 0xA8)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 7:
        case 8:
            break;
        case 5:
            func_020e38c8(arg0);
            break;
        case 6:
            func_020e315c(arg0);
            break;
    }
}
