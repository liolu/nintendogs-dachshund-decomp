#include "m2c.h"

typedef struct {
    s32 x[3];
} S12;

extern u8 *data_021555f4;
extern void func_020b96fc(void *arg0, void *arg1);
extern void func_020b89c4(void *arg0, void *arg1);
extern s32 func_020a7e24(void);
extern void func_020bd634(void *arg0, void *arg1);
void func_020a5c2c(s32 *arg0) {
    u8 *p = data_021555f4;

    switch (M2C_FIELD(p, s32 *, 0x7C)) {
        case 0:
        case 4:
        case 7:
            func_020b96fc(p + 0x88, arg0);
            break;
        case 5:
            func_020b89c4(p + 0x144, arg0);
            break;
        case 1:
        case 2:
        case 3: {
            s32 r = func_020a7e24();
            arg0[0] = 0;
            arg0[1] = 0;
            arg0[2] = r;
            break;
        }
        case 6:
        case 8:
            *(S12 *) arg0 = *(S12 *) (p + 0x30);
            break;
        case 10:
            func_020bd634(p + 0x21C, arg0);
            break;
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
            *(S12 *) arg0 = *(S12 *) (p + 0x30);
            break;
        case 9:
        case 11:
        case 12:
        case 13:
            break;
    }
}
