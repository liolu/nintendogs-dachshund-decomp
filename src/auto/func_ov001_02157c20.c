/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov001_02157cf0(void);
void func_02003d84(s32);
void func_020040c8(void);
void func_ov001_021581d8(void);
void func_020a442c(void);
s32 func_ov001_02157fb4(void);
void func_02003f40(void);
void func_ov001_02157fc8(void);
void func_020a4074(void);
void func_0207d160(void);
void func_020a3f8c(void);
void func_02003e88(void);
void func_02003a3c(void *, void *);
void func_02007540(void);
void func_0200420c(void);
void func_02006830(void);
void func_020c66ac(void);
void func_020afb3c(void);
void func_020a3f64(void);
extern void func_ov001_02157cd4(void);
extern void func_ov001_02157cb0(void);

s32 func_ov001_02157c20(void) {
    s32 r5;
    s32 r4;

    r5 = 1;
    func_ov001_02157cf0();
    func_02003d84(0x1E);
    r4 = 0;
    do {
        func_020040c8();
        func_ov001_021581d8();
        func_020a442c();
        if (func_ov001_02157fb4() != 0) {
            r5 = r4;
        }
        func_02003f40();
        func_ov001_02157fc8();
        func_020a4074();
        func_0207d160();
        func_020a3f8c();
        func_02003e88();
    } while (r5 != 0);
    func_02003a3c((void *) func_ov001_02157cd4, (void *) func_ov001_02157cb0);
    func_02007540();
    func_0200420c();
    func_02006830();
    func_020c66ac();
    func_020afb3c();
    func_020a3f64();
    return 0;
}
