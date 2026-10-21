#include "m2c.h"
s32 func_02002e50(void);
s32 func_02002e48(s32);
void func_020068b4(M2C_UNK, M2C_UNK);
void func_020068b0(M2C_UNK, M2C_UNK);
s32 func_020066f0(u32, s32);
void func_02006890(void);
void func_020067c8(void);
void func_02006724(void);
void func_02005e08(M2C_UNK);
s32 func_0200562c(M2C_UNK, M2C_UNK);
void func_020055fc(s32, s32, s32, s32, s32, s32, s32, s32);
void func_020042d8(M2C_UNK);
void func_020058f0(void);
void func_020c0aec(void);
void func_0200412c(void);
s32 func_020c0ab8(void);
void func_02003fa4(void);
void func_02003eec(void);
void func_02004270(void);
void func_02006894(void);
s32 func_02124ad8(void) {
    u16 pair[2];
    s16 cfg[20];
    s32 h;
    s32 p;
    s32 flag;

    flag = 1;
    h = func_02002e48(func_02002e50());
    pair[0] = 0xFF;
    pair[1] = 0;
    func_020068b4(h, (s32) pair);
    func_020068b0(h, 4);
    func_020066f0(0, (s32) func_02006890);
    func_020066f0(1, (s32) func_020067c8);
    func_020066f0(2, (s32) func_02006724);
    func_02005e08((s32) (s8 *) cfg);
    cfg[1] = 1;
    cfg[3] = 1;
    cfg[4] = 0;
    cfg[5] = 0;
    cfg[7] = 0xF;
    cfg[8] = 0x70;
    p = func_0200562c(h, (s32) cfg);
    func_020055fc(p + 0x2C, 1, 0, 0, 1, 5, 1, 0);
    func_020042d8(p);
    func_020058f0();
    func_020c0aec();
    do {
        func_0200412c();
        if (func_020c0ab8() != 0) {
            flag = 0;
        }
        func_02003fa4();
        func_02003eec();
    } while (flag != 0);
    func_02004270();
    func_02006894();
    return 0;
}
