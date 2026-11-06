/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208fc58 from projets/nintendogs-chihuahua-friends/src/donor/func_0208fc58.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153708;
extern void func_02090508(u8 *a, u32 b);
void func_0208fc58(u16 param_1) {
    u8 *p;
    u8 *q;
    u8 *e;
    s16 s;
    s32 idx;
    p = data_02153708;
    func_02090508(p, 9);
    *(u16 *) (p + 4)   = 4;
    *(u16 *) (p + 14)  = param_1;
    s                  = *(s16 *) (p + 14);
    idx                = (s32) s * 20;
    q                  = p + 32;
    e                  = q + idx;
    *(u16 *) (q + idx) = *(u16 *) (q + idx) | 1;
    *(s16 *) (e + 2)   = s;
}
