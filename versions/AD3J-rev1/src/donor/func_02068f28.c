/* compiler: 1.2/sp2p3  */
/* func_0200465c from projets/code-lyoko/src/donor/func_0200465c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long fx32;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
void func_02068f28(fx32 num, fx32 den) {
    *(volatile u16 *) 0x04000280 = 1;
    *(volatile u64 *) 0x04000290 = (u64) (u32) num << 32;
    *(volatile u64 *) 0x04000298 = (u32) den;
}
