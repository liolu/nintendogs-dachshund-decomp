/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov014_0215a4c4(void);
void func_02003de8(s16);
void func_0200412c(void);
void func_ov014_0215a1b8(void);
u16 func_02003a00(void);
void func_02003fa4(u16);
void func_02007344(void *, s32, s32);
void func_02003eec(void);
void func_02003cf0(s16);
void func_02003aa0(void (*)(void), void *);
void func_020c92d8(void);
void func_02004270(void);
void func_02006894(void);
void func_020c7740(void);
void func_0208022c(s32, s32);
extern u16 data_0214d5fc;
extern u8 *data_ov014_0215a840;
extern void func_ov014_0215a170(void);

s32 func_ov014_0215a0a0(void) {
    s32 r5;
    u16 t;
    u8 *tmp;

    r5 = 1;
    func_ov014_0215a4c4();
    func_02003de8(0x1E);
    do {
        func_0200412c();
        func_ov014_0215a1b8();
        t = func_02003a00();
        if (t != 0) {
            t = data_0214d5fc & 8;
            if (t != 0) {
                r5 = 0;
            }
        }
        func_02003fa4(t);
        tmp = *(u8 **) (data_ov014_0215a840 + 0x398);
        func_0208022c(*(s32 *) tmp, *(s32 *) (tmp + 0x10));
        func_02007344(*(void **) (data_ov014_0215a840 + 0x398), 0, 0);
        func_02003eec();
    } while (r5 != 0);
    func_02003cf0(0x3C);
    func_02003aa0(func_ov014_0215a1b8, func_ov014_0215a170);
    func_020c92d8();
    func_02004270();
    func_02006894();
    func_020c7740();
    data_ov014_0215a840 = NULL;
    return 0;
}
