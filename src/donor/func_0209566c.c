/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209566c from projets/nintendogs-shiba-friends/src/donor/func_0209566c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef struct {
    u16 a;
    u16 b;
} H2;
extern u32 data_0215371c;
extern void func_020ae9d8(u32 a);
extern void func_020aea3c(void);
extern void func_02097480(int a);
void func_0209566c(s16 *param_1, int param_2, u32 param_3) {
    s16 sv;
    u16 t2;
    u16 t1;
    param_1[20]           = (s16) param_2;
    sv                    = param_1[19];
    param_1[64]           = sv;
    ((u16 *) param_1)[23] = 4;
    ((u16 *) param_1)[24] = 0;
    switch (param_2) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 22:
            break;
        case 5:
            *(u16 *) &data_0215371c = param_1[19];
            return;
        case 12:
            func_020aea3c();
            return;
        case 11:
            func_020ae9d8(param_3);
            return;
        case 35:
            return;
        case 36:
            return;
        case 21:
            *(H2 *) &((u16 *) param_1)[137] = *(H2 *) &((u16 *) param_1)[135];
            func_02097480((int) param_1);
            break;
    }
}
