/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206520c from projets/nintendogs-dachshund/src/donor/func_0206520c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern unsigned int func_0208120c(void);
extern void func_02081220(unsigned int savedState);
extern void func_0207fcb8(void *);
extern char data_0214e180[];
int func_02066660(void) {
    int *g             = (int *) data_0214e180;
    unsigned int saved = func_0208120c();
    if (g[13] & 4) {
        do {
            func_0207fcb8((char *) g + 0xd4);
        } while (g[13] & 4);
    }
    func_02081220(saved);
    return *(int *) g[0] == 0;
}
