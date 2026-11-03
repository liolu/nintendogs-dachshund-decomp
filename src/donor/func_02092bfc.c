/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020aad40 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020aad40.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
void func_02092bfc(u8 *o, s32 idx) {
    s16 i;
    u8 *e;
    s16 s;
    s16 *slot;
    e = o + idx * 2;
    if (*(s16 *) (e + 198) == -1) {
        return;
    }
    i = 0;
    do {
        slot = (s16 *) ((u32) o + ((u32) i << 1));
        s    = slot[99];
        if (s > *(s16 *) (e + 198)) {
            slot[99] = s - 1;
        }
        i++;
    } while (i < 3);
    *(s16 *) (o + 204)    = *(s16 *) (o + 204) - 1;
    ((s16 *) o + idx)[99] = -1;
}
