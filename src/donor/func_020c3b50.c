/* compiler: 2.0/sp1p5  */
/* func_020c9154 from projets/nintendogs-dachshund/src/auto/func_020c9154.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020c47f8(void);
extern void func_020c49f8(M2C_UNK, M2C_UNK);
void func_020c3b50(s32 arg0) {
    (*(s16 *) ((s8 *) (arg0) + (0)))              = 1;
    (*(s16 *) ((s8 *) (arg0) + (2)))              = 0;
    (*(void (**)())((s8 *) (arg0) + (4)))         = func_020c47f8;
    (*(void (**)(s32, s32))((s8 *) (arg0) + (8))) = func_020c49f8;
}
