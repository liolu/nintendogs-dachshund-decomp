#include "m2c.h"

extern M2C_UNK data_0215422c;

typedef struct {
    u8 unk00[0x1A];
    u16 unk1A;
    u8 unk1C[0x1C];
    s32 unk38;
    u16 unk3C;
} UnkStruct_0215422c;

void func_0208d540(void);
void func_02090ac0(void);
void func_02091f0c(void);
void func_020701f8(void);
void func_02089388(void) {
    M2C_UNK *p = &data_0215422c;
    M2C_UNK *q;

    func_0208d540();
    func_02090ac0();
    func_02091f0c();
    q = p;
    M2C_FIELD(q, u16 *, 0x1A) = M2C_FIELD(q, u16 *, 0x1A) + 1;
    if (M2C_FIELD(q, u16 *, 0x1A) >= 3) {
        M2C_FIELD(q, u16 *, 0x1A) = 0;
    }
    if (M2C_FIELD(p, s32 *, 0x38) != 0) {
        M2C_FIELD(p, u16 *, 0x3C) = M2C_FIELD(p, u16 *, 0x3C) + 1;
        if (M2C_FIELD(p, u16 *, 0x3C) > 0xE10) {
            M2C_FIELD(p, u16 *, 0x3C) = 0;
            M2C_FIELD(p, s32 *, 0x38) = 0;
        }
    }
    func_020701f8();
}
