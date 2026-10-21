#include "m2c.h"
s32 func_020bfecc(s32 arg0);
s32 func_020645f0(s32 port, s32 callback, s32 arg);
s32 func_020bfd2c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, u16 arg4, u16 arg5, u16 *arg6);
void func_020bd758(s32 arg0);
void func_020bd8fc(s32 arg0);
extern void *data_02155660;
void func_020bd9bc(s32 arg0) {
    M2C_UNK (*temp_r1)(s32);
    u16 sp0c;
    u16 cmd;
    s32 chk;
    u16 val;

    if (func_020bfecc(arg0) != 0) {
        switch (M2C_FIELD(data_02155660, s32 *, 0x24)) {
        case 1:
        case 2:
            if (M2C_FIELD(data_02155660, s16 *, 0x30) == 0) {
                M2C_FIELD(data_02155660, s16 *, 0x30) = 1;
            }
            return;
        case 3:
            switch (M2C_FIELD(arg0, u16 *, 0x8)) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 8:
                break;
            case 7:
                temp_r1 = M2C_FIELD(data_02155660, M2C_UNK(**)(s32), 0x18);
                if (temp_r1 != NULL) {
                    temp_r1(arg0);
                }
                if (M2C_FIELD(data_02155660, s32 *, 0x20) == 3) {
                    return;
                }
                sp0c = func_020645f0(5, (s32)func_020bd758, 0);
                if (sp0c != 0) {
                    return;
                }
                func_020bfd2c((M2C_UNK)func_020bd8fc, M2C_FIELD(data_02155660, s32 *, 0x10),
                              (u16)M2C_FIELD(data_02155660, s32 *, 0xC),
                              M2C_FIELD(data_02155660, s32 *, 0x8),
                              (u16)M2C_FIELD(data_02155660, s32 *, 0x4), 0, &sp0c);
                return;
            case 9:
                if (M2C_FIELD(data_02155660, s32 *, 0x2C) == 1) {
                    return;
                }
                M2C_FIELD(data_02155660, s32 *, 0x2C) = 1;
                M2C_FIELD(data_02155660, u16 *, 0x28) = 0x14;
                M2C_FIELD(data_02155660, u16 *, 0x2A) = 0xC;
                return;
            }
            break;
        default:
            return;
        }
    } else {
        if (M2C_FIELD(data_02155660, s32 *, 0x40) == 1) {
            if (M2C_FIELD(data_02155660, s16 *, 0x30) == 0) {
                M2C_FIELD(data_02155660, s16 *, 0x30) = 1;
            }
            return;
        }
        cmd = M2C_FIELD(arg0, u16 *, 0x2);
        if (cmd == 0xB) {
            chk = M2C_FIELD(data_02155660, s32 *, 0x2C);
            val = M2C_FIELD(arg0, u16 *, 0x0);
            if (chk == 1) {
                return;
            }
            M2C_FIELD(data_02155660, s32 *, 0x2C) = 1;
            M2C_FIELD(data_02155660, u16 *, 0x28) = cmd;
            M2C_FIELD(data_02155660, u16 *, 0x2A) = val;
            return;
        }
        if (cmd == 0xC) {
            chk = M2C_FIELD(data_02155660, s32 *, 0x2C);
            val = M2C_FIELD(arg0, u16 *, 0x0);
            if (chk == 1) {
                return;
            }
            M2C_FIELD(data_02155660, s32 *, 0x2C) = 1;
            M2C_FIELD(data_02155660, u16 *, 0x28) = cmd;
            M2C_FIELD(data_02155660, u16 *, 0x2A) = val;
            return;
        }
        if (cmd != 1) {
            return;
        }
        chk = M2C_FIELD(data_02155660, s32 *, 0x2C);
        val = M2C_FIELD(arg0, u16 *, 0x0);
        if (chk == 1) {
            return;
        }
        M2C_FIELD(data_02155660, s32 *, 0x2C) = 1;
        M2C_FIELD(data_02155660, u16 *, 0x28) = cmd;
        M2C_FIELD(data_02155660, u16 *, 0x2A) = val;
    }
}
