#include "engine.h"
#include "m2c.h"
extern void *data_021510bc;
extern void func_02079730(void *, s32, s32, void *, void *);
void func_02079d3c(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 buf[7];
    s32 max = *(u16 *) ((s8 *) M2C_FIELD(arg1, s8 **, 8) + 4) << 12;
    s32 v = *arg1;
    s32 flag;
    void *rs;

    if (v >= max) {
        v = max - 1;
    } else if (v < 0) {
        v = 0;
    }
    func_02079730(M2C_FIELD(arg1, void **, 8), arg2, v, arg0, buf);
    flag = (*arg0 & 1) ? 4 : 0;
    rs = data_021510bc;
    ((void (*)(s32 *, s32 *, void *, s32)) M2C_FIELD(rs, s32 *, 0xE8))(arg0, buf, M2C_FIELD(rs, void **, 0), flag);
}
