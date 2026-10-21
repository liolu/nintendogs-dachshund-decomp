#include "m2c.h"
extern s32 data_0213cf48[];
extern u8 data_02154350[];
extern s32 func_020969e4(void);
extern void func_02091e0c(s32);
extern void func_02091578(void);
extern s32 func_01ffdb08(s16);
extern void func_02091e84(s32);
extern s32 func_02027530(s32);
extern void func_02070f88(void *, s32);
extern void func_0208cab8(s32, s32, s32);
void func_0208cdac(s32 arg0, s32 arg1) {
    u8 *base;
    s32 mode;
    s16 i;
    s32 o;
    s32 v;

    base = data_02154350;
    mode = *(s16 *) ((u8 *) data_0213cf48[arg0] + 2);
    i = 0;
    *(u16 *) (base + 0x36) = 0;
    *(u16 *) (base + 0x34) = (u16) arg1;
    if (mode == 0x12) {
        if (func_020969e4() != -0xb) {
            s32 busy = *(s32 *) (data_02154350 + 4) || *(s32 *) (data_02154350 + 0x2c);

            if (busy) {
                goto end;
            }
            func_02091e0c(5);
        }
    } else if (mode == 0x16) {
        if (arg1 > 0x3b) {
            func_02091578();
        } else {
            for (i = 0; i < 3; i = (s16) (i + 1)) {
                o = func_01ffdb08(i);
                if (o != 0) {
                    func_02091e84(o);
                }
            }
        }
    } else {
        for (i = 0; i < 3; i = (s16) (i + 1)) {
            o = func_01ffdb08(i);
            if (o == 0) {
                continue;
            }
            v = *(u16 *) (func_02027530(o) + 0x26);
            {
                s32 flag = 0;

                switch (mode - 0xb) {
                case 0:
                    if (v == 1) {
                        flag = 1;
                    }
                    break;
                case 1:
                    if (v == 3) {
                        flag = 1;
                    }
                    break;
                case 2:
                    if (v == 0) {
                        flag = 1;
                    }
                    break;
                case 3:
                    if (v == 4) {
                        flag = 1;
                    }
                    break;
                case 4:
                    if (v == 2) {
                        flag = 1;
                    }
                    break;
                }
                if (flag != 0) {
                    func_02091e84(o);
                }
            }
        }
    }
end:
    func_02070f88(base + 8, 0);
    func_0208cab8(arg0, arg1, 0x7f);
}
