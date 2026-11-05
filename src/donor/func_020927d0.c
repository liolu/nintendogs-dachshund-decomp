/* compiler: 1.2/sp2p3  */
/* func_02113f40 from projets/nintendogs-dachshund/src/auto/func_02113f40.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0200668c(M2C_UNK, M2C_UNK *);
extern s32 func_020977c4();
extern s32 func_02097cb4(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 func_020986ac(M2C_UNK, M2C_UNK);
extern s32 func_020989bc(M2C_UNK, M2C_UNK);
extern s32 func_02099164();
extern s32 func_020994f0();
extern s32 func_02099c18(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 func_0209ae60(M2C_UNK, M2C_UNK);
extern s32 func_0209b6e4(M2C_UNK, M2C_UNK);
extern s32 func_0209b850();
extern s32 func_0209be8c();
extern s32 func_0209cd70(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 func_0209ee34();
extern s32 func_0209eecc(M2C_UNK, M2C_UNK);
extern s32 func_0209faec();
extern s32 func_020a16ac();
extern s32 func_020a3060();
extern s32 func_020a3408();
extern s32 data_02153718;
extern M2C_UNK func_020929e8;
s32 func_020927d0(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 var_r4;

    var_r4 = 0;
    switch (arg1) {
        case 0xC000:
            var_r4 = func_020977c4(arg0);
            break;
        case 0x0:
        case 0xA:
        case 0xF:
        case 0x12:
            var_r4 = func_020986ac(arg0, arg3);
            break;
        case 0xC:
            var_r4 = func_0209ee34(arg0);
            break;
        case 0x1:
            var_r4 = func_02097cb4(arg0, arg2, arg3);
            break;
        case 0x3:
            var_r4 = func_02099c18(arg0, arg2, arg3);
            break;
        case 0x4:
            var_r4 = func_0209cd70(arg0, arg2, arg3);
            break;
        case 0x2:
            var_r4 = func_020989bc(arg0, arg3);
            break;
        case 0xC002:
            var_r4 = func_02099164(arg0);
            break;
        case 0x6:
            var_r4 = func_0209eecc(arg0, arg3);
            break;
        case 0x7:
            var_r4 = func_0209ae60(arg0, arg3);
            break;
        case 0x8003:
            var_r4 = func_020994f0(arg0);
            break;
        case 0x8:
        case 0x10:
            var_r4 = func_0209b6e4(arg0, arg3);
            break;
        case 0x9:
            var_r4 = func_0209b850(arg0);
            break;
        case 0xB:
            var_r4 = func_0209be8c(arg0);
            break;
        case 0xD:
            var_r4 = func_0209faec(arg0);
            break;
        case 0xE:
            var_r4 = func_020a16ac(arg0);
            break;
        case 0x11:
            var_r4 = func_020a3060(arg0);
            break;
        case 0x8005:
            var_r4 = func_020a3408(arg0);
            break;
    }
    func_0200668c(0xA, &func_020929e8);
    data_02153718 = var_r4;
    return var_r4;
}
