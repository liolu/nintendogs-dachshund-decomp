/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ea730 from projets/nintendogs-chihuahua-friends/src/donor/func_020ea730.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    s32 v[3];
} T3;
extern u8 data_02154cb8[];
extern u8 data_02130734[];
extern u8 data_02130735[];
extern u16 data_021470e8;
extern s32 data_0214b484;
extern s16 data_02130684[];
extern u8 data_02154dd8[];
extern s32 func_020f7178(void);
extern void func_02072320(s32 *, s32);
extern u32 func_020ea564(s32 *);
extern void func_02074670(s32 *, s32, s32, s32, s32, s32);
extern void func_0207472c(s32 *, s32, s32);
extern void func_02072144(s32 *, u32, s32);
extern void func_02071f4c(s32 *, s32, s32);
extern void func_0207226c(s32 *, s32);
extern s32 func_020ea52c(s32 *);
extern void func_02072114(s32 *, u32, s32);
extern s32 _s32_div_f(s32, s32);
extern s32 func_02044630(void);
extern s32 func_01ffda04(s32);
extern s32 func_02027f40(s32, s32);
extern void func_020ecba4(s32);
void func_020ea730(s32 *param_1, s32 *param_2) {
    u32 uVar5;
    u32 uVar6;
    s32 bVar4;
    u32 uVar14;
    s32 iVar8;
    s32 uVar12;
    s32 iVar9;
    s32 iVar7;
    u32 unaff_r7;
    u32 uVar1;
    s16 i;
    s32 *piVar10;

    {
        u32 idx = (u16) (*(u16 *) (data_02154cb8 + 0x18)) * 6;
        uVar5   = data_02130734[idx];
        uVar6   = data_02130735[idx];
    }
    bVar4 = 0;
    iVar8 = func_020f7178();
    if (param_2 != 0) {
        *(T3 *) (param_1 + 0x11) = *(T3 *) param_2;
    }
    i = 0;
    if (i < param_1[0]) {
        piVar10 = param_1 + 6;
        uVar14  = uVar6 - uVar5;
        do {
            uVar12 = ((s16 *) param_1 + i)[9];
            uVar1  = (u16) (1u << i);
            if (iVar8 != -11) {
                goto L118;
            }
            func_02072320(piVar10, 10);
            {
                s32 v4                        = *(u16 *) ((u8 *) param_1 + 4);
                *(u16 *) ((u8 *) param_1 + 4) = v4 & ~uVar1;
            }
            *(u16 *) ((u8 *) param_1 + 0x2a) &= ~uVar1;
            goto L218;
        L118:
            if (*(u16 *) ((u8 *) param_1 + 4) == 0) {
                goto L160;
            }
            if ((*(u16 *) ((u8 *) param_1 + 4) & uVar1) == 0) {
                goto L160;
            }
            if ((*(u16 *) ((u8 *) param_1 + 6) & uVar1) != 0) {
                goto L160;
            }
            func_02072320(piVar10, 0);
            {
                s32 v4                        = *(u16 *) ((u8 *) param_1 + 4);
                *(u16 *) ((u8 *) param_1 + 4) = v4 & ~uVar1;
            }
            *(u16 *) ((u8 *) param_1 + 0x2a) &= ~uVar1;
        L160:
            if ((*(u16 *) ((u8 *) param_1 + 8) & uVar1) == 0) {
                goto L218;
            }
            iVar7 = *(s16 *) ((u8 *) param_1 + 36);
            if (bVar4 == 0) {
                unaff_r7 = func_020ea564(param_2);
                bVar4    = 1;
            }
            if (unaff_r7 >= uVar6) {
                goto L20c;
            }
            if (((s16 *) param_1 + i)[9] >= 0x44) {
                func_0207472c(piVar10, ((s16 *) param_1 + i)[6], uVar12);
                goto L1fc;
            }
            func_02074670(piVar10, iVar7, -1, -1, ((s16 *) param_1 + i)[6], uVar12);
            if ((param_1 + i)[14] != 0) {
                func_02072144(piVar10, data_021470e8, (param_1 + i)[14]);
            }
        L1fc:
            func_02071f4c(piVar10, 8, iVar7);
        L20c:
            *(u16 *) ((u8 *) param_1 + 8) ^= uVar1;
        L218:
            if (*piVar10 == 0) {
                goto L3e0;
            }
            iVar7 = -1;
            if (data_0214b484 != 0) {
                iVar7 = func_02044630();
            }
            if ((1u << uVar12 & 0x0e460007) != 0) {
                iVar9 = data_02130684[*(u16 *) ((u8 *) param_1 + 0x26)];
            } else {
                iVar9 = 127;
            }
            if (iVar7 != -1 && *(s16 *) ((u8 *) param_1 + 36) != iVar7) {
                iVar9 = iVar9 >> 1;
            }
            if (bVar4 == 0) {
                unaff_r7 = func_020ea564(param_2);
                bVar4    = 1;
            }
            if (unaff_r7 > uVar5) {
                if (unaff_r7 < uVar6) {
                    iVar9 = _s32_div_f(iVar9 * (uVar6 - unaff_r7), uVar14);
                } else {
                    iVar9 = 0;
                    func_02072320(piVar10, iVar9);
                    if ((*(u16 *) ((u8 *) param_1 + 4) & uVar1) != 0) {
                        *(u16 *) ((u8 *) param_1 + 4) ^= uVar1;
                    }
                }
            }
            if ((*(u16 *) ((u8 *) param_1 + 0x2a) & uVar1) == 0) {
                goto L390;
            }
            if (uVar12 > 37) {
                goto L300;
            }
            if (uVar12 != 37) {
                goto L390;
            }
            goto L32c;
        L300:
            if (uVar12 > 53) {
                goto L390;
            }
            if (uVar12 < 49) {
                goto L390;
            }
            if (uVar12 == 49) {
                goto L364;
            }
            if (uVar12 == 50) {
                goto L364;
            }
            if (uVar12 != 53) {
                goto L390;
            }
            goto L364;
        L32c:
            if ((param_1 + i)[11] == 0) {
                func_02071f4c(piVar10, 7, 90);
            } else {
                func_02071f4c(piVar10, 7, 127);
            }
            goto L390;
        L364:
            iVar7 = (s16) (((param_1 + i)[11] >> 5) + 64);
            if (iVar7 > 127) {
                iVar7 = 127;
            }
            func_02071f4c(piVar10, 13, iVar7);
        L390:
            if (uVar12 >= 41 && uVar12 <= 46 && iVar9 < 30) {
                func_02072320(piVar10, 0);
                goto L3e0;
            }
            func_0207226c(piVar10, iVar9);
            iVar7 = func_020ea52c(param_2);
            func_02072114(piVar10, data_021470e8, iVar7);
        L3e0:
            if ((*(u16 *) ((u8 *) param_1 + 10) & uVar1) != 0 && *piVar10 == 0) {
                *(u16 *) ((u8 *) param_1 + 10) &= ~uVar1;
                *(u16 *) ((u8 *) param_1 + 0x2a) &= ~uVar1;
            }
            piVar10 = piVar10 + 1;
            i++;
        } while (i < param_1[0]);
    }
    *(u16 *) ((u8 *) param_1 + 6) = 0;
    if (*(s32 *) (data_02154dd8 + 0x100) == 0) {
        return;
    }
    func_020ecba4(func_02027f40(func_01ffda04(*(s16 *) ((u8 *) param_1 + 36)), 7));
}
