/* compiler: 1.2/sp2p3  */
/* func_020a9968 from projets/nintendogs-dachshund/src/auto/func_020a9968.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void *data_02153720;
void func_02109ce8(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_ip;
    s32 var_r3;

    var_ip = (*(s32 *) ((s8 *) (data_02153720) + (0x94))) << 0xC;
    var_r3 = (*(s32 *) ((s8 *) (data_02153720) + (0x98))) << 0xC;
    if (var_ip > 0x50000) {
        var_ip = 0x50000;
    }
    if (var_ip < -0x50000) {
        var_ip = -0x50000;
    }
    if (var_r3 > 0x50000) {
        var_r3 = 0x50000;
    }
    if (var_r3 < -0x50000) {
        var_r3 = -0x50000;
    }
    *(M2C_UNK *) arg1 = var_ip;
    *(M2C_UNK *) arg2 = var_r3;
}
