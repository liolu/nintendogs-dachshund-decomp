/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FSi_StrNICmp from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/fs/fs_strnicmp.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
int func_02086f9c(const char *a, const char *b, int length) {
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
