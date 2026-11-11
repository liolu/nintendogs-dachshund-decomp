/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov001_0215a170(void);
void func_02003de8(s32);
void func_0200412c(void);
void func_ov001_0215a660(void);
void func_020d6a50(void);
s32 func_ov001_0215a434(void);
void func_02003fa4(void);
void func_ov001_0215a448(void);
void func_020d6688(void);
void func_0207cb18(void);
void func_020d65a0(void);
void func_02003eec(void);
void func_02003aa0(void *, void *);
void func_020075a4(void);
void func_02004270(void);
void func_02006894(void);
void func_020cbd60(void);
void func_020e2810(void);
void func_020d6578(void);
extern void func_ov001_0215a154(void);
extern void func_ov001_0215a130(void);

s32 func_ov001_0215a0a0(void) {
    s32 r5;
    s32 r4;

    r5 = 1;
    func_ov001_0215a170();
    func_02003de8(0x1E);
    r4 = 0;
    do {
        func_0200412c();
        func_ov001_0215a660();
        func_020d6a50();
        if (func_ov001_0215a434() != 0) {
            r5 = r4;
        }
        func_02003fa4();
        func_ov001_0215a448();
        func_020d6688();
        func_0207cb18();
        func_020d65a0();
        func_02003eec();
    } while (r5 != 0);
    func_02003aa0((void *) func_ov001_0215a154, (void *) func_ov001_0215a130);
    func_020075a4();
    func_02004270();
    func_02006894();
    func_020cbd60();
    func_020e2810();
    func_020d6578();
    return 0;
}
