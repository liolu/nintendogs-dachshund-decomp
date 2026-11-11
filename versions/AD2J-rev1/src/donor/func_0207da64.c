/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207d41c from projets/nintendogs-dachshund/src/donor/func_0207d41c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
u16 func_0207da64(u32 arg0, u16 arg1) {
    u32 addr               = arg0 + 0x24;
    u16 old                = *(u16 *) (addr + 0x10);
    *(u16 *) (addr + 0x10) = arg1;
    return old;
}
