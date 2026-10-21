#include "m2c.h"
s32 func_02070064(void);
s32 func_02070144(void);
extern s8 data_0214ec20[];
extern s32 data_0215a03c;
extern void *data_0215a04c;
extern M2C_UNK (*data_02139cb4[])(M2C_UNK);
void func_0206373c(void *arg0);
s32 func_02063750(void);
M2C_UNK func_02080c28();
M2C_UNK func_0207f3ec(void *p, s32 v);
M2C_UNK func_02080c3c(s32 arg0);
void func_02111b88(void *p, s32 v);
s32 func_0206eda0(u32 arg0, s32 arg1) {
    s32 *node = (s32 *) func_02070064();

    if (arg0 < 0x3e8) {
        s32 i = 0;
        while (1) {
            if (node == 0) {
                break;
            }
            if (i == arg0) {
                return arg1 * func_02070144() + (s32) node;
            }
            i = i + 1;
            node = *(s32 **) ((u8 *) node + 0x28);
        }
        return 0;
    }
    while (node != 0) {
        if (*node == arg0) {
            node = *(s32 **) ((u8 *) node + 0x2c);
            return arg1 * func_02070144() + (s32) node;
        }
        node = *(s32 **) ((u8 *) node + 0x28);
    }
    return 0;
}
