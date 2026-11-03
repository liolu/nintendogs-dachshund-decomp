/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006be0 from projets/code-lyoko/src/auto/func_02006be0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
extern void func_0206bb84(void);
void func_0206bd14(void) {
    while ((*(vu32 *) 0x04000600) & 0x8000000) {
    }
    (*(vu32 *) 0x04000600) |= 0x8000;
    (*(vu16 *) 0x04000060) |= 0x2000;
    (*(vu16 *) 0x04000060) |= 0x1000;
    func_0206bb84();
    (*(vu32 *) 0x040004a4) = 0x1f0080;
    (*(vu32 *) 0x040004a8) = 0;
    (*(vu32 *) 0x040004ac) = 0;
}
extern void func_0206bb84(void);
