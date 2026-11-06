/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020bc1c8 from projets/nintendogs-chihuahua-friends/src/donor/func_020bc1c8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern s32 func_021060d4(void);
extern void func_020b8b0c(u32 a, u32 b, u32 c);
void func_020bc1c8(u32 param_1) {
    u32 local[3];
    s32 v;
    s32 i;

    v = func_021060d4();
    i = 0;
    do {
        local[i] = 0;
        i++;
    } while (i < 3);
    if (v >= 0) {
        if (v < 3) {
            local[v] = 1;
        }
    }
    i = 0;
    do {
        func_020b8b0c(2, (u16) param_1, local[i]);
        i++;
        param_1++;
    } while (i < 3);
}
