/* compiler: 1.2/sp2p3  */
/* func_0209c8f4 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0209c8f4.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
extern s32 func_01ffda04(s16);
extern s32 func_02028144();
extern void *data_02153708;
s32 func_0209c8f4(s32 arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = 0;
    if ((arg0 == 0x30002) && (arg1 == 0) && (func_01ffda04((*(s16 *) ((s8 *) (data_02153708) + (0xE)))) != 0)) {
        var_r4 = func_02028144() + 0x78;
    }
    return var_r4;
}
