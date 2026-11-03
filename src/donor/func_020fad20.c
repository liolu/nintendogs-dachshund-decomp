/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211b718 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0211b718.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u32 w[8];
} Ent32;
extern s16 data_0213d4d0[];
extern u16 func_020c9534(void);
extern void func_020b53f4(void);
s32 func_020fad20(u32 *param_1, u32 param_2, s32 param_3) {
    s32 iVar7;
    u16 uVar3;
    s16 sVar1;
    s16 *psVar2;

    iVar7  = 0;
    uVar3  = func_020c9534();
    psVar2 = data_0213d4d0;
    func_020b53f4();
    sVar1 = psVar2[2];
    while (sVar1 != -1) {
        if (((*psVar2 == param_3) && (((u16 *) psVar2)[6] != 0)) &&
            ((((u16 *) psVar2)[10] & 0x100) == 0 || ((s32) uVar3 != psVar2[1]))) {
            *(Ent32 *) param_1 = *(Ent32 *) psVar2;
            param_1            = param_1 + 8;
            iVar7              = iVar7 + 1;
        }
        psVar2 = psVar2 + 0x10;
        sVar1  = psVar2[2];
    }
    return iVar7;
}
