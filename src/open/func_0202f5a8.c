#include "m2c.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
} Unk12;

extern u8 *data_0214da84;
extern u32 data_0214da80[];
extern u8 *data_0215a064;
extern char data_02150e58[];
extern void func_01ff8980(s32);
extern void func_01ff832c(s32, void *, void *, void *);
extern void func_02037130(void *, s32);

void func_0202f5a8(u8 *arg0) {
    Unk12 pos;
    Unk12 m;
    u8 *src;

    pos.unk_00 = M2C_FIELD(data_02150e58, u32 *, 0x4C);
    pos.unk_04 = M2C_FIELD(data_02150e58, u32 *, 0x58);
    pos.unk_08 = M2C_FIELD(data_02150e58, u32 *, 0x64);
    if (M2C_FIELD(data_0214da84, s32 *, 0x64) == 0) {
        M2C_FIELD(data_0214da84, s32 *, 0x64) = data_0214da80[0];
        src = (u8 *) M2C_FIELD(data_0215a064, u8 **, 0x1C) + 0x48;
        *(Unk12 *) (data_0214da84 + 0x68) = *(Unk12 *) src;
        func_01ff8980((s32) (data_0214da84 + 0x68));
    }
    m = *(Unk12 *) (data_0214da84 + 0x68);
    func_01ff832c(0x5000, &pos, arg0 + 0x2A0, arg0 + 0x278);
    func_01ff832c(-0x5000, &m, arg0 + 0x278, arg0 + 0x278);
    *(Unk12 *) (arg0 + 0x26C) = *(Unk12 *) (arg0 + 0x2A0);
    func_02037130(arg0, 0x200);
}
