/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209eb34 from projets/nintendogs-shiba-friends/src/donor/func_0209eb34.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 func_02095610(u8 *p);
extern u32 func_020b4920(void);
extern u8 *func_020b261c(void);
extern s32 func_020c557c(u8 *p);
extern void func_020cd3d8(s32 a, s32 b, s32 c, void *d, s32 e);
extern u32 func_020b4940(void);
extern u32 func_020c9038(u8 *p);
extern void func_0209565c(u8 *p, s32 a);
extern s32 func_02095590(u8 *p, s32 a);
extern s32 func_02095524(u8 *p);
extern u32 func_02095784(u8 *p);
extern void func_0209ec50(void);
u32 func_0209eb34(u8 *param_1) {
    s32 bVar1;
    s32 bVar5;
    u32 uVar2;
    u16 *psVar3;
    s32 iVar4;
    u32 ret;

    switch (*(s16 *) (param_1 + 0x2e)) {
        case 2:
        case 3:
            goto fin;
        case 0:
            return (u32) func_02095610(param_1);
        case 1:
            uVar2 = func_020b4920();
            bVar1 = 0;
            if (uVar2 == 2) {
                goto eq2;
            }
            if (uVar2 != 3) {
                goto chk;
            }
            psVar3 = (u16 *) func_020b261c();
            bVar5  = bVar1;
            if (*psVar3 == 0) {
                bVar5 = 1;
            } else {
                iVar4 = func_020c557c((u8 *) psVar3);
                if (iVar4 != 0) {
                    bVar5 = 1;
                }
            }
            if (bVar5) {
                func_020cd3d8(2, 0xc3a, 0, (void *) func_0209ec50, 0);
                uVar2 = func_020b4940();
                goto chk;
            }
            psVar3 = (u16 *) func_020b261c();
            uVar2  = func_020c9038((u8 *) psVar3);
            bVar1  = 1;
            goto chk;
        eq2:
            bVar1 = 1;
        chk:
            if (bVar1) {
                func_0209565c(param_1, 13);
                return (u32) func_02095590(param_1, 2);
            }
            return uVar2;
        case 4:
            ret = func_02095524(param_1);
            if (ret == 0) {
                return ret;
            }
            ret = func_02095784(param_1);
            break;
        default:
            goto fin;
    }
fin:
    return ret;
}
