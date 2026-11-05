/* compiler: 1.2/sp2p3  */
/* func_0211d024 from projets/nintendogs-dachshund/src/auto/func_0211d024.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
extern void func_0209b8e4(void);
void func_0209b890(s32 arg0) {
    u16 temp_r1;

    temp_r1 = (*(u16 *) ((s8 *) (arg0) + (4)));
    switch (temp_r1) {
        case 0x0:
            (*(u16 *) ((s8 *) (arg0) + (4))) = 0xC00U;
            (*(s16 *) ((s8 *) (arg0) + (6))) = 0;
            return;
        case 0xC00:
            func_0209b8e4();
            return;
    }
}
