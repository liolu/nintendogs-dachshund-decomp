/* compiler: 1.2/sp2p3  */
/* func_02114310 from projets/nintendogs-dachshund/src/auto/func_02114310.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02106e90();
extern s32 func_020c9d30(M2C_UNK, s16);
extern void *data_02153720;
void func_02092ba0(s16 arg0) {
    s32 temp_r0;

    temp_r0 = func_02106e90();
    if (((temp_r0 == 2) || (temp_r0 == 7) || (temp_r0 == 0xF)) && (func_020c9d30(0, arg0) > 0)) {
        (*(s16 *) ((s8 *) (data_02153720) + (0x7E))) = arg0;
    }
    (*(s16 *) ((s8 *) (data_02153720) + (0x7C))) = -1;
}
