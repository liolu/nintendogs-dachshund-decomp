#include "m2c.h"

extern void *data_0215a064;
extern void func_020c39f8(void);
extern void func_020b27dc(void);
extern void func_020b26f0(s32, s32, s32, s32, s32, s32, s32);
extern void func_020aff08(s32, s32, s32 *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 func_020b1d6c(u16, s32);
extern void func_0208b7b0(s32, s16, s32);
extern void func_020c3f04(void);
extern void func_020c3b7c(void);
extern void func_020c3b60(void);
extern void func_020c3b54(void);

void func_020c38e4(s32 arg0) {
    u8 *obj;
    s32 *m;
    s32 v;

    switch (*(s16 *) (arg0 + 0x90)) {
    case 0:
        break;
    case 1:
        func_020c39f8();
        break;
    case 2:
        func_020b27dc();
        break;
    case 3:
        obj = *(u8 **) (arg0 + 0x214);
        m = *(s32 **) obj;
        func_020b26f0(arg0, m[0x12], m[0x13], m[0x14], m[0x15], m[0x16], 4);
        func_020aff08(arg0, *(s32 *) (arg0 + 0xF8), (s32 *) (arg0 + 0xFC), (M2C_UNK) (arg0 + 0x108),
                      func_020b1d6c(*(u16 *) (arg0 + 0xA0), *(s32 *) (arg0 + 0xF8)),
                      (M2C_UNK) func_020c3f04, 0, (M2C_UNK) func_020c3b7c,
                      (M2C_UNK) func_020c3b60, (M2C_UNK) func_020c3b54);
        v = M2C_FIELD(obj, s32 *, 8);
        func_0208b7b0(arg0 + 0x190, (s16) v,
                      M2C_FIELD(data_0215a064, s32 *, 0x94) * M2C_FIELD(data_0215a064, s32 *, 0x94)
                          + M2C_FIELD(data_0215a064, s32 *, 0x98) * M2C_FIELD(data_0215a064, s32 *, 0x98));
        break;
    default:
        break;
    }
}
