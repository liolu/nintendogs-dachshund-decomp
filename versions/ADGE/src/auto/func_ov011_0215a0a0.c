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
void func_02006338(s32, s32, s32);
void func_02006894(void);
void func_020c6e68(void);
void func_020c7bb0(s32);
void func_020c81a4(void);
void func_020c92d8(void);
void func_ov011_0215a184(void);
void func_ov011_0215a76c(void);
extern u16 data_0214d5fc;
extern void *data_ov011_0215b3c4;
extern u8 func_ov011_0215a168[];

s32 func_ov011_0215a0a0(void) {
    s32 r4;
    u16 v;

    r4 = 1;
    func_ov011_0215a76c();
    func_02003de8(0x1E);
    do {
        func_0200412c();
        func_ov011_0215a184();
        v = func_02003a00();
        if (v != 0) {
            v = data_0214d5fc & 8;
            if (v != 0) {
                r4 = 0;
            }
        }
        func_02003fa4(v);
        func_020c7bb0(*(s32 *) ((u8 *) data_ov011_0215b3c4 + 4));
        func_02003eec();
    } while (r4 != 0);
    func_02003cf0(0x3C);
    func_02003aa0(func_ov011_0215a184, func_ov011_0215a168);
    func_020c92d8();
    func_020c6e68();
    func_020c81a4();
    func_02004270();
    func_02006894();
    data_ov011_0215b3c4 = 0;
    func_02006338(0, 0, 0);
    return 0;
}
