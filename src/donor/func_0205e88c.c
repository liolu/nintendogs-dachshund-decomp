/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0205e88c from projets/nintendogs-chihuahua-friends/src/donor/func_0205e88c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
void *func_0205e88c(const void *src, int val, u32 n) {
    const u8 *p = (const u8 *) src;
    u32 v       = val & 0xff;

    while (n != 0) {
        u32 c = *(const u32 *) p & 0xff;
        p += 1;
        if (c == v) {
            return (void *) (p - 1);
        }
        n--;
    }
    return 0;
}
