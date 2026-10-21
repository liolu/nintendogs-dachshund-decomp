/* compiler: 1.2/sp2p3 */
#include "m2c.h"
#include "engine.h"

typedef struct {
    /* 0x000 */ u8 pad000[0x24];
    /* 0x024 */ s16 unk24[0xC0];
    /* 0x1A4 */ s16 unk1A4[0xC0];
    /* 0x2E4 */
} UnkStruct_02007C78;

#pragma opt_strength_reduction off
extern void *data_0214cf54;
extern u8 data_0214cfe0[];
void func_0206cbc4(M2C_UNK, void *, M2C_UNK);
s32 func_020092e4(M2C_UNK, M2C_UNK);
void func_020b777c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK func_020cba74(M2C_UNK);
void func_0207ca98(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_02145614[];
unsigned char *func_01ffdb08(int);
short func_02028120(int);
#pragma opt_strength_reduction off
void func_02007c78(s32 arg0, s32 arg1) {
    s32 idx;
    s16 a;
    s16 b;

    idx = arg1 + 1;
    if (idx >= 0xC0) {
        idx = 0;
    }
    *(u32 *) 0x4001000 = (*(u32 *) 0x4001000 & ~0xE000) | 0x2000;
    a = *(s16 *) (arg0 + idx * 2 + 0x24);
    b = *(s16 *) (arg0 + idx * 2 + 0x1A4);
    *(u16 *) 0x4001040 = (u16) ((((u32) a << 8) & 0xFF00) | ((u32) b & 0xFF));
    *(u16 *) 0x4001044 = 0xC0;
    if (*(s16 *) (arg0 + idx * 2 + 0x1A4) >= 0xFF) {
        *(u32 *) 0x4001000 = (*(u32 *) 0x4001000 & ~0xE000) | 0x6000;
        *(u16 *) 0x4001042 = 0xFF00;
        *(u16 *) 0x4001046 = 0xC0;
    }
}
