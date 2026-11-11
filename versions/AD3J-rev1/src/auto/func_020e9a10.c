/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020ed7a0(M2C_UNK, M2C_UNK);
void func_020ee5d8(M2C_UNK, M2C_UNK);
void func_020ef588(M2C_UNK, M2C_UNK);
void func_020f0a2c(M2C_UNK);

extern M2C_UNK data_02154cb8;
extern M2C_UNK data_02154dd8;

void func_020e9a10(void) {
    func_020ee5d8((s32) M2C_FIELD(&data_02154dd8, u16 *, 0x10), 0x3C);
    func_020ed7a0(0x64, 0x3C);
    func_020ef588(0x7F, 0x3C);
    func_020f0a2c(0x3C);
    M2C_FIELD(&data_02154cb8, s32 *, 0x1C) = 0;
}
