#include "m2c.h"
extern void func_020a7924(s32, s32);
extern s32 func_020038a8(s32, s32);
extern void func_020bd108(s32, s32, s32, s32);
extern s32 func_0207837c(s32, const void *);
extern void func_020ca7d8(s32, s16, void *);
extern void func_020aa940(void);
extern void func_020a9ae4(void);
extern void func_020aaa7c(void);
extern void func_020a9a88(void);
extern void func_020ab154(void);
extern void func_020aadf8(void);
extern void func_020aad04(void);
extern void func_020aac10(void);
extern void func_020aaee8(void);
extern u8 data_0212bf80[];
extern u8 data_0212bf90[];
extern u8 data_0212bf70[];
extern u8 data_0212bfa0[];
extern u8 data_0212bfb0[];
void func_020aaa80(s32 arg0, s32 arg1) {
    s32 p;

    func_020a7924(arg0, 0x30);
    M2C_FIELD(arg0, void **, 0x1F4) = (void *) func_020aa940;
    M2C_FIELD(arg0, void **, 0x1F8) = (void *) func_020a9ae4;
    M2C_FIELD(arg0, void **, 0x1F0) = (void *) func_020aaa7c;
    M2C_FIELD(arg0, void **, 0x1FC) = (void *) func_020a9a88;
    M2C_FIELD(arg0, s32 *, 0x124) = 0x333;
    M2C_FIELD(arg0, s32 *, 0x128) = 0x800;
    M2C_FIELD(arg0, s32 *, 0x12C) = 3;
    M2C_FIELD(arg0, s32 *, 0x214) = func_020038a8(arg1, 0xB0);
    p = M2C_FIELD(arg0, s32 *, 0x214);
    func_020bd108(p, arg1, 4, 0xB33);
    M2C_FIELD(p, s32 *, 0x1C) = 0;
    func_020ca7d8(arg0, (s16) func_0207837c(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x1C), s32 *, 8) + 0x40, data_0212bf80), (void *) func_020ab154);
    func_020ca7d8(arg0, (s16) func_0207837c(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x1C), s32 *, 8) + 0x40, data_0212bf90), (void *) func_020aadf8);
    func_020ca7d8(arg0, (s16) func_0207837c(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x1C), s32 *, 8) + 0x40, data_0212bf70), (void *) func_020aad04);
    func_020ca7d8(arg0, (s16) func_0207837c(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x1C), s32 *, 8) + 0x40, data_0212bfa0), (void *) func_020aac10);
    func_020ca7d8(arg0, (s16) func_0207837c(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x1C), s32 *, 8) + 0x40, data_0212bfb0), (void *) func_020aaee8);
}
