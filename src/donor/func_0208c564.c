/* compiler: 1.2/sp2p3  */
/* func_0205522c from projets/children-of-mana/src/auto/func_0205522c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
u32 func_0208c564(void *arg0) {
    if ((*(u8 *) ((s8 *) (arg0) + (0x1F))) & 1) {
        return (u32) ((*(s32 *) ((s8 *) (arg0) + (0x1C))) << 8) >> 8;
    }
    return (*(u32 *) ((s8 *) (arg0) + (8)));
}
