/* compiler: 1.2/sp2p3  */
/* func_02085e88 from projets/nintendogs-dachshund/src/auto/func_02085e88.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
extern u16 func_02089b88();
s32 func_02089600(void *arg0) {
    u16 temp_r0;

    temp_r0 = func_02089b88();
    if (temp_r0 != (*(u16 *) ((s8 *) (arg0) + (0x12)))) {
        (*(u16 *) ((s8 *) (arg0) + (0x12))) = temp_r0;
        return 1;
    }
    return 0;
}
