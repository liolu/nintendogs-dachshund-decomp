/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200a8f8 from projets/code-lyoko/src/auto/func_0200a8f8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef volatile u64 vu64;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
extern u32 func_0208120c(void);
extern u32 func_02081220(u32 irq_flag);
extern vu64 data_0215362c;
u64 func_02080f5c(void) {
    vu16 countL;
    vu64 countH;
    u32 prev = func_0208120c();

    countL = (*(vu16 *) 0x04000100);
    countH = data_0215362c & 0x0000ffffffffffffULL;

    if (((*(vu32 *) 0x04000214) & (1 << 3)) && !(countL & 0x8000)) {
        countH++;
    }

    func_02081220(prev);
    return (countH << 16) | countL;
}
