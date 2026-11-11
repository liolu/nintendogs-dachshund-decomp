/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02122768 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02122768.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef struct Obj {
    void (*func)(s32 idx, s32 y);
    u32 pad04[4];
    s32 count;
    u16 ids[18];
    s32 height;
    s32 pad40;
    s32 limit;
    s32 pos;
    s32 lower;
    s32 cursor;
} Obj;
extern s32 func_020b8f2c(int a, u32 b);
extern s32 func_020b8f58(int a, u32 b);
extern void func_020b8d24(int a, u32 b, u32 c, u32 d);
void func_021018fc(Obj *P) {
    int iVar1;
    int i;
    u32 uVar6;
    int iVar7;
    u32 uVar5;
    int two;
    int iVar4;
    int iVar2;
    int iVar3;

    i = 0;
    if (P->count > 0) {
        do {
            two   = 2;
            uVar6 = P->ids[i];
            iVar4 = P->height;
            iVar1 = func_020b8f2c(two, (u16) (uVar6 + iVar4 - 1));
            iVar7 = iVar4 - 1;
            if (iVar7 >= 1) {
                uVar5 = uVar6 + iVar7;
                do {
                    iVar2 = func_020b8f58(two, (u16) uVar5);
                    iVar3 = func_020b8f2c(two, (u16) (uVar5 - 1));
                    func_020b8d24(two, (u16) (s32) uVar5, iVar2, iVar3);
                    uVar5 = uVar5 - 1;
                    iVar7 = iVar7 - 1;
                } while (iVar7 >= 1);
            }
            iVar4 = func_020b8f58(two, uVar6);
            func_020b8d24(two, uVar6, iVar4, iVar1);
            i = i + 1;
        } while (i < P->count);
    }
    P->cursor = P->cursor + 1;
    if (P->cursor >= P->height) {
        P->cursor = 0;
    }
    iVar7 = P->cursor;
    if (iVar7 == 0) {
        iVar7 = P->height - 1;
    } else {
        iVar7 = iVar7 - 1;
    }
    if (P->pos + P->height - 2 >= P->limit) {
        return;
    }
    if (P->pos + P->height <= P->lower) {
        return;
    }
    P->func(iVar7, P->pos + P->height - 2);
}
