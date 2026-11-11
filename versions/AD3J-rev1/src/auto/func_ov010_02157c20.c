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
void func_020062d4(s32, s32, s32);
void func_02006830(void);
void func_020c1938(void);
void func_020c2604(s32);
void func_020c2bf8(void);
void func_020c3cd0(void);
void func_ov010_02157d04(void);
void func_ov010_021582ec(void);
extern u16 data_0214affc;
extern void *data_ov010_02158f44;
extern u8 func_ov010_02157ce8[];

s32 func_ov010_02157c20(void) {
    s32 r4;
    u16 v;

    r4 = 1;
    func_ov010_021582ec();
    func_02003d84(0x1E);
    do {
        func_020040c8();
        func_ov010_02157d04();
        v = func_0200399c();
        if (v != 0) {
            v = data_0214affc & 8;
            if (v != 0) {
                r4 = 0;
            }
        }
        func_02003f40(v);
        func_020c2604(*(s32 *) ((u8 *) data_ov010_02158f44 + 4));
        func_02003e88();
    } while (r4 != 0);
    func_02003c8c(0x3C);
    func_02003a3c(func_ov010_02157d04, func_ov010_02157ce8);
    func_020c3cd0();
    func_020c1938();
    func_020c2bf8();
    func_0200420c();
    func_02006830();
    data_ov010_02158f44 = 0;
    func_020062d4(0, 0, 0);
    return 0;
}
