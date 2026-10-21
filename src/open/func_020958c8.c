#include "m2c.h"
extern char data_02154664[];
extern void *data_021545d8;
void *func_02094890(void *, void *);                /* extern */
typedef struct Rec_020958c8 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} Rec_020958c8;
s32 func_020958c8(void *arg0, u32 arg1, s32 arg2) {
    u32 i;
    u8 *x;
    s32 max;
    s32 j;

    i = 0;
    max = 0;
    if (arg1 != 0) {
        u8 **p = (u8 **) data_02154664;
        do {
            *(s32 *) ((u8 *) arg0 + 0x84) = 0;
            if (arg1 & 1) {
                *(s32 *) (((u8 **) data_02154664)[i] + 4) = arg2;
                if (p != 0) {
                    x = func_02094890(*(void **) &data_021545d8, ((u8 **) data_02154664)[i]);
                } else {
                    x = 0;
                }
                *(s32 *) ((u8 *) arg0 + 0x80) = *(s32 *) (x + 0x80);
                *(s32 *) ((u8 *) arg0 + 0x84) = *(s32 *) (x + 0x84);
                for (j = 0; j < *(volatile s32 *) (x + 0x80); j++) {
                    ((Rec_020958c8 *) arg0)[j] = ((Rec_020958c8 *) x)[j];
                }
                if (max < *(s32 *) (x + 0x80)) {
                    max = *(s32 *) (x + 0x80);
                }
            }
            arg0 = (u8 *) arg0 + 0x88;
            p++;
            i++;
            arg1 >>= 1;
        } while (arg1 != 0);
    }
    return -(max == 0);
}
