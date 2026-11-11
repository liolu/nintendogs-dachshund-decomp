/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_02003a00(void);
void func_02003aa0(void *, void *);
void func_02003cf0(s32);
void func_02003de8(s32);
void func_02003eec(void);
void func_02003fa4(u16);
void func_0200412c(void);
void func_02004270(void);
void func_02006894(void);
void func_020c92d8(void);
void func_020ca618(s32);
void func_ov028_0215a0a0(void);
void func_ov028_0215a528(void);
void func_ov028_0215ad58(void);
void func_ov028_0215ae44(void);
extern u16 data_0214d5fc;
extern s32 *data_ov028_0215bfac;
extern u8 func_ov028_0215a4f4[];
extern u8 func_ov028_0215a4f8[];

s32 func_ov028_0215a428(void) {
    s32 r4;
    u16 v;

    r4 = 1;
    func_ov028_0215a528();
    func_02003de8(0x1E);
    do {
        func_0200412c();
        func_020ca618(*data_ov028_0215bfac);
        func_ov028_0215a0a0();
        func_ov028_0215ad58();
        v = func_02003a00();
        if (v != 0) {
            v = *(u16 *) &data_0214d5fc & 8;
            if (v != 0) {
                v = *(u16 *) ((u8 *) &data_0214d5fc + 2) & 4;
                if (v != 0) {
                    r4 = 0;
                }
            }
        }
        func_02003fa4(v);
        func_02003eec();
    } while (r4 != 0);
    func_02003cf0(0x3C);
    func_02003aa0(func_ov028_0215a4f8, func_ov028_0215a4f4);
    func_ov028_0215ae44();
    func_020c92d8();
    func_02004270();
    func_02006894();
    {
        s32 *zero           = 0;
        data_ov028_0215bfac = zero;
    }
    return 0;
}
