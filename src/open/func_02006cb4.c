#include "engine.h"
#include "m2c.h"
void *func_020038a8(s32, u32);
void func_0206cbf8(u32, void *, u32);
extern s32 func_02073a6c(s32, u32);
extern void func_02073888(s32);
extern void *data_0214d628;
void func_020b777c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK func_020cba74(M2C_UNK);
void func_0207ca98(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_02145614[];
extern void *data_0214cf54;
extern u8 data_0214cfe0[];
void func_0206cbc4(M2C_UNK, void *, M2C_UNK);
s32 func_020092e4(M2C_UNK, M2C_UNK);
void func_02003718(s32 *arg0);
void *func_02006cb4(s32 arg0, s32 arg1) {
    u8 *p;
    volatile s32 fill;

    p = (u8 *) func_020038a8(arg0, 8);
    if (p != NULL) {
        *(u16 *) (p + 0) = (u16) arg1;
        *(u16 *) (p + 2) = 0;
        *(void **) (p + 4) = (void *) func_020038a8(arg0, arg1 << 3);
        *(u16 *) (p + 2) = 0;
        fill = 0xC0;
        func_0206cbf8(fill, *(void **) (p + 4), *(u16 *) (p + 0) << 3);
    }
    return p;
}
