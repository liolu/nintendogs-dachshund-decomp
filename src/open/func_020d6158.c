#include "m2c.h"

extern void *data_02159e70;
s32 func_020e7ec4(s32, s32);
s32 func_02006b9c(s32);
s32 func_02006b68(s32);
s32 func_02073a38(s32, s32 *);

void func_020d6158(void *arg0, const char *arg1, const char *arg2, const char *arg3, const char *arg4) {
    s32 pltt;
    s32 chara;
    s32 i;
    s32 local[2];
    s32 temp;
    s32 *s;

    s = (s32 *) ((s8 *) data_02159e70 + 0x1E10);
    pltt = func_020e7ec4((s32) arg0, (s32) arg1);
    chara = func_020e7ec4((s32) arg0, (s32) arg2);
    local[0] = func_020e7ec4((s32) arg0, (s32) arg3);
    local[1] = func_020e7ec4((s32) arg0, (s32) arg4);

    chara = func_02006b9c(chara);
    s[2] = M2C_FIELD(chara, s32 *, 0x14);
    s[1] = M2C_FIELD(chara, s32 *, 0x10);
    pltt = func_02006b68(pltt);
    s[3] = M2C_FIELD(pltt, s32 *, 0xC);
    s[6] = 0;
    s[7] = 0;

    for (i = 0; i < 2; i++) {
        if (func_02073a38(local[i], &temp) != 0) {
            local[i] = temp + 0xC;
        }
        s[4 + i] = local[i];
    }
    s[0] = 1;
}
