/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020b5024(M2C_UNK, M2C_UNK);
void func_020b8b0c(s32, s32, s32);
void func_020b91bc(s32, s32);
void func_020b9218(M2C_UNK, M2C_UNK);
void func_020b93d4(s32, s32);
void func_020b9408(M2C_UNK, M2C_UNK);
void func_020bdd48(s32, s32, s32, s32, u16, u16, s32, s16, s16, s16, s16);
void func_020bf864(void);

extern M2C_UNK data_02140e44;
extern M2C_UNK data_02140e58;
extern M2C_UNK data_02140e6c;
extern M2C_UNK data_02140e80;

void func_020bf734(s32 arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r7;

    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    temp_r5                      = func_020b5024(9, (s32) &data_02140e44);
    temp_r7                      = func_020b5024(9, (s32) &data_02140e58);
    temp_r6                      = func_020b5024(9, (s32) &data_02140e6c);
    temp_r5_2                    = func_020b5024(9, (s32) &data_02140e80);
    func_020b93d4(0, temp_r5);
    func_020b9408(0, temp_r7);
    func_020b9218(0, temp_r6);
    func_020b91bc(0, temp_r5_2);
    func_020bdd48(arg0 + 8, 2, 0xFFFF, 0, 0U, 0U, 0, 0, 0, 0xA, 0xA);
    M2C_FIELD(arg0, void (**)(), 0x34) = func_020bf864;
    func_020b8b0c(0, 0, 0);
    func_020b8b0c(0, 3, 0);
    func_020b8b0c(0, 1, 0);
    func_020b8b0c(0, 2, 0);
}
