/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020bca58 from projets/nintendogs-chihuahua-friends/src/donor/func_020bca58.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 func_01ffda04(s32 v);
extern u32 *func_02028144(s32 v);
extern s32 func_020caa40(u32 v);
extern void func_020b8c1c(s32 a, s32 b, s32 c);
extern void func_020bdd48(u32 *p, s32 a, u16 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
extern void func_020bce84(void);
extern void func_020bce64(void);
extern void func_020bce60(void);
extern void func_020bce44(void);
extern void func_020bce28(void);
extern void func_020bcdf4(void);
extern void func_020bcdc0(void);
extern void func_020bcdbc(void);
extern void func_020bcd88(void);
extern void func_020bcd54(void);
void func_020bca58(u8 *param_1) {
    s32 bVar1;
    s32 uInit7;
    s32 uInit6;
    s32 zC;
    s32 three;
    s32 iVar8;
    s32 uVar7;
    s32 uVar6;
    u32 *puVar5;
    u32 *puVar4;
    s32 iVar3;
    s32 t0;

    func_020bdd48((u32 *) (param_1 + 0x18), 2, 0xffff, 0, 0, 0, 1, 2, 2, 10, 10);
    *(void **) (param_1 + 0x40) = (void *) func_020bce84;
    *(void **) (param_1 + 0x44) = (void *) func_020bce64;
    *(void **) (param_1 + 0x48) = (void *) func_020bce60;
    *(void **) (param_1 + 0x4c) = (void *) func_020bce44;
    *(void **) (param_1 + 0x50) = (void *) func_020bce28;
    func_020bdd48((u32 *) (param_1 + 0x54), 2, 0xffff, 0, 9, 10, 0, 0, 0, 10, 10);
    *(void **) (param_1 + 0x7c) = (void *) func_020bcdf4;
    *(void **) (param_1 + 0x80) = (void *) func_020bcdc0;
    *(void **) (param_1 + 0x84) = (void *) func_020bcdbc;
    *(void **) (param_1 + 0x88) = (void *) func_020bcd88;
    *(void **) (param_1 + 0x8c) = (void *) func_020bcd54;
    func_020bdd48((u32 *) (param_1 + 0x90), 2, 0x13, 1, 9, 10, 1, 2, 2, 3, 0);
    iVar8  = 0;
    zC     = 0;
    three  = 3;
    uInit7 = 4;
    puVar5 = (u32 *) (param_1 + 0xcc);
    puVar4 = (u32 *) (param_1 + 0x180);
    uInit6 = 5;
    do {
        uVar7 = uInit7;
        uVar6 = uInit6;
        bVar1 = zC;
        iVar3 = func_01ffda04((s16) iVar8);
        if (iVar3 != 0) {
            iVar3 = (s32) func_02028144(iVar3);
            if ((*(u32 *) (iVar3 + 0x640) == 0xffff && *(u32 *) (iVar3 + 0x644) == 0xffff) || func_020caa40(iVar3) == 0) {
                bVar1 = 1;
            }
        }
        if (bVar1) {
            uVar7 = 2;
            uVar6 = three;
            func_020b8c1c(2, (u16) (iVar8 + 3), 2);
            func_020b8c1c(2, (u16) (iVar8 + 0x14), 2);
        }
        t0 = 0;
        func_020bdd48(puVar5, 2, (u16) (iVar8 + 3), 1, uVar7, uVar6, t0, t0, t0, 10, 10);
        t0 = 0;
        func_020bdd48(puVar4, 2, (u16) (iVar8 + 0x14), 1, uVar7, uVar6, t0, t0, t0, 10, 10);
        puVar5 = puVar5 + 0xf;
        puVar4 = puVar4 + 0xf;
        iVar8  = iVar8 + 1;
    } while (iVar8 < 3);
}
