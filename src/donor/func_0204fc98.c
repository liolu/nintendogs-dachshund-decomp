/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02050364 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02050364.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern u32 data_0214b484;
extern s32 func_0202785c(u8 *p, s32 a);
extern s32 func_0202ded8(u8 *p);
extern void func_0203e2b8(u8 *p, s32 a);
extern void func_02027630(s32 a, s32 *b);
s32 func_0204fc98(u8 *param_1, s32 param_2, u32 param_3) {
    s32 iVar4;
    u32 uVar5;
    s32 *cp;
    s32 bVar3;
    s32 vec1[3];
    s32 vec2[3];
    s32 vec3[3];
    s32 vec4[3];
    s64 lVar1;
    s64 lVar2;
    s32 sum;
    s16 neg;
    s32 d0;
    s32 d2;

    iVar4 = func_0202785c(param_1, param_2);
    if (iVar4 < 1) {
        goto LZ;
    }
    if (func_0202ded8(param_1) == 0) {
        bVar3 = 1;
        goto LJ;
    }
LZ:
    bVar3 = 0;
LJ:
    if (bVar3 != 0) {
        switch (param_3) {
            case 0:
                cp    = (s32 *) data_0214b484;
                iVar4 = *cp * 0x10dcd + 1;
                *cp   = iVar4;
                switch ((u16) ((u32) (iVar4 << 16) >> 29)) {
                    case 0:
                        func_0203e2b8(param_1, 0x2a7);
                        return 1;
                    case 1:
                        func_0203e2b8(param_1, 0x2a8);
                        return 1;
                    case 2:
                        func_0203e2b8(param_1, 0x2a9);
                        return 1;
                    case 3:
                        func_0203e2b8(param_1, 0x2aa);
                        return 1;
                    default:
                        func_0203e2b8(param_1, 0x2ac);
                        return 1;
                }
            case 1:
            case 2:
            case 3:
                cp    = (s32 *) data_0214b484;
                uVar5 = (u32) (*cp * 0x10dcd + 1);
                *cp   = (s32) uVar5;
                uVar5 = (u16) (((u32) (u16) uVar5 * 10u) >> 16);
                if (uVar5 == 0) {
                    goto Z1;
                }
                if (uVar5 == 1) {
                    goto F1;
                }
                func_0203e2b8(param_1, 0x2ae);
                return 1;
            Z1:
                func_0203e2b8(param_1, 0x2b6);
                return 1;
            F1:
                func_02027630(param_2, vec1);
                d0    = vec1[0] - (*(s32 *) ((u8 *) param_1 + (0x2a0)));
                d2    = vec1[2] - (*(s32 *) ((u8 *) param_1 + (0x2a8)));
                lVar1 = (s64) d0 * (s64) (*(s32 *) ((u8 *) param_1 + (0x18c))) + 0x800;
                lVar2 = (s64) d2 * (s64) (*(s32 *) ((u8 *) param_1 + (0x194))) + 0x800;
                sum   = (s32) (lVar1 >> 12) + (s32) (lVar2 >> 12);
                neg   = (sum <= 0);
                if (neg == 0) {
                    func_0203e2b8(param_1, 0x2b7);
                } else {
                    func_0203e2b8(param_1, 0x2b8);
                }
                return 1;
            case 4:
                cp    = (s32 *) data_0214b484;
                uVar5 = (u32) (*cp * 0x10dcd + 1);
                *cp   = (s32) uVar5;
                if ((u16) (((u32) (u16) uVar5 * 100u) >> 16) == 0) {
                    goto F2;
                }
                func_0203e2b8(param_1, 0x2ba);
                return 1;
            F2:
                func_02027630(param_2, vec2);
                d0    = vec2[0] - (*(s32 *) ((u8 *) param_1 + (0x2a0)));
                d2    = vec2[2] - (*(s32 *) ((u8 *) param_1 + (0x2a8)));
                lVar1 = (s64) d0 * (s64) (*(s32 *) ((u8 *) param_1 + (0x18c))) + 0x800;
                lVar2 = (s64) d2 * (s64) (*(s32 *) ((u8 *) param_1 + (0x194))) + 0x800;
                sum   = (s32) (lVar1 >> 12) + (s32) (lVar2 >> 12);
                neg   = (sum <= 0);
                if (neg == 0) {
                    func_0203e2b8(param_1, 0x2c1);
                } else {
                    func_0203e2b8(param_1, 0x2c2);
                }
                return 1;
            case 5:
                goto L0;
            case 6:
                goto L0;
            case 7:
                cp    = (s32 *) data_0214b484;
                uVar5 = (u32) (*cp * 0x10dcd + 1);
                *cp   = (s32) uVar5;
                if ((u16) (((u32) (u16) uVar5 * 100u) >> 16) == 0) {
                    goto Z7b;
                }
                func_0203e2b8(param_1, 0x2c3);
                return 1;
            Z7b:
                func_0203e2b8(param_1, 0x2c7);
                return 1;
            case 8:
                cp    = (s32 *) data_0214b484;
                uVar5 = (u32) (*cp * 0x10dcd + 1);
                *cp   = (s32) uVar5;
                if ((u16) (((u32) (u16) uVar5 * 100u) >> 16) == 0) {
                    goto Z8b;
                }
                func_0203e2b8(param_1, 0x2c8);
                return 1;
            Z8b:
                func_0203e2b8(param_1, 0x2cc);
                return 1;
            default:
                goto L0;
        }
    }
    switch (param_3) {
        case 0:
            cp    = (s32 *) data_0214b484;
            uVar5 = (u32) (*cp * 0x10dcd + 1);
            *cp   = (s32) uVar5;
            switch ((u16) (((u32) (u16) uVar5 * 6u) >> 16)) {
                case 0:
                    func_0203e2b8(param_1, 0x2a7);
                    return 1;
                case 1:
                    func_0203e2b8(param_1, 0x2a8);
                    return 1;
                case 2:
                    func_0203e2b8(param_1, 0x2a9);
                    return 1;
                case 3:
                    func_0203e2b8(param_1, 0x2aa);
                    return 1;
                case 4:
                    func_0203e2b8(param_1, 0x2ac);
                    return 1;
                case 5:
                    func_0203e2b8(param_1, 0x2ab);
                    return 1;
            }
            break;
        case 1:
        case 2:
        case 3:
            cp    = (s32 *) data_0214b484;
            uVar5 = (u32) (*cp * 0x10dcd + 1);
            *cp   = (s32) uVar5;
            switch ((u16) (((u32) (u16) uVar5 * 6u) >> 16)) {
                case 0:
                    func_0203e2b8(param_1, 0x2b1);
                    return 1;
                case 1:
                    func_0203e2b8(param_1, 0x2b2);
                    return 1;
                case 2:
                    func_0203e2b8(param_1, 0x2b3);
                    return 1;
                case 3:
                    func_0203e2b8(param_1, 0x2b4);
                    return 1;
                case 4:
                    func_02027630(param_2, vec3);
                    d0    = vec3[0] - (*(s32 *) ((u8 *) param_1 + (0x2a0)));
                    d2    = vec3[2] - (*(s32 *) ((u8 *) param_1 + (0x2a8)));
                    lVar1 = (s64) d0 * (s64) (*(s32 *) ((u8 *) param_1 + (0x18c))) + 0x800;
                    lVar2 = (s64) d2 * (s64) (*(s32 *) ((u8 *) param_1 + (0x194))) + 0x800;
                    sum   = (s32) (lVar1 >> 12) + (s32) (lVar2 >> 12);
                    neg   = (sum <= 0);
                    if (neg == 0) {
                        func_0203e2b8(param_1, 0x2b7);
                    } else {
                        func_0203e2b8(param_1, 0x2b8);
                    }
                    return 1;
                case 5:
                    func_0203e2b8(param_1, 0x2b5);
                    return 1;
            }
            break;
        case 4:
            cp    = (s32 *) data_0214b484;
            uVar5 = (u32) (*cp * 0x10dcd + 1);
            *cp   = (s32) uVar5;
            switch ((u16) (((u32) (u16) uVar5 * 7u) >> 16)) {
                case 0:
                    func_0203e2b8(param_1, 0x2bb);
                    return 1;
                case 1:
                    func_0203e2b8(param_1, 0x2bc);
                    return 1;
                case 2:
                    func_0203e2b8(param_1, 0x2bd);
                    return 1;
                case 3:
                    func_0203e2b8(param_1, 0x2be);
                    return 1;
                case 4:
                    func_0203e2b8(param_1, 0x2c0);
                    return 1;
                case 5:
                    func_02027630(param_2, vec4);
                    d0    = vec4[0] - (*(s32 *) ((u8 *) param_1 + (0x2a0)));
                    d2    = vec4[2] - (*(s32 *) ((u8 *) param_1 + (0x2a8)));
                    lVar1 = (s64) d0 * (s64) (*(s32 *) ((u8 *) param_1 + (0x18c))) + 0x800;
                    lVar2 = (s64) d2 * (s64) (*(s32 *) ((u8 *) param_1 + (0x194))) + 0x800;
                    sum   = (s32) (lVar1 >> 12) + (s32) (lVar2 >> 12);
                    neg   = (sum <= 0);
                    if (neg == 0) {
                        func_0203e2b8(param_1, 0x2c1);
                    } else {
                        func_0203e2b8(param_1, 0x2c2);
                    }
                    return 1;
                case 6:
                    func_0203e2b8(param_1, 0x2bf);
                    return 1;
            }
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            cp    = (s32 *) data_0214b484;
            uVar5 = (u32) (*cp * 0x10dcd + 1);
            *cp   = (s32) uVar5;
            switch ((u16) (((u32) (u16) uVar5 * 3u) >> 16)) {
                case 0:
                    func_0203e2b8(param_1, 0x2c4);
                    return 1;
                case 1:
                    func_0203e2b8(param_1, 0x2c6);
                    return 1;
                case 2:
                    func_0203e2b8(param_1, 0x2c7);
                    return 1;
            }
            break;
        case 8:
            cp    = (s32 *) data_0214b484;
            uVar5 = (u32) (*cp * 0x10dcd + 1);
            *cp   = (s32) uVar5;
            switch ((u16) (((u32) (u16) uVar5 * 3u) >> 16)) {
                case 0:
                    func_0203e2b8(param_1, 0x2c9);
                    return 1;
                case 1:
                    func_0203e2b8(param_1, 0x2cb);
                    return 1;
                case 2:
                    func_0203e2b8(param_1, 0x2cc);
                    return 1;
            }
            break;
    }
L0:
    return 0;
}
