/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020066f0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02118f54();                                /* extern */
s32 func_02119444(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_02119e3c(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0211a14c(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0211a8f4();                                /* extern */
s32 func_0211ac80();                                /* extern */
s32 func_0211b3a8(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0211c5f4(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0211ce78(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0211cfe4();                                /* extern */
s32 func_0211d620();                                /* extern */
s32 func_0211e554(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_02120620();                                /* extern */
s32 func_021206b8(M2C_UNK, M2C_UNK);                /* extern */
s32 func_021212d8();                                /* extern */
s32 func_02122e98();                                /* extern */
s32 func_0212484c();                                /* extern */
s32 func_02124bf8();                                /* extern */
extern s32 data_0215a05c;
extern M2C_UNK func_02114158;

s32 func_02113f40(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 var_r4;

    var_r4 = 0;
    switch (arg1) {                                 /* irregular */
        case 0xC000:
            var_r4 = func_02118f54(arg0);
            break;
        case 0x0:
        case 0xA:
        case 0xF:
        case 0x12:
            var_r4 = func_02119e3c(arg0, arg3);
            break;
        case 0xC:
            var_r4 = func_02120620(arg0);
            break;
        case 0x1:
            var_r4 = func_02119444(arg0, arg2, arg3);
            break;
        case 0x3:
            var_r4 = func_0211b3a8(arg0, arg2, arg3);
            break;
        case 0x4:
            var_r4 = func_0211e554(arg0, arg2, arg3);
            break;
        case 0x2:
            var_r4 = func_0211a14c(arg0, arg3);
            break;
        case 0xC002:
            var_r4 = func_0211a8f4(arg0);
            break;
        case 0x6:
            var_r4 = func_021206b8(arg0, arg3);
            break;
        case 0x7:
            var_r4 = func_0211c5f4(arg0, arg3);
            break;
        case 0x8003:
            var_r4 = func_0211ac80(arg0);
            break;
        case 0x8:
        case 0x10:
            var_r4 = func_0211ce78(arg0, arg3);
            break;
        case 0x9:
            var_r4 = func_0211cfe4(arg0);
            break;
        case 0xB:
            var_r4 = func_0211d620(arg0);
            break;
        case 0xD:
            var_r4 = func_021212d8(arg0);
            break;
        case 0xE:
            var_r4 = func_02122e98(arg0);
            break;
        case 0x11:
            var_r4 = func_0212484c(arg0);
            break;
        case 0x8005:
            var_r4 = func_02124bf8(arg0);
            break;
    }
    func_020066f0(0xA, &func_02114158);
    data_0215a05c = var_r4;
    return var_r4;
}
