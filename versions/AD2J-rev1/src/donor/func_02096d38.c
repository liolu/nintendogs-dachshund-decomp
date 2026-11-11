/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02096d38 from projets/nintendogs-shiba-friends/src/donor/func_02096d38.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern void *func_01ffda04(s32 x);
extern s32 func_020c9d30(s32 a, s32 b);
void func_02096d38(u8 *param_1, s32 param_2) {
    s32 cnt;
    s32 i;
    void *r;
    s32 t;
    cnt = 0;
    i   = cnt;
    do {
        r = func_01ffda04(i);
        if (r != ((void *) 0)) {
            cnt = (s16) (cnt + 1);
        }
        i = (s16) (i + 1);
    } while (i < 3);
    t = func_020c9d30(0, param_2);
    if (t > cnt) {
        t = cnt;
    }
    *(s16 *) (param_1 + 0x10c) = (s16) t;
}
