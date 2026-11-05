/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02077d9c from projets/nintendogs-dachshund/src/donor/func_02077d9c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
extern int func_02078674(const u8 *c);
extern const u8 *func_02078614(const u8 *c, u8 cmd);
extern int func_02078674(const u8 *c);
const u8 *func_02078614(const u8 *c, u8 cmd) {
    int x;
    ((void) 0);
    ((void) 0);

    cmd &= 0x1f;
    while ((x = (*c & 0x1f)) != 0x01) {
        if (cmd == x) {
            return c;
        } else {
            int cmdLen = func_02078674(c);
            ((void) 0);
            c += cmdLen;
        }
    }
    return 0;
}
