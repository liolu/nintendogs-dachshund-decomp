/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov010_0215b598(void);
void func_02003de8(s32);
void func_0200412c(void);
void func_ov010_0215a190(void);
s32 func_02003a00(void);
void func_02003fa4(void);
void func_02080180(void);
void func_0206b4ac(void *, s32, s32);
void func_02003eec(void);
void func_02003cf0(s32);
void func_02003aa0(void *, void *);
void func_020c92d8(void);
void func_02004270(void);
void func_020d08ac(void);
void func_02006894(void);
void func_ov010_0215a15c(void);
extern u8 data_0214d5fc;
extern u8 *data_ov010_0215ba80;

s32 func_ov010_0215a0a0(void) {
    s32 flag;
    s32 zero;

    flag = 1;
    func_ov010_0215b598();
    func_02003de8(0x1E);
    zero = 0;
    do {
        func_0200412c();
        func_ov010_0215a190();
        if (func_02003a00() != 0) {
            if ((u16) (*(u16 *) &data_0214d5fc & 8) != 0) {
                flag = zero;
            }
        }
        func_02003fa4();
        func_02080180();
        func_0206b4ac(data_ov010_0215ba80 + 0x18, zero, 0x6000);
        func_02003eec();
    } while (flag != 0);
    func_02003cf0(0x3C);
    func_02003aa0((void *) func_ov010_0215a190, (void *) func_ov010_0215a15c);
    func_020c92d8();
    func_02004270();
    func_020d08ac();
    func_02006894();
    *(s32 *) &data_ov010_0215ba80 = 0;
    return 0;
}
