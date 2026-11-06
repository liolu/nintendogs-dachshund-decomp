/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200668c from projets/nintendogs-chihuahua-friends/src/donor/func_0200668c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_0214b028;
u32 func_0200668c(u32 param_1, u32 param_2) {
    u32 r  = 0;
    u8 *p  = (u8 *) data_0214b028;
    u32 *t = *(u32 **) (p + 0x28);
    if (t != ((void *) 0)) {
        if (param_1 < *(u16 *) (p + 10)) {
            t[param_1] = param_2;
            r          = 1;
        }
    }
    return r;
}
