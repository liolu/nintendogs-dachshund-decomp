#include "m2c.h"
extern void func_020a7460(s32 arg0);
extern void func_020a7470(s32 arg0);
extern void func_020a8df4(s32 arg0);
void func_02101bbc(s32 arg0) {
    s32 *p;
    s32 i;

    switch (M2C_FIELD(arg0, s16 *, 0x90)) {
        case 0:
            func_020a7460(arg0);
            break;
        case 2:
            p = (s32 *) M2C_FIELD(arg0, s32 *, 0x214);
            for (i = 0; i < 6; i++) {
                p[i + 7] = 0;
            }
            func_020a7470(arg0);
            break;
        case 3:
            *(s32 *) (arg0 + 0xA8) = 0;
            break;
        case 4:
            func_020a8df4(arg0);
            break;
        case 1:
        case 5:
        case 6:
        case 7:
        case 8:
            break;
    }
}
