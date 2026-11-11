/* compiler: 1.2/sp2p3  */
/* func_0211ced0 from projets/nintendogs-dachshund/src/auto/func_0211ced0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0209b790(M2C_UNK);
void func_0209b73c(s32 arg0) {
    u16 temp_r1;

    temp_r1 = (*(u16 *) ((s8 *) (arg0) + (4)));
    switch (temp_r1) {
        case 0x0:
            (*(u16 *) ((s8 *) (arg0) + (4))) = 0xB00U;
            (*(s16 *) ((s8 *) (arg0) + (6))) = 0;
            return;
        case 0xB00:
            func_0209b790(arg0);
            return;
    }
}
