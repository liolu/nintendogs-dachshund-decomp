#include "m2c.h"
#include "engine.h"
extern void *data_0214cf54;
extern u8 data_0214cfe0[];
void func_0206cbc4(M2C_UNK, void *, M2C_UNK);
#pragma opt_strength_reduction off
s32 func_020092e4(M2C_UNK, M2C_UNK);
void func_020b777c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK func_020cba74(M2C_UNK);
void func_0207ca98(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_02145614[];
#pragma opt_strength_reduction off
extern s32 data_0214cf5c;
extern s32 data_0214cf58;
void func_0208831c(void *file);
s32 func_02087fcc(void *file, const void *name);
u8 *func_020038a8(s32 arg0, s32 size);
void func_02087e70(void *file, void *dst, s32 size);
void func_02087f84(void *file);
s32 func_02006b9c(s32 arg0);
void *func_02006b68(s32 arg0);
void func_02005f74(void) {
    volatile u16 tmp;

    if (data_0214cf54 == 0) {
        return;
    }
    tmp = 0xF000;
    func_0206cbc4(tmp, data_0214cfe0, 0x600);
}
