#include "m2c.h"

extern s8 data_0214ec20[];
M2C_UNK func_02080c28();
M2C_UNK func_0207f3ec(void *p, s32 v);
M2C_UNK func_02080c3c(s32 arg0);

extern s32 data_0215a03c;
extern void *data_0215a04c;
extern M2C_UNK (*data_02139cb4[])(M2C_UNK);
void func_0206373c(void *arg0);
s32 func_02063750(void);
s32 func_02070064(void);
s32 func_02070144(void);
void func_02111b88(void *p, s32 v);
s32 func_02065194(s32 arg0) {
    s8 *base = (s8 *) data_0214ec20;
    s32 old;
    s32 state;

    state = func_02080c28();
    old = M2C_FIELD(base, s32 *, 0x38);
    M2C_FIELD(base, s32 *, 0x38) = arg0;
    func_0207f3ec(base + 0x3C, M2C_FIELD(base, s32 *, 0x38));
    func_02080c3c(state);
    return old;
}
