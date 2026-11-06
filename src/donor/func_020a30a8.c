/* compiler: 1.2/sp2p3  */
/* func_02124894 from projets/nintendogs-dachshund/src/auto/func_02124894.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0200399c(void);
extern void *data_02153720;
void func_020a30a8(s32 arg0) {
    u16 temp_r0;

    temp_r0 = (*(u16 *) ((s8 *) (arg0) + (4)));
    switch (temp_r0) {
        case 0x0:
            if (func_0200399c() != 0) {
                (*(u16 *) ((s8 *) (arg0) + (4))) = 0x1100U;
                (*(s16 *) ((s8 *) (arg0) + (6))) = 0;
            }
            return;
        case 0x1100:
            if ((*(s16 *) ((s8 *) (data_02153720) + (0x100))) == 2) {
                (*(u16 *) ((s8 *) (arg0) + (4)))   = 1U;
                (*(s32 *) ((s8 *) (arg0) + (0xC))) = 1;
            }
            return;
    }
}
