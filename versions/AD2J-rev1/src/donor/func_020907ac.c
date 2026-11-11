/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020907ac from projets/nintendogs-shiba-friends/src/donor/func_020907ac.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    s32 iStack_10c;
    s16 local_108;
    s16 p74;
    u32 uStack_104;
    s16 local_100;
    s16 p82;
    u32 auStack_fc[7];
    s16 st[6];
    u32 uStack_d4;
    s16 local_d0;
    s16 local_ce;
    s16 local_cc;
    s16 p134;
    u32 uStack_c8;
    s16 p140;
    s16 local_c2;
    u32 p144;
    u32 auStack_bc[7];
    u32 uStack_a0;
    s16 p180;
    s16 local_9a;
    u32 p184;
    u32 auStack_94[7];
    u32 uStack_78;
    s16 p220;
    s16 local_72;
    u32 p224;
    u32 auStack_6c[7];
    u32 auStack_50[7];
    u32 uStack_34;
    s16 p288;
    s16 local_2e;
    s32 padEnd[2];
} Frame;
extern s32 func_02002dec(void);
extern void *func_02002de4(s32 a);
extern void func_020904d8(void *a);
extern void func_02002f5c(void *a, void (*b)(void));
extern void func_020903d4(void *a, void *b);
extern s32 func_02002dfc(void *a, void *b);
extern s32 func_02090e64(void);
extern s32 func_02090d94(void);
extern s32 func_02090cc4(void);
extern void func_0208ffb4(void *a, s32 b);
extern void func_0208fd98(void *a, s32 b, s32 c);
extern void func_0208fd18(void *a, s32 b, s32 c);
extern void func_020cd29c(s32 a, s32 b);
extern void func_0208f938(void);
extern void func_0208fcb8(s32 a, s32 b);
extern void func_0208cf74(void);
extern void func_0209e4a4(void);
extern void func_0209c30c(void);
extern void func_0209f3dc(void);
extern void func_020a15e8(void);
void func_020907ac(void) {
    Frame F;
    s32 local_150;
    s32 iVar4;
    s32 uVar6;
    void *piVar5;

    F.st[0] = -1;
    F.st[1] = -1;
    F.st[2] = 0;
    F.st[3] = 0;
    F.st[4] = 0;
    F.st[5] = -1;
    func_020904d8(func_02002de4(func_02002dec()));
    for (;;) {
        func_02002f5c(F.auStack_fc, func_0208cf74);
        func_020903d4(&F.uStack_d4, F.st);
        uVar6   = func_02002dfc(F.auStack_fc, &F.uStack_d4);
        F.st[0] = -1;
        F.st[1] = -1;
        F.st[2] = 0;
        F.st[3] = 0;
        F.st[4] = 0;
        F.st[5] = -1;
        switch (uVar6) {
            case 0:
            case 1:
            case 3:
            case 4:
            case 9:
            case 12:
            case 14:
            case 18:
            case 21:
            case 23:
                break;
            case 2:
                func_02002f5c(F.auStack_fc, func_0209e4a4);
                func_02002dfc(F.auStack_fc, 0);
                break;
            case 5:
                iVar4   = func_02090e64();
                F.st[0] = (s16) iVar4;
                F.st[1] = 0;
                F.st[2] = 1;
                break;
            case 6:
                iVar4   = func_02090d94();
                F.st[0] = (s16) iVar4;
                F.st[1] = 1;
                F.st[2] = 1;
                break;
            case 7:
                iVar4   = func_02090cc4();
                F.st[0] = (s16) iVar4;
                F.st[2] = 1;
                F.st[1] = 2;
                break;
            case 13: {
                func_0208ffb4(&F.uStack_c8, 6);
                func_02002f5c(F.auStack_fc, func_0208cf74);
                func_02002dfc(F.auStack_fc, &F.uStack_c8);
                F.st[0] = -1;
                F.st[1] = 3;
                F.st[2] = 0;
                if (F.local_c2 >= 0) {
                    func_02002f5c(F.auStack_fc, func_0209c30c);
                    iVar4 = func_02002dfc(F.auStack_fc, &F.uStack_c8);
                    if (iVar4 != 0) {
                        F.st[1] = 3;
                        F.st[2] = 1;
                        F.st[0] = F.local_c2;
                    }
                }
                break;
            }
            case 10: {
                s32 sVar8 = F.local_cc;
                s32 sVar1 = -1;
                s32 uVar7 = 0;
                s32 sVar3;
                func_0208ffb4(&F.uStack_a0, 4);
                func_02002f5c(F.auStack_bc, func_0208cf74);
                func_02002dfc(F.auStack_bc, &F.uStack_a0);
                sVar3 = F.local_9a;
                if (sVar3 >= 0) {
                    sVar1 = sVar3;
                    func_0208fd98(&F.iStack_10c, sVar3, sVar8);
                    func_02002f5c(F.auStack_bc, func_0208cf74);
                    func_02002dfc(F.auStack_bc, &F.iStack_10c);
                    uVar7 = F.local_108;
                }
                F.st[2] = 1;
                F.st[0] = sVar1;
                if (sVar1 >= 0) {
                    F.st[3] = uVar7;
                }
                F.st[1] = 4;
                F.st[5] = F.local_cc;
                break;
            }
            case 11: {
                s32 sVar8 = F.local_cc;
                s32 sVar1 = -1;
                s32 uVar7 = 0;
                s32 sVar3;
                func_0208ffb4(&F.uStack_78, 5);
                func_02002f5c(F.auStack_94, func_0208cf74);
                func_02002dfc(F.auStack_94, &F.uStack_78);
                sVar3 = F.local_72;
                if (sVar3 >= 0) {
                    sVar1 = sVar3;
                    func_0208fd18(&F.uStack_104, sVar3, sVar8);
                    func_02002f5c(F.auStack_94, func_0208cf74);
                    func_02002dfc(F.auStack_94, &F.uStack_104);
                    uVar7 = F.local_100;
                }
                F.st[2] = 1;
                F.st[0] = sVar1;
                if (sVar1 >= 0) {
                    F.st[3] = uVar7;
                }
                F.st[1] = 5;
                F.st[5] = F.local_cc;
                break;
            }
            case 24:
                func_020cd29c(25, F.local_cc);
                F.st[0] = -1;
                F.st[1] = 12;
                F.st[2] = 1;
                F.st[5] = F.local_cc;
                break;
            case 22:
                func_0208fcb8(F.local_d0, F.local_ce);
                func_02002f5c(F.auStack_6c, func_0208cf74);
                func_02002dfc(F.auStack_6c, 0);
                F.st[0] = -1;
                F.st[1] = 13;
                F.st[2] = 1;
                break;
            case 8: {
                s32 sVar8 = -1;
                local_150 = 0;
                func_0208ffb4(&F.uStack_34, 7);
                func_02002f5c(F.auStack_50, func_0208cf74);
                func_02002dfc(F.auStack_50, &F.uStack_34);
                if (F.local_2e >= 0) {
                    func_02002f5c(F.auStack_50, func_0209f3dc);
                    iVar4 = func_02002dfc(F.auStack_50, &F.uStack_34);
                    sVar8 = F.local_2e;
                    if (iVar4 == 12) {
                        local_150 = 1;
                    }
                }
                F.st[1] = 6;
                F.st[0] = sVar8;
                F.st[2] = 1;
                if (sVar8 >= 0) {
                    F.st[4] = local_150;
                }
                break;
            }
            case 15:
                func_020cd29c(21, 3);
                F.st[0] = -1;
                F.st[1] = 7;
                F.st[2] = 1;
                break;
            case 16:
                func_020cd29c(21, 0);
                F.st[0] = -1;
                F.st[1] = 8;
                F.st[2] = 1;
                break;
            case 17:
                func_020cd29c(21, 2);
                F.st[0] = -1;
                F.st[1] = 9;
                F.st[2] = 1;
                break;
            case 19: {
                s32 flag = 0;
                func_02002f5c(F.auStack_fc, func_020a15e8);
                iVar4 = func_02002dfc(F.auStack_fc, 0);
                if (iVar4 != 0) {
                    flag = 1;
                }
                F.st[2] = (s16) flag;
                F.st[0] = -1;
                F.st[1] = 10;
                break;
            }
            case 20: {
                s32 flag = 0;
                func_0208f938();
                func_02002f5c(F.auStack_fc, func_0208cf74);
                iVar4 = func_02002dfc(F.auStack_fc, 0);
                if (iVar4 != 1) {
                    flag = 1;
                }
                F.st[2] = (s16) flag;
                F.st[0] = -1;
                F.st[1] = 11;
                break;
            }
            default:
                break;
        }
    }
}
