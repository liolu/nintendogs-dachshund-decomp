#include "m2c.h"

void func_020a7924(void *, s32);
void *func_020038a8(s32, s32);
void func_0205ece8(void *, s32, const char *);
s32 func_0207837c(void *, void *);
void func_020ca7d8(void *, s16, void (*)(void *));
s32 func_02102fd0(s32);
void func_02102f2c(s32, void *);
extern M2C_UNK func_020fa584;
extern M2C_UNK func_020fa0d4;
extern M2C_UNK func_020fa624;
void func_020f98a8(void *);
extern const char *data_02149c3c[];

void func_020fa630(void *arg0, M2C_UNK arg1) {
    s32 *p;
    s32 i;
    u8 *base;

    func_020a7924(arg0, 0x32);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = &func_020fa584;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F8) = &func_020fa0d4;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = &func_020fa624;
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) func_020038a8(arg1, 0x234);
    p = M2C_FIELD(arg0, s32 **, 0x214);
    if (arg0 != 0) {
        base = (u8 *) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x8) + 0x40);
        for (i = 0; i < 7; i++) {
            u32 buf[4];

            buf[0] = 0;
            buf[1] = 0;
            buf[2] = 0;
            buf[3] = 0;
            func_0205ece8(buf, 0x10, data_02149c3c[i]);
            p[i + 1] = func_0207837c(base, buf);
            func_020ca7d8(arg0, (s16) p[i + 1], func_020f98a8);
        }
    }
    p[0] = func_02102fd0(0x21);
    func_02102f2c(0x21, arg0);
    M2C_FIELD(arg0, u16 *, 0x20) |= 0x10;
}
