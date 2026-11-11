#include "engine.h"
#include "m2c.h"
void func_02068770(M2C_UNK);
void func_020d6068(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0207ca98(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_02145614[];
extern M2C_UNK data_02145624[];
void func_020ec7ec(s32 arg0) {
    func_02068770(0);
    *(u16 *) 0x0400100A = (*(u16 *) 0x0400100A & 0x43) | 0x504;
    *(u16 *) 0x0400100C = (*(u16 *) 0x0400100C & 0x43) | 0x604;
    *(u16 *) 0x0400100E = (*(u16 *) 0x0400100E & 0x43) | 0x708;
    func_020d6068(2, 2, 1);
    func_020d6068(2, 4, 1);
    func_020d6068(2, 0x10, 1);
    *(u16 *) 0x04001040 = 0xFF;
    *(u16 *) 0x04001044 = 0xBF;
    *(u16 *) 0x04001042 = 0xFF;
    *(u16 *) 0x04001046 = 0xBF;
    *(s32 *) 0x04001014 = 0;
    *(s32 *) 0x04001018 = 0;
    *(u16 *) 0x0400100A &= ~0x40;
    *(u16 *) 0x0400100C &= ~0x40;
    *(u16 *) 0x0400100A = (*(u16 *) 0x0400100A & ~3) | 2;
    *(u16 *) 0x0400100C = (*(u16 *) 0x0400100C & ~3) | 3;
    func_0207ca98(0x1F, 0, M2C_FIELD(arg0, s32 *, 0xC), 0x1C0);
    func_0207ca98(M2C_FIELD(&data_02145614, s32 *, 4), 0, M2C_FIELD(arg0, s32 *, 8), 0x8000);
    func_0207ca98(M2C_FIELD(&data_02145624, s32 *, 4), 0, M2C_FIELD(arg0, s32 *, 0x14), 0x800);
    func_0207ca98(M2C_FIELD(&data_02145614, s32 *, 8), 0, M2C_FIELD(arg0, s32 *, 8), 0x8000);
    func_0207ca98(M2C_FIELD(&data_02145624, s32 *, 8), 0, M2C_FIELD(arg0, s32 *, 0x18), 0x800);
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
