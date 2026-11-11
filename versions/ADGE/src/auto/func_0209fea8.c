/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0208ff8c(M2C_UNK);
void func_020a0378(M2C_UNK);
void func_020a05c8(M2C_UNK);
void func_020a0bf0(M2C_UNK);
void func_020a0e0c(M2C_UNK);

void func_0209fea8(s32 arg0) {
    s32 temp_r4;
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u32 *, 0x38);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x48);
    switch (temp_r1) {
        default:
            break;
        case 0:
            func_020a0e0c(arg0);
            break;
        case 1:
            func_020a0bf0(arg0);
            break;
        case 2:
            func_020a05c8(arg0);
            break;
        case 3:
            func_020a0378(arg0);
            break;
    }
    if (temp_r4 == M2C_FIELD(arg0, s32 *, 0x48)) {
        return;
    }
    func_0208ff8c(0xF);
}
