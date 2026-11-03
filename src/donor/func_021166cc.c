/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cd1e8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020cd1e8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_02069634(s32 *a, s32 *b, s32 *c);
extern s32 func_020695f0(s32 *a, s32 *b);
extern s32 func_02069098(s32 a, s32 b);
extern s32 func_01ffda04(s32 a);
extern u8 func_02033de0(s32 a);
extern void func_0211299c(s32 a, s32 *b);
extern void func_02027518(s32 a, s32 *b);
extern s32 func_02112a3c(s32 a);
void func_021166cc(s32 *param_1, s32 *param_2, s32 *param_3, s32 *param_4, s32 *param_5, s32 param_6) {
    s32 iVar7;
    s32 local_88;
    s32 aiStack_84[3];
    s32 aiStack_78[3];
    s32 local_6c[3];
    s32 local_60[3];
    s32 aiStack_54[3];
    s32 aiStack_48[3];
    s32 aiStack_3c[3];
    s32 aiStack_30[3];
    s32 iVar6;
    s32 iVar5;
    s32 iVar10;
    s32 uVar3;
    s32 uVar4;
    u8 bVar2;

    if (param_6 != 0) {
        iVar10 = *(s32 *) ((u8 *) param_6 + 0xf8) + 0x1000;
        func_01ff832c(-iVar10, param_5, (s32 *) ((u8 *) param_6 + 0xbc), param_1);
        func_01ff832c(iVar10, param_5, (s32 *) ((u8 *) param_6 + 0xbc), param_2);
        uVar3 = func_020695f0((s32 *) ((u8 *) param_6 + 0xb0), param_5);
        uVar3 = ((s32) ((((s64) (uVar3) * (s64) (0x3c000)) + 0x800) >> 12));
        if (uVar3 > 0) {
            func_01ff832c(uVar3, param_5, param_2, param_2);
        } else {
            func_01ff832c(uVar3, param_5, param_1, param_1);
        }
        func_02069634(param_1, param_3, aiStack_54);
        uVar3 = func_020695f0(aiStack_54, param_5);
        uVar4 = func_020695f0(aiStack_54, param_4);
        iVar7 = func_02069098(uVar3, uVar4);
        func_02069634(param_2, param_3, aiStack_48);
        uVar3    = func_020695f0(aiStack_48, param_5);
        uVar4    = func_020695f0(aiStack_48, param_4);
        local_88 = func_02069098(uVar3, uVar4);
    } else {
        iVar7    = 0x64000;
        local_88 = -iVar7;
    }
    iVar6 = 0;
    do {
        iVar5 = func_01ffda04(iVar6);
        if (iVar5 != 0) {
            bVar2 = func_02033de0(iVar5);
            if (bVar2 == 0) {
                func_0211299c(iVar5, aiStack_84);
                func_02027518(iVar5, aiStack_78);
                iVar10 = func_02112a3c(iVar6) + 0x1000;
                func_01ff832c(-iVar10, param_5, aiStack_84, local_6c);
                func_01ff832c(iVar10, param_5, aiStack_84, local_60);
                uVar3 = func_020695f0(aiStack_78, param_5);
                uVar3 = ((s32) ((((s64) (uVar3) * (s64) (0x1e000)) + 0x800) >> 12));
                if (uVar3 > 0) {
                    func_01ff832c(uVar3, param_5, local_60, local_60);
                } else {
                    func_01ff832c(uVar3, param_5, local_6c, local_6c);
                }
                func_02069634(local_6c, param_3, aiStack_3c);
                uVar3 = func_020695f0(aiStack_3c, param_5);
                uVar4 = func_020695f0(aiStack_3c, param_4);
                iVar5 = func_02069098(uVar3, uVar4);
                if (iVar5 < iVar7) {
                    param_1[0] = local_6c[0];
                    param_1[1] = local_6c[1];
                    param_1[2] = local_6c[2];
                    iVar7      = iVar5;
                }
                func_02069634(local_60, param_3, aiStack_30);
                uVar3 = func_020695f0(aiStack_30, param_5);
                uVar4 = func_020695f0(aiStack_30, param_4);
                iVar5 = func_02069098(uVar3, uVar4);
                if (iVar5 > local_88) {
                    param_2[0] = local_60[0];
                    param_2[1] = local_60[1];
                    param_2[2] = local_60[2];
                    local_88   = iVar5;
                }
            }
        }
        iVar6 = (s16) (iVar6 + 1);
    } while (iVar6 < 3);
}
