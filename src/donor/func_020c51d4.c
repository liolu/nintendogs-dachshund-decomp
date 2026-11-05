/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c51d0 from projets/nintendogs-shiba-friends/src/donor/func_020c51d0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
void func_020c51d4(void *p, s16 i, u32 v) {
    u8 *base                     = *(u8 **) (*(u8 **) ((u8 *) p + 0x1c) + 0x5c);
    *(u32 *) (base + i * 12 + 8) = v;
}
