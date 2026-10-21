/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020087dc from projets/code-lyoko/src/donor/func_020087dc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern u32 func_0207ed9c(u32 mask);
static inline BOOL OS_DisableIME(void) {
    u16 prev               = (*(vu16 *) 0x04000208);
    (*(vu16 *) 0x04000208) = 0;
    return (BOOL) prev;
}
static inline BOOL OS_RestoreIME(BOOL enable) {
    u16 prev               = (*(vu16 *) 0x04000208);
    (*(vu16 *) 0x04000208) = (vu16) enable;
    return (BOOL) prev;
}
u32 func_0207ed9c(u32 arg0) {
    u32 old;
    u16 old_a = *(volatile u16 *)0x4000208;

    *(volatile u16 *)0x4000208 = 0;
    old = *(volatile u32 *)0x4000210;
    *(volatile u32 *)0x4000210 = old | arg0;
    (void)*(volatile u16 *)0x4000208;
    *(volatile u16 *)0x4000208 = old_a;
    return old;
}
