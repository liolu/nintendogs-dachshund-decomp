/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_0200399c(void);
void func_02003a3c(void *, void *);
void func_02003c8c(s32);
void func_02003d84(s32);
void func_02003e88(void);
void func_02003f40(u16);
void func_020040c8(void);
void func_0200420c(void);
void func_02006830(void);
void func_020c3cd4(void);
void func_020c5014(s32);
void func_ov024_02157c20(void);
void func_ov024_02158150(void);
void func_021212e8(void);
void func_02121478(void);
extern u16 data_0214affc;
extern s32 *data_ov024_02158370;
extern u8 func_ov024_0215811c[];
extern u8 func_ov024_02158120[];

s32 func_ov024_02158050(void) {
    s32 r4;
    u16 v;

    r4 = 1;
    func_ov024_02158150();
    func_02003d84(0x1E);
    do {
        func_020040c8();
        func_020c5014(*data_ov024_02158370);
        func_ov024_02157c20();
        func_021212e8();
        v = func_0200399c();
        if (v != 0) {
            v = *(u16 *) &data_0214affc & 8;
            if (v != 0) {
                v = *(u16 *) ((u8 *) &data_0214affc + 2) & 4;
                if (v != 0) {
                    r4 = 0;
                }
            }
        }
        func_02003f40(v);
        func_02003e88();
    } while (r4 != 0);
    func_02003c8c(0x3C);
    func_02003a3c(func_ov024_02158120, func_ov024_0215811c);
    func_02121478();
    func_020c3cd4();
    func_0200420c();
    func_02006830();
    {
        s32 *zero           = 0;
        data_ov024_02158370 = zero;
    }
    return 0;
}
