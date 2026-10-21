#include "m2c.h"
#include "func_0210181c.h"

M2C_UNK func_020aff08(void *, s32, void *, void *, s32, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *);
s32 func_020b1d6c(u16, s32);
M2C_UNK func_020b26f0(void *, s32, s32, s32, s32, s32, s32);
void func_020b23f4(void *arg0, M2C_UNK (*arg1)(void *), void *arg2);
void func_020b2360(void *arg0, M2C_UNK arg1);
void func_020b2274(void *arg0);
void func_020b27dc(void *);
void func_021019ec(void *);
void func_02101978(void *);
extern M2C_UNK func_02101b48;
extern M2C_UNK func_02101b54;
extern M2C_UNK func_02101b70;
extern M2C_UNK func_02101ba4;
extern UnkStruct_0210181c data_02149f74;

void func_0210181c(void *arg0) {
    UnkStruct_0210181c local;
    void *p;
    void *q;

    switch (M2C_FIELD(arg0, s16 *, 0x90)) {
    case 2:
        func_020b27dc(arg0);
        break;
    case 3:
        p = M2C_FIELD(arg0, void **, 0x214);
        q = M2C_FIELD(p, void **, 0);
        func_020b26f0(arg0, M2C_FIELD(q, s32 *, 0x48), M2C_FIELD(q, s32 *, 0x4C),
                      M2C_FIELD(q, s32 *, 0x50), M2C_FIELD(q, s32 *, 0x54),
                      M2C_FIELD(q, s32 *, 0x58), 4);
        func_020aff08(arg0, M2C_FIELD(arg0, s32 *, 0xF8), arg0 + 0xFC, arg0 + 0x108,
                      func_020b1d6c(M2C_FIELD(arg0, u16 *, 0xA0), M2C_FIELD(arg0, s32 *, 0xF8)),
                      &func_02101ba4, 0, &func_02101b70, &func_02101b54, &func_02101b48);
        break;
    case 1:
        func_021019ec(arg0);
        break;
    case 4:
        local = data_02149f74;
        func_020b23f4(arg0, (M2C_UNK (*)(void *)) func_02101978, &local);
        break;
    case 5:
        func_020b2360(arg0, 0x1000);
        break;
    case 8:
        func_020b2274(arg0);
        break;
    case 0:
    case 6:
    case 7:
    default:
        break;
    }
}
