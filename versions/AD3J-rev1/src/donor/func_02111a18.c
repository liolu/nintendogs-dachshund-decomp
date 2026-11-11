/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c7ec8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c7ec8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    u32 w[15];
} Tbl15;
extern s64 data_021245c4;
extern u32 data_02148e08[15];
extern void func_02027630(int a, int *b);
extern void func_02069634(int *a, int *b, int *c);
extern int func_020069bc(int *a, int *b);
extern u32 func_020695f0(int *a, int *b);
extern int func_02106d08(int a);
extern void func_02111940(u8 *a, int b, u32 c);
void func_02111a18(int param_1, u8 *param_2) {
    s64 lVar1;
    int iVar2;
    u32 uVar3;
    u32 uVar4;
    int iVar5;
    int a3[3];
    Tbl15 tbl;
    u32 *row;

    func_02027630(param_1, a3);
    func_02069634(a3, (int *) (param_2 + 0xbc), a3);
    lVar1 = (s64) a3[0] * a3[0] + (s64) a3[1] * a3[1] + (s64) a3[2] * a3[2];
    if (lVar1 < data_021245c4) {
        iVar5 = 0;
    } else {
        iVar5 = func_020069bc(a3, a3);
    }
    if (iVar5 == 0) {
        return;
    }
    uVar3 = func_020695f0(a3, (int *) (param_2 + 0xb0));
    if ((s32) uVar3 < 410) {
        uVar4 = 0;
    } else {
        tbl = *(Tbl15 *) data_02148e08;
        if ((s32) uVar3 < 0x4cd) {
            iVar5 = 0;
        } else if ((s32) uVar3 < 0x800) {
            iVar5 = 1;
        } else {
            iVar5 = 2;
        }
        iVar2 = func_02106d08(*(s16 *) (param_2 + 0x94));
        row   = (u32 *) ((u8 *) tbl.w + iVar2 * 12);
        uVar4 = row[iVar5];
    }
    func_02111940(param_2, param_1, uVar4);
}
