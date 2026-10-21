#include "m2c.h"
extern u16 data_0214d5fc;
extern void *data_0215a064;
extern void func_020a7de0(M2C_UNK);
extern s32 func_020b29bc(s32);
extern void func_0208ff8c(M2C_UNK);
extern void func_020b95d0(s32, s32, s32, s32);
extern void func_020b95a8(void *);
extern M2C_UNK func_020a6b10(M2C_UNK);
extern s32 func_020a6598(void);
void func_020bb734(s32 arg0) {
    u8 *p;
    s32 v;
    s32 mode;
    s32 m;

    p = (u8 *) arg0 + 0x60;
    func_020a7de0(0);
    if ((u16) (data_0214d5fc & 0xc03) != 0) {
        switch (*(s32 *) (arg0 + 0x34)) {
        case 2:
        case 3:
            v = func_020b29bc(-1);
            if (v != -1) {
                func_0208ff8c(0x4f);
                func_020b95d0(arg0, 4, v, 0);
                func_020b95a8((void *) arg0);
            }
            break;
        case 4:
            v = func_020b29bc(*(s16 *) (arg0 + 0x3e));
            if (v == -1) {
                func_0208ff8c(0x50);
                m = func_020a6b10(*(s16 *) ((u8 *) data_0215a064 + 0x7c));
                switch (m) {
                case 0:
                case 1:
                    if (func_020a6598() != 0) {
                        mode = 3;
                        break;
                    }
                default:
                    mode = 2;
                    break;
                }
                func_020b95d0(arg0, mode, -1, 0);
                func_020b95a8((void *) arg0);
            } else {
                func_0208ff8c(0x4f);
                func_020b95d0(arg0, 4, v, 0);
                func_020b95a8((void *) arg0);
            }
            break;
        }
    }
    if ((u16) (data_0214d5fc & 0x2fff) == 0
        && *(s32 *) ((u8 *) data_0215a064 + 0x34) == -1
        && *(s16 *) (arg0 + 0x3e) == -1) {
        goto skip;
    }
    *(s32 *) p = 0x4b0;
skip:
    (*(s32 *) p)--;
    if (*(s32 *) p <= 0) {
        u8 *q = (u8 *) arg0 + 0x60;
        *(s32 *) (q + 8) = 1;
        *(u16 *) (q + 4) = 0;
    }
}
