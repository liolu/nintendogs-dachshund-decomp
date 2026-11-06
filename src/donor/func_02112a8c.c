/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02112a8c from projets/nintendogs-chihuahua-friends/src/donor/func_02112a8c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern int func_01ffda04(int a);
extern int func_02033de0(int a);
extern void func_02027630(int a, int *b);
extern u32 func_020280f8(int a);
extern void func_02069634(int *a, u32 *b, int *c);
extern u32 func_020695f0(int *a, u32 *b);
extern int func_02069098(u32 a, u32 b);
typedef struct {
    int aiStack_3c[3];
    int iStack_30;
    int local_2c;
} Loc;
void func_02112a8c(u16 *param_1, u16 *param_2, u32 *param_3, u32 *param_4, u32 *volatile param_5) {
    int iVar7;
    int iVar6;
    int iVar5;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    Loc L;

    iVar6            = 0x64000;
    *(s16 *) param_2 = -1;
    *(s16 *) param_1 = -1;
    iVar5            = -0x64000;
    iVar7            = 0;
    do {
        iVar2 = func_01ffda04(iVar7);
        if (iVar2 != 0 && func_02033de0(iVar2) == 0) {
            func_02027630(iVar2, &L.iStack_30);
            uVar3 = func_020280f8(iVar2);
            L.local_2c += (s32) ((((s64) (s32) uVar3) * 0x2000 + 0x800) >> 12);
            func_02069634(&L.iStack_30, param_3, L.aiStack_3c);
            uVar3 = func_020695f0(L.aiStack_3c, param_5);
            uVar4 = func_020695f0(L.aiStack_3c, param_4);
            iVar2 = func_02069098(uVar3, uVar4);
            if (iVar2 < iVar6) {
                *param_1 = (u16) iVar7;
                iVar6    = iVar2;
            }
            if (iVar2 > iVar5) {
                *param_2 = (u16) iVar7;
                iVar5    = iVar2;
            }
        }
        iVar7 = (s16) (iVar7 + 1);
    } while (iVar7 < 3);
}
