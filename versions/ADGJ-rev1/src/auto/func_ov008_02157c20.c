/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_0200399c(void);
void func_02003a3c(void *a, void *b);
void func_02003b70(void);
void func_02003cf0(void);
void func_02003e88(void);
void func_02003f40(u16 a);
void func_020040c8(void);
void func_0200420c(void);
void func_02006830(void);
void func_020c193c(void);
void func_020c21d8(void);
void func_ov008_02157ccc(void);
void func_ov008_02157ffc(void);
extern u16 data_0214affc;
extern s32 data_ov008_02158900;
extern void func_ov008_02157cc8(void);
extern void func_ov008_02157ccc(void);

s32 func_ov008_02157c20(void) {
    s32 var_r6;
    u16 var_r0;

    var_r6 = 1;
    func_ov008_02157ffc();
    func_02003cf0();
    do {
        func_020040c8();
        func_ov008_02157ccc();
        var_r0 = func_0200399c();
        if (var_r0 != 0) {
            var_r0 = data_0214affc & 8;
            if (var_r0 != 0) {
                var_r6 = 0;
            }
        }
        func_02003f40(var_r0);
        func_02003e88();
    } while (var_r6 != 0);
    func_02003b70();
    func_02003a3c(func_ov008_02157ccc, func_ov008_02157cc8);
    *(volatile u16 *) 0x04000304 |= 0x8000;
    func_020c21d8();
    func_020c193c();
    func_0200420c();
    func_02006830();
    data_ov008_02158900 = 0;
    return 0;
}
