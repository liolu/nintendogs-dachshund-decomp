/* compiler: 1.2/sp2p3  */
/* func_02118f18 from projets/nintendogs-dachshund/src/auto/func_02118f18.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020c9da8(void);
void func_02097788(s32 arg0) {
    (*(s16 *) ((s8 *) (arg0) + (0x24))) = 2;
    (*(s16 *) ((s8 *) (arg0) + (0x26))) = 0x1A;
    (*(s16 *) ((s8 *) (arg0) + (0x7C))) = (s16) func_020c9da8();
    *(u16 *) 0x04000304 &= ~0x8000;
}
