/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov009_02159118(void);
void func_02003d84(s32);
void func_020040c8(void);
void func_ov009_02157d10(void);
s32 func_0200399c(void);
void func_02003f40(void);
void func_020807c8(void);
void func_0206c8a4(void *, s32, s32);
void func_02003e88(void);
void func_02003c8c(s32);
void func_02003a3c(void *, void *);
void func_020c3cd0(void);
void func_0200420c(void);
void func_020cb050(void);
void func_02006830(void);
void func_ov009_02157cdc(void);
extern u8 data_0214affc;
extern u8 *data_ov009_02159600;

s32 func_ov009_02157c20(void) {
    s32 flag;
    s32 zero;

    flag = 1;
    func_ov009_02159118();
    func_02003d84(0x1E);
    zero = 0;
    do {
        func_020040c8();
        func_ov009_02157d10();
        if (func_0200399c() != 0) {
            if ((u16) (*(u16 *) &data_0214affc & 8) != 0) {
                flag = zero;
            }
        }
        func_02003f40();
        func_020807c8();
        func_0206c8a4(data_ov009_02159600 + 0x18, zero, 0x6000);
        func_02003e88();
    } while (flag != 0);
    func_02003c8c(0x3C);
    func_02003a3c((void *) func_ov009_02157d10, (void *) func_ov009_02157cdc);
    func_020c3cd0();
    func_0200420c();
    func_020cb050();
    func_02006830();
    *(s32 *) &data_ov009_02159600 = 0;
    return 0;
}
