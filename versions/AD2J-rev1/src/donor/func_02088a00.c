/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02085288 from projets/nintendogs-dachshund/src/donor/func_02085288.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
void func_02088a00(void *p, int a, int b) {
    u16 *c = (u16 *) ((char *) p + 0x40);
    u16 g  = ((0xff - b) * 0x1f) / 0xff;
    *c     = (*c & ~0x3e0) | ((g & 0x1f) << 5);
}
