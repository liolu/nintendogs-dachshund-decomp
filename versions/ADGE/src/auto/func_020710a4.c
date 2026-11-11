/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020021f8(M2C_UNK);
void func_02002210(M2C_UNK);
void func_02071070(M2C_UNK);
void func_020c4fd4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020c5538(void);
void func_020c5608(M2C_UNK);
void func_020c5698(M2C_UNK);

void func_020710a4(s32 arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_020c4fd4(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_02002210(arg0 + 8);
        func_020021f8(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = func_020c5538();
        func_020c5698(1);
        func_020c5608(temp_r5);
    }
    func_02071070(arg0);
}
