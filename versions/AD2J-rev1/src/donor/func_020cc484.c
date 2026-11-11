/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02096d38 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02096d38.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
void func_020cc484(u8 *p1, s32 p2, s32 p3) {
    u32 len;
    u8 *base;
    u8 *rec;
    u8 *e;
    u16 f;
    u32 n;
    u32 i;
    u32 sum;

    len  = *(u32 *) (p1 + 4);
    base = *(u8 **) (p1 + 0x10);
    rec  = base + len * p2;
    e    = rec + len - 8;
    if ((*(u16 *) (e + 6) & 1) == 0) {
        return;
    }
    *(u16 *) (e + 6) &= ~1;
    *(u32 *) rec = 0;
    sum          = 0;
    if (p3 == 0) {
        goto ELSE;
    }
    *(u32 *) e = 0x444f473f;
    n          = len - 4;
    i          = 0;
    if (n != 0) {
        do {
            sum = (u16) (sum + rec[i]);
            i   = i + 1;
        } while (i < n);
    }
    *(u16 *) (e + 4) = sum;
    goto END;
ELSE:
    *(u32 *) e = 0x544f5458;
    i          = 0;
    n          = len - 4;
    if (n != 0) {
        do {
            sum = (u16) (sum + rec[i]);
            i   = i + 1;
        } while (i < n);
    }
    *(u16 *) (e + 4) = sum ^ 0xffff;
END:
    *(u16 *) (e + 6) = *(u16 *) (e + 6) | 2;
}
