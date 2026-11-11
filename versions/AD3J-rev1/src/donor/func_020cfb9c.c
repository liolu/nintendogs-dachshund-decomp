/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cfba4 from projets/nintendogs-chihuahua-friends/src/donor/func_020cfba4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02154c78[];
extern s32 func_020022cc(void);
extern s32 func_020022e8(s32 a);
extern void func_020040c8(void);
extern s32 func_02120740(void);
extern s32 func_021211a0(void);
extern s32 func_020c94e0(void);
extern void func_020f06d4(void);
extern void func_020e99b0(void);
extern s32 func_020e9968(void);
extern void func_02003f40(void);
extern void func_02003de8(void);
void func_020cfb9c(void) {
    s32 bVar4 = 1;
    s32 bVar3 = 0;
    s16 iVar7 = 0;
    s32 iVar6 = 0;
    s32 bVar1 = 0;
    s32 bVar2;
    s32 iVar5;
    s32 local_28;
    s32 zero = 0;
    s32 r4   = 0;
    s32 one;

    bVar2 = func_020022cc();
    if (bVar2 == 1) {
        do {
            r4 = func_020022e8(0);
        } while (r4 == 0);
    }
    *(u16 *) 0x04000304 = *(u16 *) 0x04000304 & ~0x20e;
    zero                = 0;
    one                 = 1;
    local_28            = 2;
    do {
        func_020040c8();
        if (func_02120740() != 0) {
            goto chk1;
        }
        if (func_021211a0() == 0) {
            goto other;
        }
    chk1:
        if (func_020c94e0() == 1) {
            if (iVar7 <= 0) {
                iVar6 = one;
                iVar7 = 3600;
            }
        } else {
        other:
            if (*(u32 *) data_02154c78 != 0 && *(s16 *) (*(u8 **) data_02154c78 + 4) != 0 && bVar1 == 0) {
                bVar1 = one;
                iVar6 = local_28;
            }
        }
        if (iVar7 > 0) {
            iVar7 = iVar7 - 1;
        }
        if (bVar3 == 0) {
            if (iVar6 != 0) {
                iVar5 = func_020022cc();
                if (iVar5 == 0) {
                    do {
                        iVar5 = func_020022e8(one);
                    } while (iVar5 == 0);
                }
                bVar3 = one;
            }
        } else {
            switch (iVar6) {
                case 1:
                    func_020f06d4();
                    break;
                case 2:
                    func_020e99b0();
                    break;
            }
            iVar6 = zero;
            if (func_020e9968() == 0) {
                iVar5 = func_020022cc();
                if (iVar5 == 1) {
                    do {
                        iVar5 = func_020022e8(zero);
                    } while (iVar5 == 0);
                }
                bVar3 = zero;
            }
        }
        if (((s32) (*(u16 *) 0x027fffa8 & 0x8000) >> 15) == 0) {
            bVar4 = 0;
        }
        func_02003f40();
        func_02003de8();
    } while (bVar4 != 0);
    *(u16 *) 0x04000304 = (*(u16 *) 0x04000304 & ~0x20e) | 0x20e;
    bVar2               = func_020022cc();
    if (bVar2 != 0) {
        return;
    }
    do {
        iVar5 = func_020022e8(1);
    } while (iVar5 == 0);
}
