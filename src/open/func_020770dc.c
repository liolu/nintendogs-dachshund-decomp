#include "m2c.h"
void func_020770dc(void *arg0) {
    void *vt;
    u32 cmd;
    s32 mode;
    s32 handled;

    if ((M2C_FIELD(arg0, s32 *, 8) & 0x200) == 0) {
        M2C_FIELD(arg0, u8 *, 0xAC) = M2C_FIELD(arg0, u8 **, 0)[1];
        cmd = M2C_FIELD(arg0, u8 *, 0xAC);
        M2C_FIELD(arg0, s32 *, 8) |= 4;
        M2C_FIELD(arg0, void **, 0xB8) = (void *) ((s8 *) arg0 + 0x184);
        mode = M2C_FIELD(arg0, void **, 0x14) != 0 ? M2C_FIELD(arg0, u8 *, 0x8E) : 0;

        if (mode == 1) {
            M2C_FIELD(arg0, s32 *, 8) &= ~0x40;
            ((void (*)(void *)) M2C_FIELD(arg0, void **, 0x14))(arg0);
            mode = M2C_FIELD(arg0, void **, 0x14) != 0 ? M2C_FIELD(arg0, u8 *, 0x8E) : 0;
            handled = M2C_FIELD(arg0, s32 *, 8) & 0x40;
        } else {
            handled = 0;
        }
        if (handled == 0) {
            vt = M2C_FIELD(arg0, void **, 4);
            if (M2C_FIELD(vt, void **, 0x18) != 0 &&
                (M2C_FIELD((s8 *) vt + ((cmd >> 5) * 4), u32 *, 0x4C) & (1 << (cmd & 0x1F))) != 0 &&
                ((s32 (*)(void *, void *, s32)) M2C_FIELD(vt, void **, 0x1C))(
                    M2C_FIELD(arg0, void **, 0xB8), M2C_FIELD(vt, void **, 0x18), cmd) != 0) {
                /* command consumed by the handler */
            } else {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0xB8), s32 *, 0) = M2C_FIELD(arg0, u8 **, 0)[2] & 1;
            }
        }
        if (mode == 2) {
            M2C_FIELD(arg0, s32 *, 8) &= ~0x40;
            ((void (*)(void *)) M2C_FIELD(arg0, void **, 0x14))(arg0);
            mode = M2C_FIELD(arg0, void **, 0x14) != 0 ? M2C_FIELD(arg0, u8 *, 0x8E) : 0;
            handled = M2C_FIELD(arg0, s32 *, 8) & 0x40;
        } else {
            handled = 0;
        }
        if (handled == 0) {
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xB8), s32 *, 0) != 0) {
                M2C_FIELD(arg0, s32 *, 8) |= 1;
            } else {
                M2C_FIELD(arg0, s32 *, 8) &= ~1;
            }
        }
        if (mode == 3) {
            M2C_FIELD(arg0, s32 *, 8) &= ~0x40;
            ((void (*)(void *)) M2C_FIELD(arg0, void **, 0x14))(arg0);
        }
    }
    M2C_FIELD(arg0, u8 **, 0) = M2C_FIELD(arg0, u8 **, 0) + 3;
}
