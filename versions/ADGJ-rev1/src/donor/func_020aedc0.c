/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020aedc0 from projets/nintendogs-chihuahua-friends/src/donor/func_020aedc0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02153700;
extern u32 data_02153740;
extern u32 data_02153894;
extern void func_020b1108(u32 v);
void func_020aedc0(void) {
    u8 *q;
    u32 a;
    u32 b;
    u32 c;
    s32 d;
    u8 *p;
    u32 *w;

    q = *(u8 **) (*(u8 **) &data_02153700 + 0x34);
    a = q ? *(s16 *) (q + 0x12) : 0;
    b = q ? *(s16 *) (q + 0x14) : 0;
    c = q ? *(s16 *) (q + 0x16) : 0;
    d = q ? *(s16 *) (q + 0x10) : 0;
    if (*(u32 *) (*(u8 **) &data_02153740 + 0xa8) == 6) {
        p                    = *(u8 **) &data_02153894;
        *(u32 *) (p + 0x184) = a / 10;
        w                    = (u32 *) (p + 0x184);
        w[1]                 = b / 10;
        w[2]                 = c / 10;
        w[3]                 = d;
        func_020b1108(10);
    }
}
