/* compiler: 1.2/sp2p3  */
/* func_02110684 from projets/nintendogs-dachshund/src/auto/func_02110684.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0200665c(u16);
void func_0208f0dc(void) {
    u16 var_r4;

    var_r4 = 0;
    do {
        func_0200665c(var_r4);
        var_r4 += 1;
    } while ((u32) var_r4 < 0x14U);
}
