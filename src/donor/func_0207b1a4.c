/* compiler: 1.2/sp2p3  */
/* func_0207158c from projets/children-of-mana/src/auto/func_0207158c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
void func_0207b1a4(s32 *arg0, void *arg1, s32 arg2) {
    u32 temp_r2;
    void *temp_lr;

    temp_lr = (*(void **) ((s8 *) (arg1) + (8)));
    temp_r2 = (((s32) (*(s32 *) ((s8 *) (arg1) + (0))) >> 0xC) * (*(u16 *) ((s8 *) (temp_lr) + (6)))) + arg2;
    *arg0   = (*(s32 *) ((s8 *) ((temp_lr + ((temp_r2 >> 5) * 4))) + (0xC))) & (1 << (temp_r2 & 0x1F));
}
