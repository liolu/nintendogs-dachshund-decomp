/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0202f588 from projets/nintendogs-shiba-friends/src/donor/func_0202f588.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern u8 *data_02153720;
extern void func_02036fbc(u8 *p, u32 v);
typedef struct {
    u32 w[3];
} T3;
void func_0202f588(u8 *p) {
    u8 *q;
    *(T3 *) (p + 0x26c) = *(T3 *) (p + 0x2a0);
    q                   = *(u8 **) (data_02153720 + 0x1c);
    *(T3 *) (p + 0x278) = *(T3 *) (q + 48);
    func_02036fbc(p, 768);
}
