/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c3570 from projets/nintendogs-chihuahua-friends/src/donor/func_020c3570.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02154c1c;
extern u32 func_02003844(u8 *p, s32 n);
extern void func_020c4914(u8 *p);
extern u32 func_0200348c(u8 *p, s32 n);
extern void func_0207e40c(u32 a, u32 b);
extern void func_0208ba94(u8 *p);
extern void func_0200668c(u32 a, u32 b);
extern void func_020c3698(void);
u8 *func_020c3570(u8 *param_1) {
    s32 m;
    u8 *obj;
    s32 i;
    u8 *q;
    s32 j;
    s32 k;

    obj                = (u8 *) func_02003844(param_1, 0x278);
    *(u16 *) obj       = 0;
    *(u16 *) (obj + 2) = 0;
    func_020c4914(obj + 4);
    *(u32 *) (obj + 0x28) = func_0200348c(param_1, 0xc800);
    func_0207e40c(*(u32 *) (obj + 0x28), 0x49464348);
    i                     = 0;
    *(u32 *) (obj + 0x2c) = 0;
    *(u16 *) (obj + 50)   = 0;
    *(u16 *) (obj + 52)   = 0;
    *(u16 *) (obj + 54)   = 0;
    q                     = obj + 56;
    j                     = 0;
    do {
        func_0208ba94(q);
        *(u32 *) (q + 0x44) = j;
        i                   = i + 1;
        *(u32 *) (q + 0x48) = j;
        q                   = q + 76;
    } while (i < 4);
    q = obj + 360;
    k = 0;
    j = 0;
    do {
        *(u16 *) q         = 0;
        *(u16 *) (q + 2)   = 0;
        *(u32 *) (q + 4)   = 0;
        *(u32 *) (q + 8)   = 0;
        j                  = j + 1;
        *(u32 *) (q + 0xc) = 0;
        q                  = q + 16;
    } while (j < 4);
    q = obj + 424;
    m = 0;
    do {
        *(u16 *) q       = 0xffff;
        *(u16 *) (q + 2) = 0;
        *(u32 *) (q + 4) = 0;
        *(u32 *) (q + 8) = 0;
        m                = (s16) (m + 1);
        q                = q + 12;
    } while (m < 16);
    *(u32 *) (obj + 0x268) = 0;
    *(u32 *) (obj + 0x270) = 0;
    *(u32 *) (obj + 0x26c) = 0;
    *(u32 *) (obj + 0x274) = 0;
    func_0200668c(7, (u32) func_020c3698);
    *(u32 *) &data_02154c1c = (u32) obj;
    return obj;
}
