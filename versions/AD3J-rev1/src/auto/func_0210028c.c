/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020f07b4(M2C_UNK);
void func_0210075c(M2C_UNK);
void func_021009ac(M2C_UNK);
void func_02100fd0(M2C_UNK);
void func_021011ec(M2C_UNK);

void func_0210028c(s32 arg0) {
    s32 temp_r4;
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u32 *, 0x38);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x48);
    switch (temp_r1) {
        default:
            break;
        case 0:
            func_021011ec(arg0);
            break;
        case 1:
            func_02100fd0(arg0);
            break;
        case 2:
            func_021009ac(arg0);
            break;
        case 3:
            func_0210075c(arg0);
            break;
    }
    if (temp_r4 == M2C_FIELD(arg0, s32 *, 0x48)) {
        return;
    }
    func_020f07b4(0xF);
}
