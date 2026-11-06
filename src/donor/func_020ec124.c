/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ec124 from projets/nintendogs-chihuahua-friends/src/donor/func_020ec124.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u8 pad[12];
    s16 h12;
} Ent;
extern u32 data_02154d94;
extern s32 func_020f7178(void);
extern s32 func_020f03a0(void *p, s32 a, s32 b, s32 c);
extern void func_02071f4c(void *p, s32 a, s32 b);
s32 func_020ec124(Ent *param_1, s32 param_2, s32 param_3) {
    s32 ret;
    u8 *g;

    ret = 0;
    if (func_020f7178() != -11) {
        g   = (u8 *) &data_02154d94;
        ret = func_020f03a0(g, param_1->h12, 8, param_3);
        func_02071f4c(g, 0, param_2);
    }
    return ret;
}
