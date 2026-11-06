/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020714cc from projets/children-of-mana/src/auto/func_020714cc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u16 vu16;
extern u32 data_0213b3ec;
extern void func_0206dfbc(int a, void *b, u32 c);
extern u32 func_02078bf4(int a, int *b);
typedef struct {
    u8 pad0[12];
    u8 sub;
    u8 cnt;
    u8 pad1[4];
    u16 off;
} P2;
void func_0207b0e4(int param_1, P2 *param_2, int param_3) {
    vu16 local;
    u32 uVar5;
    u32 uVar4;
    int iVar4;
    int iVar3;
    int iVar2;
    u32 uVar1;

    iVar3                    = *(int *) (param_3 + 8);
    *(u32 *) (param_1 + 0xc) = data_0213b3ec;
    *(u8 *) (param_1 + 0x19) = *(u8 *) (param_3 + 0x18);
    *(int *) (param_1 + 8)   = (int) param_2;
    iVar4                    = param_3 + iVar3;
    local                    = 0;
    func_0206dfbc(local, (void *) (param_1 + 0x1a), (u32) * (u8 *) (param_1 + 0x19) << 1);
    uVar5 = 0;
    if (uVar5 < param_2->cnt) {
        int iVar5 = (int) &param_2->sub;
        uVar4     = uVar5;
        iVar4     = iVar4 + 4;
        do {
            iVar2 = iVar5 + param_2->off;
            {
                u32 uVar6 = iVar2 + *(u16 *) (iVar2 + 2);
                uVar1     = func_02078bf4(iVar4, (int *) (uVar6 + uVar4));
            }
            if ((s32) uVar1 >= 0) {
                *(u16 *) (param_1 + uVar1 * 2 + 0x1a) = uVar5 | 0x100;
            }
            uVar5 = uVar5 + 1;
            uVar4 = uVar4 + 0x10;
        } while (uVar5 < param_2->cnt);
    }
}
