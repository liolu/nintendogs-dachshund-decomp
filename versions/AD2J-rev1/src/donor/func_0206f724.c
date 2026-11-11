/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205ebe8 from projets/children-of-mana/src/auto/func_0205ebe8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern int func_020712d4(void);
extern int func_0207153c(void);
extern int func_0207154c(void);
extern int func_020707f8(int p0, unsigned short mask, unsigned char e2, short a, int b, int c);
int func_0206f724(char *obj, int idx, int p2) {
    unsigned char *e;
    unsigned short mask;
    int a, b, c, r;

    r    = 0;
    e    = (unsigned char *) (obj + 0x1d4 + idx * 0x68);
    mask = (unsigned short) (1 << idx);
    if (e[0] == 2 && e[1] == 2) {
        a    = func_020712d4();
        b    = func_0207153c();
        c    = func_0207154c();
        r    = func_020707f8(p2, mask, e[2], (short) a, b, c);
        e[0] = 1;
    }
    return r;
}
