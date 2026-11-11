/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020aa5a8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020aa5a8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef volatile unsigned short vu16;
extern u32 data_02153714;
extern void func_0200420c(void);
void func_02092464(void) {
    vu16 *reg;
    *(u32 *) &data_02153714 = 0;
    func_0200420c();
    reg = (vu16 *) 0x04000304;
    if (((s32) ((*reg) & 0x8000) >> 15) == 0) {
        *reg = *reg | 0x8000;
    }
}
