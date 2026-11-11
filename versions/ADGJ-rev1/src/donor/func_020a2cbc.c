/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a2cbc from projets/nintendogs-chihuahua-friends/src/donor/func_020a2cbc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153708;
extern s32 func_020c8f60(void);
extern s32 func_01ffda04(s32 v);
extern s32 func_02027da4(s32 v);
extern s32 func_02028144(s32 v);
extern void func_0209565c(u8 *p, int v);
extern void func_02095590(u8 *p, int v);
extern void func_02027c94(s32 a, int b);
extern void func_0202409c(s32 a, int b);
extern void func_0202814c(s32 a);
s32 func_020a2cbc(u8 *param_1) {
    u32 bVar1;
    s32 cVar2;
    s32 iVar3;
    s32 uVar4;
    s32 iVar5;
    s32 iVar6;

    iVar6 = 0;
    iVar3 = func_020c8f60();
    if (*(u16 *) data_02153708 != 0) {
        return 0;
    }
    if (iVar3 < 1) {
        uVar4 = func_01ffda04(0);
        bVar1 = func_02027da4(uVar4);
        if (bVar1 == 0) {
            *(u16 *) (param_1 + 0x118) = 0;
            *(u16 *) (param_1 + 0x11a) = 0;
            *(u16 *) (param_1 + 0x11c) = 0;
            func_0209565c(param_1, 0x12);
            func_02095590(param_1, 0);
            iVar6 = 1;
        } else if (bVar1 == 2) {
            *(u16 *) (param_1 + 0x118) = 3;
            *(u16 *) (param_1 + 0x11a) = 2;
            *(u16 *) (param_1 + 0x11c) = 0;
            *(u16 *) (param_1 + 0x2e)  = 2;
            *(u16 *) (param_1 + 0x30)  = 0;
            *(u16 *) (param_1 + 0x100) = 0x13;
            iVar6                      = 1;
        } else if (bVar1 >= 3 && bVar1 <= 4) {
            if (*(s16 *) (param_1 + 0x122) > 0) {
                *(s16 *) (param_1 + 0x122) = *(s16 *) (param_1 + 0x122) - 1;
            }
            if (*(s16 *) (param_1 + 0x122) <= 0) {
                *(u16 *) (param_1 + 0x118) = 3;
                *(u16 *) (param_1 + 0x11a) = 2;
                *(u16 *) (param_1 + 0x11c) = 0;
                *(u16 *) (param_1 + 0x2e)  = 2;
                *(u16 *) (param_1 + 0x30)  = 0;
                *(u16 *) (param_1 + 0x100) = 0x13;
                iVar6                      = 1;
                func_02027c94(uVar4, 2);
                func_0202409c(uVar4, 0);
                func_0202814c(uVar4);
            } else if (bVar1 == 4) {
                *(u16 *) (param_1 + 0x118) = 0x10;
                *(u16 *) (param_1 + 0x11a) = 3;
                *(u16 *) (param_1 + 0x11c) = 0;
                *(u16 *) (param_1 + 0x2e)  = 2;
                *(u16 *) (param_1 + 0x30)  = 0;
                *(u16 *) (param_1 + 0x100) = 0x13;
                iVar6                      = 1;
            }
        }
    } else {
        iVar5 = -1;
        iVar3 = 0;
        do {
            uVar4 = func_01ffda04(iVar3);
            if (uVar4 != 0) {
                func_02028144(uVar4);
                if (func_02027da4(uVar4) == 0) {
                    iVar5 = iVar3;
                    break;
                }
            }
            iVar3 = (s16) (iVar3 + 1);
        } while (iVar3 < 3);
        if (iVar5 >= 0) {
            *(u16 *) (param_1 + 0x118) = 0;
            *(u16 *) (param_1 + 0x11a) = 0;
            *(s16 *) (param_1 + 0x11c) = (s16) iVar5;
            iVar6                      = 1;
            func_0209565c(param_1, 0x12);
            func_02095590(param_1, 0);
        } else {
            iVar5 = -1;
            iVar3 = 0;
            do {
                uVar4 = func_01ffda04(iVar3);
                if (uVar4 != 0) {
                    func_02028144(uVar4);
                    if (func_02027da4(uVar4) == 2) {
                        iVar5 = iVar3;
                        break;
                    }
                }
                iVar3 = (s16) (iVar3 + 1);
            } while (iVar3 < 3);
            if (iVar5 >= 0) {
                *(u16 *) (param_1 + 0x118) = 3;
                *(u16 *) (param_1 + 0x11a) = 2;
                *(s16 *) (param_1 + 0x11c) = (s16) iVar5;
                *(u16 *) (param_1 + 0x2e)  = 2;
                *(u16 *) (param_1 + 0x30)  = 0;
                *(u16 *) (param_1 + 0x100) = 0x13;
                iVar6                      = 1;
            }
        }
    }
    return iVar6;
}
