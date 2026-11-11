/* compiler: 1.2/sp2p3  */
/* func_020d0c6c from projets/nintendogs-dachshund/src/auto/func_020d0c6c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_020cc050(void *, M2C_UNK, M2C_UNK);
extern void *func_020cd044();
extern s32 data_02154c44;
s32 func_020cb410(s32 arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s32 var_r4;
    void *temp_r0;

    var_r4  = 0;
    temp_r0 = func_020cd044();
    if (((*(s32 *) ((s8 *) (temp_r0) + (0x10))) != 0) &&
        ((arg3 != 0) || ((*(s32 *) ((s8 *) (temp_r0) + (0xC))) != data_02154c44))) {
        var_r4 = func_020cc050(temp_r0, arg2, 0);
    }
    return var_r4;
}
