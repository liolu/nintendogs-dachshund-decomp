/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c9580 from projets/nintendogs-shiba-friends/src/donor/func_020c9580.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed long long s64;
extern u32 data_02154c48;
extern void func_02007128(u32 *a, u32 *b);
extern u64 func_020c78dc(u32 *p, u32 *a, u32 *b);
u32 func_020c9584(void) {
    u32 r6;
    u8 *iVar2;
    u8 *r4;
    u32 a[4];
    u32 b[4];
    u64 t;

    r6    = 0;
    iVar2 = *(u8 **) (*(u8 **) &data_02154c48 + 0x141c);
    r4    = iVar2 + 0x60;
    if (*(u16 *) (r4 + 32) != 0xffff) {
        func_02007128(a, b);
        t = func_020c78dc((u32 *) (r4 + 44), a, b);
        if ((s64) t >= 0x15180) {
            *(u16 *) (r4 + 28)       = *(u16 *) (r4 + 32);
            *(u16 *) (r4 + 32)       = 0xffff;
            r6                       = 1;
            *(u16 *) (iVar2 + 0x6ae) = *(u16 *) (iVar2 + 0x6ae) | 1;
        }
    }
    return r6;
}
