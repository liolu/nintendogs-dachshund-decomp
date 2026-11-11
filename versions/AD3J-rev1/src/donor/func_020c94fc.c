/* compiler: 2.0/sp1p5  */
/* func_020cecb0 from projets/nintendogs-dachshund/src/auto/func_020cecb0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
extern void *data_02154c48;
void func_020c94fc(s32 arg0) {
    void *temp_r1;

    temp_r1                                 = (*(void **) ((s8 *) (data_02154c48) + (0x141C)));
    (*(s16 *) ((s8 *) (temp_r1) + (0x7E)))  = (s16) arg0;
    (*(u16 *) ((s8 *) (temp_r1) + (0x6AE))) = (u16) ((*(u16 *) ((s8 *) (temp_r1) + (0x6AE))) | 1);
}
