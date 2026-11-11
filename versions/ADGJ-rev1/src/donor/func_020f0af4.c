/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f0af4 from projets/nintendogs-chihuahua-friends/src/donor/func_020f0af4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u16 a[4];
    u16 b[4];
    u16 c[4];
    u8 pad[16];
    s32 p[4];
} Tab;
extern Tab data_02154f24;
extern void func_02072214(void *p, u32 a, u32 b);
s32 func_020f0af4(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    Tab *t = &data_02154f24;
    u32 p3 = param_3;
    s32 i  = 0;
    for (;;) {
        if (t->p[i] != 0 && param_1 == t->a[i] && param_2 == t->b[i]) {
            func_02072214(&t->p[i], p3, param_4);
            t->c[i] = (u16) p3;
            return i;
        }
        i = (s16) (i + 1);
        if (i >= 4) {
            break;
        }
    }
    return -1;
}
