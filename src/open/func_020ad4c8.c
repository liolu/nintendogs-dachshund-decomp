#include "m2c.h"
extern s32 data_0213eaa0;
extern void func_020a7460(s32 arg0);
extern void func_020a7470(s32 arg0);
extern void func_020a7fdc(s32 arg0, void *arg1);
extern void func_020ad578(s32 arg0);
void func_020ad4c8(s32 arg0) {
    s32 *p;

    switch (M2C_FIELD(arg0, s16 *, 0x90)) {
        case 0:
            func_020a7460(arg0);
            break;
        case 2:
            p = (s32 *) M2C_FIELD(arg0, s32 *, 0x214);
            func_020a7470(arg0);
            p[3] = data_0213eaa0;
            break;
        case 3:
            p = (s32 *) M2C_FIELD(arg0, s32 *, 0x214);
            func_020a7fdc(arg0, (void *) (arg0 + 0xC8));
            *(s32 *) (arg0 + 0xA8) = 0;
            p[3] = data_0213eaa0;
            break;
        case 4:
            func_020ad578(arg0);
            break;
        case 1:
        case 5:
        case 6:
        case 7:
        case 8:
            break;
    }
}
