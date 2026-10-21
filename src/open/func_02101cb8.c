#include "m2c.h"
void func_020a7924(void *, s32);
void *func_020038a8(s32, s32);
void func_0205ece8(void *, s32, const char *);
s32 func_0207837c(void *, void *);
void func_020ca7d8(void *, s16, void (*)(void *));
s32 func_02102fd0(s32, s32);
void func_02102f2c(s32, void *);
extern M2C_UNK func_02101bbc;
extern M2C_UNK func_0210181c;
extern M2C_UNK func_02101c5c;
void func_02100f98(void *);
extern const char *data_02149f44[];
extern u8 data_02149f5c[];
void func_02101cb8(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 *t;
    s32 i;
    u8 *obj;
    s32 buf[4];
    s32 v;

    func_020a7924(arg0, (s16) arg2);
    M2C_FIELD(arg0, void **, 0x1F4) = (void *) &func_02101bbc;
    M2C_FIELD(arg0, void **, 0x1F8) = (void *) &func_0210181c;
    M2C_FIELD(arg0, void **, 0x1F0) = (void *) &func_02101c5c;
    M2C_FIELD(arg0, s32 *, 0x214) = (s32) func_020038a8((s32) arg1, 0x1E8);
    t = M2C_FIELD(arg0, s32 **, 0x214);
    if (arg0 != NULL) {
        obj = (u8 *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x1C), s32 *, 8) + 0x40);
        for (i = 0; i < 6; i++) {
            buf[0] = 0;
            buf[1] = 0;
            buf[2] = 0;
            buf[3] = 0;
            func_0205ece8(buf, 0x10, data_02149f44[i]);
            t[i + 1] = func_0207837c(obj, buf);
            v = t[i + 1];
            func_020ca7d8(arg0, (s16) v, func_02100f98);
        }
    }
    M2C_FIELD(t, u8 **, 0x1E4) = data_02149f5c + arg4 * 0xC;
    t[0] = func_02102fd0(arg3, arg4);
    func_02102f2c(arg3, arg0);
    M2C_FIELD(arg0, u16 *, 0x20) |= 0x10;
}
