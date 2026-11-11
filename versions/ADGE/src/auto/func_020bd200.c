/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020b2da0(M2C_UNK, M2C_UNK);
void func_020ba364(M2C_UNK, M2C_UNK);
void func_020bd278(M2C_UNK, M2C_UNK);
void func_020bd3bc(M2C_UNK, M2C_UNK);

void func_020bd200(s32 arg0, s32 arg1) {
    u8 sp0[40];
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_r2) {                              /* irregular */
        case 0:
            M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) + 0x20);
            func_020b2da0((s32) sp0, (s32) M2C_FIELD(arg0, u16 *, 4));
            break;
        case 1:
            func_020bd3bc(arg0, (s32) sp0);
            break;
        case 2:
            func_020bd278(arg0, (s32) sp0);
            break;
    }
    func_020ba364((s32) sp0, arg1);
}
