/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208fab4 from projets/nintendogs-shiba-friends/src/donor/func_0208fab4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02153708;
typedef struct {
    u16 fl;
    s16 idx;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} Ent;
typedef struct {
    u8 pad0[4];
    u16 st;
    u8 pad1[8];
    s16 cur;
    u8 pad2[12];
    s16 nxt;
    u8 pad3[2];
    Ent ent[3];
} G;
extern void func_02090508(u8 *p, s32 v);
void func_0208fab4(u16 param_1, s32 param_2) {
    s16 sVar1;
    G *g;
    Ent *e;

    g = *(G **) &data_02153708;
    func_02090508((u8 *) g, 11);
    g->st  = 5;
    g->cur = param_1;
    sVar1  = g->cur;
    e      = &(*(G **) &data_02153708)->ent[sVar1];
    e->fl |= 1;
    e->idx = sVar1;
    sVar1  = (s16) ((g->cur + 1) % 3);
    e      = &(*(G **) &data_02153708)->ent[sVar1];
    e->fl |= 1;
    e->fl |= 2;
    e->a   = param_2;
    e->b   = param_2 + 0x85c;
    e->c   = param_2 + 0x210c;
    g->nxt = sVar1;
}
