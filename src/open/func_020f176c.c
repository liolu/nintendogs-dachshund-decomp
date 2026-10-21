#include "m2c.h"
extern void func_020f1098(void *arg0);
extern void func_020dd9c4(void);
extern void func_020dd9b4(void);
extern void func_020dd9a4(void);
extern void func_020dd954(s32 arg0);
extern s32 *data_02159fc4;
void func_020f176c(s32 arg0) {
    s32 i;
    s32 *q;

    q = (s32 *) (arg0 + 0x174);
    for (i = 0; i < 3; i++) {
        if (M2C_FIELD(arg0, s32 *, 4) == i * 0x28) {
            func_020f1098((void *) (arg0 + 0xa8 + i * 0x20));
            switch (i) {
            case 0:
                func_020dd9c4();
                break;
            case 1:
                func_020dd9b4();
                break;
            case 2:
                func_020dd9a4();
                break;
            }
        }
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0x8C) {
        func_020f1098((void *) (arg0 + 0x108));
        func_020dd954(M2C_FIELD(q, u32 *, 0xC) / 100);
    }
    M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(arg0, s32 *, 4) + 1;
    if (M2C_FIELD(arg0, s32 *, 4) > 0xBE) {
        M2C_FIELD(data_02159fc4, s32 *, 0x198) = 1;
    }
}
