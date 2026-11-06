/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020eeeb0 from projets/nintendogs-chihuahua-friends/src/donor/func_020eeeb0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02154dd8[];
extern void func_02071f84(u8 *p, s32 i, s16 *q);
extern u8 *func_01ffda04(s32 i);
extern void func_020f1cd4(u8 *p, s32 v);
void func_020eeeb0(void) {
    u8 *base;
    s32 i;
    s16 *q;
    s16 s1;
    s16 s2;
    u8 *p;

    base = data_02154dd8;
    if (*(u16 *) (base + 0x36) != 0) {
        return;
    }
    if (*(s32 *) base != 0) {
        q = (s16 *) (base + 0x12);
        i = 0;
        do {
            s1 = *(volatile s16 *) (base + i * 2 + 0x12);
            func_02071f84(base, i, q);
            s2 = *(s16 *) ((u8 *) base + (i << 1) + 0x12);
            if (s1 != s2 && s2 > 0) {
                p = func_01ffda04(i);
                if (p != ((void *) 0)) {
                    func_020f1cd4(p, *(s16 *) ((u8 *) base + (u32) i * 2 + 0x12) + 0x3d);
                }
            }
            i = (s16) (i + 1);
            q = q + 1;
        } while (i < 3);
    }
}
