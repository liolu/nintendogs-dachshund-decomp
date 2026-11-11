/* compiler: 1.2/sp2p3  */
/* func_0209150c from projets/nintendogs-dachshund/src/auto/func_0209150c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02027044(M2C_UNK, M2C_UNK);
extern M2C_UNK func_020274c0(M2C_UNK, s32);
extern M2C_UNK func_02027508();
extern s16 data_02147110;
extern s16 data_02147114;
void func_020f1cd4(M2C_UNK arg0, s32 arg1) {
    s32 temp_r5;
    s32 var_r5;

    var_r5 = arg1;
    func_02027508();
    if (var_r5 > 0x4A) {
        var_r5 = 0x4A;
    } else if (var_r5 < 0x3D) {
        var_r5 = 0x3D;
    }
    temp_r5 = data_02147110 * (var_r5 - data_02147114);
    func_02027044(arg0, 0x22);
    func_020274c0(arg0, temp_r5);
}
