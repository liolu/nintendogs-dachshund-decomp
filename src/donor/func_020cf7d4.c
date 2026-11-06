/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cf7dc from projets/nintendogs-chihuahua-friends/src/donor/func_020cf7dc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;
extern u8 *data_02154c74;
extern void func_02007128(u32 *a, u32 *b);
extern u64 func_020c78d8(u32 *a, u32 *b, u32 *c);
u64 func_020cf7d4(void) {
    u32 a[4];
    u32 b[3];
    func_02007128(a, b);
    return func_020c78d8((u32 *) (data_02154c74 + 0x10), a, b);
}
