/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02121e44 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02121e44.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef int BOOL;
typedef struct Obj {
    void (*func)(s32 idx, s32 y);
    s32 base;
    u32 pad08;
    s32 top;
    s32 bottom;
    s32 count;
    u16 ids[16];
    s32 f38;
    s32 height;
    s32 pad40;
    s32 limit;
    s32 pos;
    s32 lower;
    s32 cursor;
    s32 pad54;
    s32 f58;
} Obj;
extern BOOL func_02101784(Obj *p);
extern void func_021018fc(Obj *p);
extern s32 func_020b8f2c(int a, u32 b);
extern s32 func_020b8f58(int a, u32 b);
extern void func_020b8d24(int a, u32 b, u32 c, u32 d);
extern void func_020b8dbc(int a, u32 b, u32 c, s32 d);
void func_02100fd8(Obj *P) {
    int i;
    int iVar4;
    int j;
    int iVar1;
    u32 uVar6;
    int two;
    u32 uVar5;
    int iVar2;
    int iVar3;
    s32 iVar8;

    if (!func_02101784(P)) {
        return;
    }
    if (P->lower > P->pos) {
        P->pos = P->pos + 1;
        func_021018fc(P);
    } else {
        P->pos = P->pos - 1;
        i      = 0;
        if (P->count > 0) {
            do {
                two   = 2;
                uVar6 = P->ids[i];
                iVar4 = P->height;
                iVar1 = func_020b8f2c(two, uVar6);
                j     = 0;
                if (iVar4 - 1 > 0) {
                    uVar5 = uVar6;
                    do {
                        iVar2 = func_020b8f58(two, (u16) uVar5);
                        iVar3 = func_020b8f2c(two, (u16) (uVar5 + 1));
                        func_020b8d24(two, (u16) (s32) uVar5, iVar2, iVar3);
                        uVar5 = uVar5 + 1;
                        j     = j + 1;
                    } while (j < iVar4 - 1);
                }
                uVar5 = uVar6 + iVar4 - 1;
                iVar8 = func_020b8f58(two, (u16) uVar5);
                func_020b8d24(two, (u16) (s32) uVar5, iVar8, iVar1);
                i = i + 1;
            } while (i < P->count);
        }
        P->cursor = P->cursor - 1;
        if (P->cursor < 0) {
            P->cursor = P->height - 1;
        }
        if (P->pos - 1 >= 0 && P->pos - P->height < P->lower) {
            P->func(P->cursor, P->pos - 1);
        }
    }
    iVar8 = P->base;
    {
        s32 h   = P->limit - P->height + 2;
        s32 pos = P->pos;
        u32 id  = (u16) (iVar8 + 7);
        s32 y   = P->top * (h - pos) / h + P->bottom * pos / h;
        s32 bc  = func_020b8f2c(2, id);
        func_020b8dbc(2, id, 0, y - bc);
        func_020b8dbc(2, (u16) (iVar8 + 8), 0, y - bc);
    }
    P->f58 = 0;
    P->f38 = 0;
}
