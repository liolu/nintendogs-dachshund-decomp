#include "m2c.h"
M2C_UNK func_020aff08(void *, s32, void *, void *, s32, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *);
s32 func_020b1d6c(u16, s32);
M2C_UNK func_020b26f0(void *, s32, s32, s32, s32, s32, s32);
void func_01ff832c(M2C_UNK, void *, void *, void *);
s32 func_02099660(void);
M2C_UNK func_0208b9c8(void *, M2C_UNK);
s32 func_0208b340(void *);
extern M2C_UNK func_020c48c4;
extern M2C_UNK func_020c48d0;
extern M2C_UNK func_020c48ec;
extern M2C_UNK func_020c4920;
extern s32 data_02140c14;
extern s32 data_02140c18;
extern void *data_0215a064;
extern void *data_021555f8;
void func_020c471c(void *arg0) {
    void *p;
    void *q;
    void *p74;
    void *p7c;
    M2C_UNK vec[6];
    M2C_UNK val;
    M2C_UNK a0;
    M2C_UNK a1;
    M2C_UNK a2;

    p = M2C_FIELD(arg0, void **, 0x214);
    q = M2C_FIELD(p, void **, 0);
    func_020b26f0(arg0, M2C_FIELD(q, s32 *, 0x48), M2C_FIELD(q, s32 *, 0x4C),
                  M2C_FIELD(q, s32 *, 0x50), M2C_FIELD(q, s32 *, 0x54),
                  M2C_FIELD(q, s32 *, 0x58), 4);
    func_020aff08(arg0, M2C_FIELD(arg0, s32 *, 0xF8), arg0 + 0xFC, arg0 + 0x108,
                  func_020b1d6c(M2C_FIELD(arg0, u16 *, 0xA0), M2C_FIELD(arg0, s32 *, 0xF8)),
                  &func_020c4920, 0, &func_020c48ec, &func_020c48d0, &func_020c48c4);
    val = data_02140c18;
    a2 = M2C_FIELD(arg0, s32 *, 0xDC);
    a1 = M2C_FIELD(arg0, s32 *, 0xD8);
    a0 = M2C_FIELD(arg0, s32 *, 0xD4);
    vec[0] = a0;
    vec[1] = a1;
    vec[2] = a2;
    a2 = M2C_FIELD(arg0, s32 *, 0xE8);
    a1 = M2C_FIELD(arg0, s32 *, 0xE4);
    a0 = M2C_FIELD(arg0, s32 *, 0xE0);
    vec[3] = a0;
    vec[4] = a1;
    vec[5] = a2;
    func_01ff832c(-val, vec, (void *) ((u8 *) arg0 + 0xBC), (void *) ((u8 *) arg0 + 0xBC));
    func_01ff832c(-data_02140c14, &vec[3], (void *) ((u8 *) arg0 + 0xBC), (void *) ((u8 *) arg0 + 0xBC));
    if ((M2C_FIELD(data_0215a064, u16 *, 0x84) & 1) &&
        (M2C_FIELD(data_021555f8, s32 *, 0x24) == 0) &&
        (M2C_FIELD(arg0, s16 *, 0x8A) == 3) &&
        (func_02099660() != 0)) {
        return;
    }
    if (M2C_FIELD(p, s32 *, 4) != 0) {
        return;
    }
    p7c = M2C_FIELD(arg0, void **, 0x7C);
    p74 = M2C_FIELD(arg0, void **, 0x74);
    M2C_FIELD(p74, s32 *, 0x20) = 0;
    M2C_FIELD(p7c, s32 *, 0xC) = 0;
    func_0208b9c8((u8 *) arg0 + 0x190, 8);
    M2C_FIELD(p, s32 *, 4) = 1;
    func_0208b340((u8 *) arg0 + 0x190);
}
