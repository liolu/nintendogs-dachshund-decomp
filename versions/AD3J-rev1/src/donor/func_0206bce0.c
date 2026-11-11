/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006bac from projets/code-lyoko/src/auto/func_02006bac.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern void func_0206bce0(void);
extern void func_0206b8f8(volatile void *fifo);
void func_0206bce0(void) {
    func_0206b8f8(((vu32 *) 0x04000400));
    while ((*(vu32 *) 0x04000600) & 0x8000000) {
    }
}
extern void func_0206b8f8(register volatile void *fifo);
