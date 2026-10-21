#include "m2c.h"
#include "engine.h"
extern void func_02068770(s32);
extern void func_020d6068(s32, s32, s32);
extern void func_0207ca98(s32, s32, s32, s32);
extern M2C_UNK data_02145614;
extern M2C_UNK data_02145624;
void func_020ec9a8(s32 arg0) {
    func_02068770(0);
    *(u16 *) 0x400100A = (*(u16 *) 0x400100A & 0x43) | 0x504;
    *(u16 *) 0x400100C = (*(u16 *) 0x400100C & 0x43) | 0x604;
    *(u16 *) 0x400100E = (*(u16 *) 0x400100E & 0x43) | 0x708;
    func_020d6068(2, 2, 0);
    func_020d6068(2, 4, 1);
    func_020d6068(2, 0x10, 1);
    *(u16 *) 0x4001040 = 0xFF;
    *(u16 *) 0x4001044 = 0xBF;
    *(u16 *) 0x4001042 = 0xFF;
    *(u16 *) 0x4001046 = 0xBF;
    *(u32 *) 0x4001014 = 0;
    *(u32 *) 0x4001018 = 0;
    *(u16 *) 0x400100A &= ~0x40;
    *(u16 *) 0x400100C &= ~0x40;
    *(u16 *) 0x400100A = (*(u16 *) 0x400100A & ~3) | 2;
    *(u16 *) 0x400100C = (*(u16 *) 0x400100C & ~3) | 3;
    func_0207ca98(0x1F, 0, M2C_FIELD(arg0, s32 *, 0xC), 0x1C0);
    func_0207ca98(M2C_FIELD(&data_02145614, s32 *, 8), 0, M2C_FIELD(arg0, s32 *, 8), 0x8000);
    func_0207ca98(M2C_FIELD(&data_02145624, s32 *, 8), 0, M2C_FIELD(arg0, s32 *, 0x18), 0x800);
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
