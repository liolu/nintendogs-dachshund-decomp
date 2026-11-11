/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020ebbdc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020df8b4(s32 arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x10);
    switch (temp_r1) {                              /* irregular */
        case 0:
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
            if (M2C_FIELD(arg0, s32 *, 0) == 0x4B) {
                M2C_FIELD(arg0, s32 *, 0xC)  = -0x1000;
                M2C_FIELD(arg0, s32 *, 0)    = 0;
                M2C_FIELD(arg0, s32 *, 0x10) = 1;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 0x80);
            M2C_FIELD(arg0, s32 *, 8)   = (s32) (M2C_FIELD(arg0, s32 *, 8) + M2C_FIELD(arg0, s32 *, 0xC));
            if ((s32) M2C_FIELD(arg0, s32 *, 0xC) > 0) {
                M2C_FIELD(arg0, s32 *, 0x10) = 2;
                M2C_FIELD(arg0, s32 *, 0xC)  = 0;
            }
            break;
        case 2:
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 0x800);
            M2C_FIELD(arg0, s32 *, 8)   = (s32) (M2C_FIELD(arg0, s32 *, 8) + M2C_FIELD(arg0, s32 *, 0xC));
            if ((s32) M2C_FIELD(arg0, s32 *, 8) > 0) {
                if (M2C_FIELD(arg0, s32 *, 4) != 0) {
                    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
                    M2C_FIELD(arg0, s32 *, 8)    = 0;
                    M2C_FIELD(arg0, s32 *, 4)    = 0;
                    M2C_FIELD(arg0, s32 *, 0x10) = 0;
                } else {
                    M2C_FIELD(arg0, s32 *, 0xC) = -0x3000;
                    M2C_FIELD(arg0, s32 *, 8)   = 0;
                    M2C_FIELD(arg0, s32 *, 4)   = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
                }
            }
            break;
    }
    func_020ebbdc(0, 0, 0, (s32) (M2C_FIELD(arg0, s32 *, 8) * 0x10) >> 0x10);
}
