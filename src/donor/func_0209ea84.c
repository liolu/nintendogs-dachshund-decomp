/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209ea84 from projets/nintendogs-chihuahua-friends/src/donor/func_0209ea84.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef int BOOL;
extern BOOL func_02095610(u8 *p);
extern u32 func_020b4920(void);
extern s32 *func_020b261c(void);
extern u32 func_020c8f98(s32 *p);
extern void func_0209565c(u8 *p, u32 n);
extern u32 func_02095590(u8 *p, u32 n);
extern BOOL func_02095524(u8 *p);
extern u32 func_02095784(u8 *p);
u32 func_0209ea84(u8 *param_1) {
    BOOL bVar1;
    u32 uVar2;
    s32 *psVar3;

    switch (*(s16 *) (param_1 + 0x2e)) {
        case 0:
            bVar1 = func_02095610(param_1);
            return (u32) bVar1;
        case 1:
            uVar2 = func_020b4920();
            bVar1 = 0;
            if (uVar2 == 2) {
                goto set1;
            }
            if (uVar2 != 3) {
                goto chk;
            }
            psVar3 = func_020b261c();
            uVar2  = func_020c8f98(psVar3);
            bVar1  = 1;
            goto chk;
        set1:
            bVar1 = 1;
        chk:
            if (!bVar1) {
                return uVar2;
            }
            func_0209565c(param_1, 13);
            uVar2 = func_02095590(param_1, 2);
            return uVar2;
        case 2:
            break;
        case 3:
            break;
        case 4:
            bVar1 = func_02095524(param_1);
            if (bVar1 == 0) {
                return bVar1;
            }
            return func_02095784(param_1);
    }
}
