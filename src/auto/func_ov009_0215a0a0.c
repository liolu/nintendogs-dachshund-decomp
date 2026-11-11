/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_02003a00(void);
void func_02003aa0(void *a, void *b);
void func_02003bd4(void);
void func_02003d54(void);
void func_02003eec(void);
void func_02003fa4(u16 a);
void func_0200412c(void);
void func_02004270(void);
void func_02006894(void);
void func_020c6e68(void);
void func_020c7740(void);
void func_ov009_0215a14c(void);
void func_ov009_0215a47c(void);
extern u16 data_0214d5fc;
extern s32 data_ov009_0215ad80;
extern void func_ov009_0215a148(void);
extern void func_ov009_0215a14c(void);

s32 func_ov009_0215a0a0(void) {
    s32 var_r6;
    u16 var_r0;

    var_r6 = 1;
    func_ov009_0215a47c();
    func_02003d54();
    do {
        func_0200412c();
        func_ov009_0215a14c();
        var_r0 = func_02003a00();
        if (var_r0 != 0) {
            var_r0 = data_0214d5fc & 8;
            if (var_r0 != 0) {
                var_r6 = 0;
            }
        }
        func_02003fa4(var_r0);
        func_02003eec();
    } while (var_r6 != 0);
    func_02003bd4();
    func_02003aa0(func_ov009_0215a14c, func_ov009_0215a148);
    *(volatile u16 *) 0x04000304 |= 0x8000;
    func_020c7740();
    func_020c6e68();
    func_02004270();
    func_02006894();
    data_ov009_0215ad80 = 0;
    return 0;
}
