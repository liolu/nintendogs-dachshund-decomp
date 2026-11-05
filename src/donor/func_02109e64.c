/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02109e5c from projets/nintendogs-shiba-friends/src/donor/func_02109e5c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef int BOOL;
extern u8 *data_02156080;
extern void func_0210aabc(u8 *p, s32 *a, s32 *b);
extern void func_0210a8d0(u8 *p);
extern s32 func_0210a700(u8 *p);
extern s32 func_02044644(s32 a);
extern void func_0210843c(u8 *p, s32 *a, u32 b);
extern BOOL func_0210fd98(u8 *p);
extern void func_0211c8e8(s32 a, s32 b, s32 *c);
extern BOOL func_02092d80(s32 a, s32 *b, u32 c);
extern void func_0210fdc8(u8 *p);
extern s32 func_020ec2a0(u8 *p, s32 b);
extern s32 func_0210a598(u8 *p);
extern s32 func_0210a4e0(u8 *p);
extern s32 func_0210a3ac(u8 *p);
extern s32 func_0210a11c(u8 *p);
extern s32 func_0210a2a0(u8 *p);
extern s32 func_0210fd28(u8 *p, s32 b);
extern s32 func_0210fcd4(u8 *p);
extern s32 func_01ffda04(s32 a);
s32 func_02109e64(u8 *param_1) {
    s32 bVar1;
    s32 uVar2;
    s32 iVar3;
    s32 iVar4;
    s32 aiStack_38[3];
    s32 aiStack_2c[3];
    s32 aiStack_20[4];

    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            break;
        case 1:
            func_0210aabc(param_1, 0, 0);
            func_0210a8d0(param_1);
            uVar2 = func_0210a700(param_1);
            return uVar2;
        case 2:
            func_02044644(*(s16 *) (param_1 + 0x9c));
            iVar3 = *(s32 *) (param_1 + 0x214);
            func_0210843c(param_1, aiStack_38, 0x8000);
            if (*(s32 *) (iVar3 + 0x1c) == 0) {
                func_0210aabc(param_1, aiStack_38, 0);
            } else {
                func_0210aabc(param_1, 0, aiStack_38);
            }
            func_0210a700(param_1);
            if (*(s32 *) (data_02156080 + 0x24) != 0) {
                bVar1 = func_0210fd98(param_1);
                return bVar1;
            }
            iVar4 = *(s32 *) (param_1 + 0x214);
            iVar3 = func_02044644(*(s16 *) (param_1 + 0x9c));
            func_0211c8e8(iVar4, 1, aiStack_2c);
            func_0211c8e8(iVar4, 2, aiStack_20);
            iVar4 = func_02092d80(iVar3, aiStack_2c, 0xe66);
            if (iVar4 != 0) {
                bVar1 = 1;
                goto J;
            }
            iVar3 = func_02092d80(iVar3, aiStack_20, 0xe66);
            if (iVar3 != 0) {
                bVar1 = 1;
            } else {
                bVar1 = 0;
            }
        J:
            if (!bVar1) {
                return bVar1;
            }
            func_0210fdc8(param_1);
            uVar2 = func_020ec2a0(param_1 + 400, 5);
            return uVar2;
        case 3:
            uVar2 = func_0210a598(param_1);
            return uVar2;
        case 4:
            uVar2 = func_0210a4e0(param_1);
            return uVar2;
        case 5:
            uVar2 = func_0210a3ac(param_1);
            return uVar2;
        case 6:
            func_02044644(*(s16 *) (param_1 + 0x9c));
            func_01ffda04(*(s16 *) (param_1 + 0x98));
            uVar2 = func_0210a2a0(param_1);
            if (uVar2 == 0) {
                return uVar2;
            }
            switch (uVar2) {
                case 1:
                    uVar2 = func_0210fd28(param_1, *(s16 *) (param_1 + 0x98));
                    return uVar2;
                case 2:
                    func_0210fdc8(param_1);
                    uVar2 = func_020ec2a0(param_1 + 400, 6);
                    return uVar2;
            }
            return uVar2;
        case 7:
            uVar2 = func_0210a11c(param_1);
            return uVar2;
        case 8:
            func_02044644(*(s16 *) (param_1 + 0x9c));
            func_01ffda04(*(s16 *) (param_1 + 0x98));
            uVar2 = func_0210a2a0(param_1);
            if (uVar2 == 0) {
                return uVar2;
            }
            switch (uVar2) {
                case 1:
                    uVar2 = func_0210fcd4(param_1);
                    return uVar2;
                case 2:
                    func_0210fdc8(param_1);
                    uVar2 = func_020ec2a0(param_1 + 400, 6);
                    return uVar2;
            }
            return uVar2;
    }
}
