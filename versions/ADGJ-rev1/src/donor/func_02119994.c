/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02119994 from projets/nintendogs-chihuahua-friends/src/donor/func_02119994.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct {
    u32 w[3];
} T12;
extern void func_021170f0(u32 *a, u32 *b, u32 c, u32 d, u32 e);
void func_02119994(u32 *param_1, u32 *param_2) {
    func_021170f0(param_2, param_1, param_1[7], *(u16 *) (param_1 + 6), *(u16 *) ((u8 *) param_1 + 0x1a));
    *(T12 *) ((u8 *) param_2 + 12) = *(T12 *) param_1;
    *(T12 *) ((u8 *) param_2 + 24) = *(T12 *) ((u8 *) param_1 + 12);
    param_2[9]                     = param_1[8];
}
