/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020eca58 from projets/nintendogs-chihuahua-friends/src/donor/func_020eca58.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    u8 pad[0x24];
    s32 f24;
    s32 f28;
    s32 f2c;
} Glob;
extern Glob data_02154d88;
extern u32 func_020ebecc(s32 *p, s32 n);
void func_020eca58(s32 *param_1) {
    Glob *g;
    s32 iVar3;
    u32 uVar2;

    g = &data_02154d88;
    if (g->f24 == 0) {
        return;
    }
    uVar2 = func_020ebecc(param_1, 6);
    iVar3 = 0;
    if (uVar2 != 0xffffffff) {
        iVar3 = g->f28;
        if (iVar3 < 0) {
            iVar3 = -iVar3;
        }
        *(s32 *) ((u8 *) param_1 + uVar2 * 4 + 0x28) = iVar3;
        *(u16 *) ((u8 *) param_1 + 0x26)             = *(u16 *) ((u8 *) param_1 + 0x26) | (1 << uVar2);
    }
    if (iVar3 <= 30) {
        goto zero;
    }
    g->f2c = g->f2c + 1;
    if (5 < (u32) g->f2c) {
        g->f24 = 0;
        g->f28 = 0;
        g->f2c = 0;
    }
    return;
zero:
    g->f24 = 0;
    g->f28 = 0;
    g->f2c = 0;
}
