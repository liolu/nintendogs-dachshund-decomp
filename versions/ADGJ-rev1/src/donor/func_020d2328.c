/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d2328 from projets/nintendogs-chihuahua-friends/src/donor/func_020d2328.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern void func_02069668(void *a, void *b, void *c);
extern void func_020ec220(void *p, s32 a, u32 b);
void func_020d2328(u8 *param_1, u32 *param_2) {
    s32 iVar4;
    s32 iVar3;
    s32 iVar5;
    u32 uVar2;
    u32 uVar7;
    s64 lVar1;

    iVar5 = *(s32 *) (param_1 + 0x214);
    func_02069668(param_1 + 0xbc, param_2, param_1 + 0xbc);
    *(s32 *) (param_1 + 0xb0) = *(s32 *) (param_1 + 0xb0) + (s32) param_2[0];
    *(s32 *) (param_1 + 0xb8) = *(s32 *) (param_1 + 0xb8) + (s32) param_2[2];
    uVar2                     = *(u32 *) (param_1 + 0x24);
    iVar3                     = *(s32 *) (param_1 + 0xb8);
    iVar4                     = *(s32 *) (param_1 + 0xb0);
    if (iVar3 <= 0) {
        iVar3 = -iVar3;
    }
    if (iVar4 <= 0) {
        iVar4 = -iVar4;
    }
    iVar4 = iVar4 + iVar3;
    lVar1 = (s64) iVar4 * (s64) (s32) uVar2 + 0x800;
    uVar7 = (u32) (lVar1 >> 12);
    if (*(s32 *) (iVar5 + 0x14) == 0) {
        lVar1 = (s64) (s32) uVar7 * (s64) (s32) uVar2 + 0x800;
        func_020ec220(param_1 + 400, 1, (u32) (lVar1 >> 12));
    }
}
