/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02063da0 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02063da0.c (license: MIT), reused
 * by tools/donor_match.py */
extern int func_0206f048(int off, unsigned short b, int c, int d);
int func_0206e2c4(char *base, int idx, int c) {
    char *e;
    unsigned short bit;
    int r;
    e   = base + 0x1d4 + idx * 0x68;
    bit = (unsigned short) (1 << idx);
    r   = 0;
    if (*(unsigned char *) e == 2) {
        if (*(unsigned char *) (e + 1) == 8) {
            r                    = func_0206f048(c, bit, *(unsigned char *) (e + 2), *(int *) (e + 0x10));
            *(unsigned char *) e = 1;
        }
    }
    return r;
}
