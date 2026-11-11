/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205eb80 from projets/children-of-mana/src/auto/func_0205eb80.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern int func_02070440(int off, unsigned short b, int c, int d);
int func_0206f6bc(char *base, int idx, int c) {
    char *e;
    unsigned short bit;
    int r;
    e   = base + 0x1d4 + idx * 0x68;
    bit = (unsigned short) (1 << idx);
    r   = 0;
    if (*(unsigned char *) e == 2) {
        if (*(unsigned char *) (e + 1) == 8) {
            r                    = func_02070440(c, bit, *(unsigned char *) (e + 2), *(int *) (e + 0x10));
            *(unsigned char *) e = 1;
        }
    }
    return r;
}
