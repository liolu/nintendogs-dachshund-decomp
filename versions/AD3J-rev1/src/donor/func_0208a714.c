/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02086f9c from projets/nintendogs-dachshund/src/donor/func_02086f9c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
int func_0208a714(const char *a, const char *b, int length) {
    int i;

    for (i = 0; i < length; i++) {
        u32 ca = (u8) a[i] - 'A';
        u32 cb = (u8) b[i] - 'A';

        if (ca <= 'Z' - 'A') {
            ca += 'a' - 'A';
        }
        if (cb <= 'Z' - 'A') {
            cb += 'a' - 'A';
        }
        if (ca != cb) {
            return ca - cb;
        }
    }
    return 0;
}
