/* compiler: 1.2/sp2p3  */
/* func_0209f340 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0209f340.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_01ffda04(s16);
extern s32 func_02028144();
extern void *func_020b54bc(s16, s16);
extern s32 func_020c6530(s32, u16, M2C_UNK);
extern void *data_02153708;
extern void *data_02153740;
extern void *data_02154c3c;
s32 func_0209f340(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    switch (arg0) {
        case 0x30002:
            if (func_01ffda04((*(s16 *) ((s8 *) (data_02153708) + (0xE)))) != 0) {
                var_r4 = func_02028144() + 0x78;
            }
            break;
        case 0x30006:
            var_r4 = func_020c6530((*(s32 *) ((s8 *) (data_02154c3c) + (0x10))),
                                   (*(u16 *) ((s8 *) (func_020b54bc((*(s16 *) ((s8 *) (data_02153740) + (0x3524))),
                                                                    (*(s16 *) ((s8 *) (data_02153740) + (0x3526))))) +
                                              (6))),
                                   0);
            break;
    }
    return var_r4;
}
