/* compiler: 1.2/sp2p3  */
/* func_020caa6c from projets/nintendogs-dachshund/src/auto/func_020caa6c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02003844();
extern M2C_UNK func_02078b34(s32, M2C_UNK, M2C_UNK);
extern void *func_020c4b40(M2C_UNK, s32, M2C_UNK);
extern M2C_UNK func_020c54d8();
void *func_020c5464(M2C_UNK arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = func_02003844();
    if (temp_r0 != ((void *) 0)) {
        func_020c54d8();
        if (arg2 == 0) {
            (*(void **) ((s8 *) (temp_r0) + (0x1C))) = ((void *) 0);
        } else {
            (*(void **) ((s8 *) (temp_r0) + (0x1C))) = func_020c4b40(arg0, arg2, 0);
            func_02078b34((*(s32 *) ((s8 *) ((*(void **) ((s8 *) (temp_r0) + (0x1C)))) + (8))), 0, 0x1F0000);
            func_02078b34((*(s32 *) ((s8 *) ((*(void **) ((s8 *) (temp_r0) + (0x1C)))) + (8))), 0, 0x3F000000);
        }
    }
    return temp_r0;
}
