/* compiler: 1.2/sp2p3  */
/* func_021179b0 from projets/nintendogs-dachshund/src/auto/func_021179b0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_01ffda04(s16);
extern s32 func_02028144();
extern void *data_02153708;
s32 func_0209be44(s32 arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (arg0 == 0x30002) {
        func_01ffda04((*(s16 *) ((s8 *) (data_02153708) + (0xE))));
        var_r2 = func_02028144() + 0x78;
    }
    return var_r2;
}
