#include "m2c.h"
#include "engine.h"
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
void *func_020038a8(s32, u32);
void func_0206cbf8(u32, void *, u32);
void func_02003718(s32 *arg0);
void func_02003718(s32 *arg0) {
    s32 *p;

    switch (*arg0) {
        case 0x45585048:
            func_0207d6e8(arg0);
            break;
        case 0x46524D48:
            func_0207dee4(arg0);
            break;
    }
    p = (s32 *) func_0207d24c(arg0);
    if (p == 0) {
        return;
    }
    switch (*p) {
        case 0x45585048:
            func_0207d4dc(p, arg0);
            break;
        case 0x46524D48:
            break;
    }
}
