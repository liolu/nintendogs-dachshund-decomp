/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a3804 from projets/nintendogs-chihuahua-friends/src/donor/func_020a3804.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
void func_020a3804(u16 *p, u16 n, u32 x) {
    u32 inc = (x << 28) >> 16;
    if (n == 0) {
        goto done;
    }
    do {
        *p = (u16) (*p + inc);
        p  = p + 1;
        n--;
    } while (n != 0);
done:
    return;
}
