/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208fcb8 from projets/nintendogs-shiba-friends/src/donor/func_0208fcb8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153708;
extern void func_02090508(u8 *o, u32 v);
void func_0208fcb8(u16 param_1, u16 param_2) {
    u8 *o = data_02153708;
    s16 s;
    s32 k;
    u8 *b;

    func_02090508(o, 17);
    *(u16 *) (o + 4)     = 0;
    *(u16 *) (o + 26)    = param_1;
    *(u16 *) (o + 14)    = param_2;
    s                    = *(s16 *) (o + 14);
    b                    = o + 32;
    k                    = s * 20;
    *(u16 *) (b + k)     = *(u16 *) (b + k) | 1;
    *(u16 *) (b + k + 2) = (u16) s;
}
