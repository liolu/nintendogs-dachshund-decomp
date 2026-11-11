/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ef740 from projets/nintendogs-chihuahua-friends/src/donor/func_020ef740.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef volatile u32 vu32;
typedef struct {
    u8 pad[0x20];
    u32 f20;
    u32 f24;
} Obj;
extern Obj data_02154f24;
extern u32 data_02154f5c;
extern u16 data_02147108;
extern void func_0207472c(void *p, int a, int b);
extern void func_02072114(void *p, int a, int b);
extern void func_02071f4c(void *p, int a, int b);
int func_020ef740(int param_1, int param_2) {
    Obj *o;
    vu32 *g;

    o      = &data_02154f24;
    o->f20 = 0;
    g      = (vu32 *) &data_02154f5c;
    if (*g == 0 && o->f24 == 0) {
        func_0207472c((void *) g, 0x43, 0);
        o->f24 = 1;
    }
    if (*g != 0 && o->f24 != 0) {
        func_02072114((void *) g, data_02147108, (param_2 >> 1) - 0x40);
        func_02071f4c((void *) g, 0xe, (s16) param_1);
        return 1;
    }
    return 0;
}
