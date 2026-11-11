/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov013_02158044(void);
void func_02003d84(s16);
void func_020040c8(void);
void func_ov013_02157d38(void);
u16 func_0200399c(void);
void func_02003f40(u16);
void func_020072e0(void *, s32, s32);
void func_02003e88(void);
void func_02003c8c(s16);
void func_02003a3c(void (*)(void), void *);
void func_020c3cd4(void);
void func_0200420c(void);
void func_02006830(void);
void func_020c21d8(void);
void func_02080858(s32, s32);
extern u16 data_0214affc;
extern u8 *data_ov013_021583c0;
extern void func_ov013_02157cf0(void);

s32 func_ov013_02157c20(void) {
    s32 r5;
    u16 t;
    u8 *tmp;

    r5 = 1;
    func_ov013_02158044();
    func_02003d84(0x1E);
    do {
        func_020040c8();
        func_ov013_02157d38();
        t = func_0200399c();
        if (t != 0) {
            t = data_0214affc & 8;
            if (t != 0) {
                r5 = 0;
            }
        }
        func_02003f40(t);
        tmp = *(u8 **) (data_ov013_021583c0 + 0x398);
        func_02080858(*(s32 *) tmp, *(s32 *) (tmp + 0x10));
        func_020072e0(*(void **) (data_ov013_021583c0 + 0x398), 0, 0);
        func_02003e88();
    } while (r5 != 0);
    func_02003c8c(0x3C);
    func_02003a3c(func_ov013_02157d38, func_ov013_02157cf0);
    func_020c3cd4();
    func_0200420c();
    func_02006830();
    func_020c21d8();
    data_ov013_021583c0 = NULL;
    return 0;
}
