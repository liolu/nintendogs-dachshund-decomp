/* compiler: 2.0/sp1p5  */
/* func_02120660 from projets/nintendogs-dachshund/src/auto/func_02120660.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
extern void *data_02153720;
void func_0209ee74(s32 arg0) {
    u16 temp_r1;

    temp_r1 = (*(u16 *) ((s8 *) (arg0) + (4)));
    switch (temp_r1) {
        case 0x0:
            (*(u16 *) ((s8 *) (arg0) + (4))) = 0xD00U;
            (*(s16 *) ((s8 *) (arg0) + (6))) = 0;
            return;
        case 0xD00:
            if ((*(s16 *) ((s8 *) (data_02153720) + (0x100))) == 2) {
                (*(u16 *) ((s8 *) (arg0) + (4)))   = 1U;
                (*(s32 *) ((s8 *) (arg0) + (0xC))) = 1;
            }
            return;
    }
}
