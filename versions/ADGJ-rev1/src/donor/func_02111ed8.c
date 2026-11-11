/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02111ed8 from projets/nintendogs-chihuahua-friends/src/donor/func_02111ed8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern void func_020275b8(u8 *p, s32 *a);
extern void func_020275e0(u8 *p, s32 *a);
extern void func_02069668(s32 *a, s32 *b, s32 *c);
extern s32 func_020280f8(u8 *p);
extern s32 func_0206902c(s32 a);
extern s32 func_02069098(s32 a, s32 b);
u32 func_02111ed8(u8 *param_1, s32 *param_2, s32 param_3, s32 *param_4) {
    s32 blk[9];
    s32 iVar4;
    s32 iVar5;
    s32 uVar6;
    s32 uVar7;
    s32 uVar8;
    s32 uVar10;
    s64 lVar1;
    s64 lVar2;
    s64 lVar3;
    s64 lVar4;
    s64 lVar5;
    s64 lVar6;
    s64 hY;
    s64 hX;
    s64 hZ;

    func_020275b8(param_1, &blk[6]);
    func_020275e0(param_1, &blk[3]);
    func_02069668(&blk[6], &blk[3], &blk[0]);
    blk[0] = blk[0] >> 1;
    blk[1] = blk[1] >> 1;
    blk[2] = blk[2] >> 1;
    iVar4  = func_020280f8(param_1);
    iVar5  = func_020280f8(param_1);
    iVar4  = param_3 + ((iVar4 << 1) + (iVar5 >> 2));
    uVar10 = param_2[1] - blk[1];
    if (uVar10 >= iVar4 || uVar10 <= -iVar4) {
        goto fail;
    }
    uVar8 = param_2[0] - blk[0];
    if (uVar8 >= iVar4 || uVar8 <= -iVar4) {
        goto fail;
    }
    uVar7 = param_2[2] - blk[2];
    if (uVar7 >= iVar4 || uVar7 <= -iVar4) {
        goto fail;
    }
    hY    = uVar10;
    hX    = uVar8;
    hZ    = uVar7;
    lVar1 = (s64) uVar7 * (s64) uVar7 + 0x800;
    lVar2 = (s64) uVar8 * (s64) uVar8 + 0x800;
    lVar3 = (s64) uVar10 * (s64) uVar10 + 0x800;
    iVar5 = (s32) ((u32) (lVar1 >> 12)) + ((s32) ((u32) (lVar2 >> 12)) + (s32) ((u32) (lVar3 >> 12)));
    if (iVar5 == 0) {
        goto fail;
    }
    lVar1 = (s64) iVar4 * (s64) iVar4 + 0x800;
    if (iVar5 >= (s32) ((u32) (lVar1 >> 12))) {
        goto fail;
    }
    iVar5      = func_0206902c(iVar5);
    uVar6      = func_02069098(iVar4 - iVar5, iVar5);
    lVar4      = hX * (s64) uVar6 + 0x800;
    param_4[0] = param_4[0] + (s32) ((u32) (lVar4 >> 12));
    lVar5      = hY * (s64) uVar6 + 0x800;
    param_4[1] = param_4[1] + (s32) ((u32) (lVar5 >> 12));
    lVar6      = hZ * (s64) uVar6 + 0x800;
    param_4[2] = param_4[2] + (s32) ((u32) (lVar6 >> 12));
    return 1;
fail:
    return 0;
}
