/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a3b88 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a3b88.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02154dd8[];
extern u8 data_02155044[];
extern u8 *data_02153720;
extern s32 func_020f7170(void);
extern void func_02071f84(s32 *p, s32 a, s16 *b);
extern s32 func_01ffda04(s32 v);
extern void func_02027044(s32 a, u32 b);
extern void func_02027480(s32 a, u32 *b);
extern void func_02028fc4(s32 a, s32 b, s32 c);
extern u32 func_02027508(void);
extern void func_02027ff4(s32 a, s32 b, s32 c);
extern void func_020f2fdc(void);
extern void func_020f24dc(s32 a, s32 b, s32 c);
extern void func_020f1d38(void);
extern void func_020f25cc(s32 a);
typedef struct {
    u32 w[3];
} T12;
void func_020f2894(s32 *param_1, s16 *param_2) {
    s32 iVar4;
    s32 iVar5;
    s32 i;
    s32 f;
    s16 sVar1;
    u32 local_30[3];
    u32 local_24[3];

    if (*param_1 == 0) {
        return;
    }
    if (func_020f7170() == -11) {
        return;
    }
    if (*(s32 *) (data_02154dd8 + 4) != 0) {
        goto f1;
    }
    if (*(s32 *) (data_02154dd8 + 0x2c) == 0) {
        goto f0;
    }
f1:
    f = 1;
    goto fj;
f0:
    f = 0;
fj:
    if (f != 0) {
        return;
    }
    sVar1 = *param_2;
    func_02071f84(param_1, 0, param_2);
    iVar4 = *param_2;
    if (iVar4 == sVar1) {
        return;
    }
    if (iVar4 <= 0) {
        return;
    }
    if (iVar4 < 1 || iVar4 >= 6) {
        if (iVar4 < 10) {
            return;
        }
        if (iVar4 >= 37) {
            return;
        }
    }
    switch (iVar4) {
        case 0:
            break;
        case 1: {
            u8 *d = data_02155044;
            switch (*(s32 *) (d + 4)) {
                case 0:
                    i = 0;
                    do {
                        iVar5 = func_01ffda04(i);
                        if (iVar5 != 0) {
                            func_02027044(iVar5, 2);
                        }
                        i = (s16) (i + 1);
                    } while (i < 3);
                    break;
                case 1:
                    i                 = 0;
                    iVar5             = *(s32 *) (data_02153720 + 0x1c);
                    *(T12 *) local_24 = *(T12 *) (iVar5 + 0x30);
                    do {
                        iVar5 = func_01ffda04(i);
                        if (iVar5 != 0) {
                            func_02027044(iVar5, 4);
                            func_02027480(iVar5, local_24);
                        }
                        i = (s16) (i + 1);
                    } while (i < 3);
                    break;
                case 2:
                default:
                    i = 0;
                    do {
                        iVar5 = func_01ffda04(i);
                        if (iVar5 != 0) {
                            func_02028fc4(iVar5, 0, 0);
                        }
                        i = (s16) (i + 1);
                    } while (i < 3);
                    break;
            }
            *(s32 *) (d + 0) = *(s32 *) (d + 4);
            *(s32 *) (d + 8) = 0;
            *(s32 *) (d + 4) = 2;
            return;
        }
        case 2:
            i = 0;
            do {
                iVar5 = func_01ffda04(i);
                if (iVar5 != 0) {
                    func_02027044(iVar5, 2);
                }
                i = (s16) (i + 1);
            } while (i < 3);
            return;
        case 3:
            i                 = 0;
            iVar5             = *(s32 *) (data_02153720 + 0x1c);
            *(T12 *) local_30 = *(T12 *) (iVar5 + 0x30);
            do {
                iVar5 = func_01ffda04(i);
                if (iVar5 != 0) {
                    func_02027044(iVar5, 4);
                    func_02027480(iVar5, local_30);
                }
                i = (s16) (i + 1);
            } while (i < 3);
            return;
        case 4:
            i = 0;
            do {
                iVar5 = func_01ffda04(i);
                if (iVar5 != 0) {
                    func_02028fc4(iVar5, 0, 0);
                }
                i = (s16) (i + 1);
            } while (i < 3);
            return;
        default:
            break;
    }
    if (*(u16 *) (data_02154dd8 + 0x36) != 0) {
        return;
    }
    switch (iVar4) {
        case 10:
            func_020f2fdc();
            return;
        case 12:
            func_020f24dc(78, 3, 0);
            return;
        case 15:
            func_020f1d38();
            return;
        case 16:
            i = 0;
            do {
                iVar5 = func_01ffda04(i);
                if (iVar5 != 0) {
                    func_02028fc4(iVar5, 71, 1);
                    return;
                }
                i = (s16) (i + 1);
            } while (i < 3);
            return;
        case 17:
            i = 0;
            do {
                iVar5 = func_01ffda04(i);
                if (iVar5 != 0) {
                    func_02028fc4(iVar5, 74, 1);
                    return;
                }
                i = (s16) (i + 1);
            } while (i < 3);
            return;
        case 20:
            i = 0;
            do {
                iVar5 = func_01ffda04(i);
                if (iVar5 != 0 && *(u16 *) (func_02027508() + 38) < 5) {
                    func_02027ff4(iVar5, 1, 1);
                }
                i = (s16) (i + 1);
            } while (i < 3);
            return;
        case 21:
            i = 0;
            do {
                iVar5 = func_01ffda04(i);
                if (iVar5 != 0 && *(u16 *) (func_02027508() + 38) < 5) {
                    func_02027ff4(iVar5, 0, 1);
                }
                i = (s16) (i + 1);
            } while (i < 3);
            return;
        case 22:
            i = 0;
            do {
                iVar5 = func_01ffda04(i);
                if (iVar5 != 0 && *(u16 *) (func_02027508() + 38) < 5) {
                    func_02027ff4(iVar5, 2, 1);
                }
                i = (s16) (i + 1);
            } while (i < 3);
            return;
        case 23:
            i = 0;
            do {
                iVar5 = func_01ffda04(i);
                if (iVar5 != 0 && *(u16 *) (func_02027508() + 38) < 5) {
                    func_02027ff4(iVar5, 3, 1);
                }
                i = (s16) (i + 1);
            } while (i < 3);
            return;
        case 24:
            i = 0;
            do {
                iVar5 = func_01ffda04(i);
                if (iVar5 != 0 && *(u16 *) (func_02027508() + 38) < 5) {
                    func_02027ff4(iVar5, 4, 1);
                }
                i = (s16) (i + 1);
            } while (i < 3);
            return;
        case 25:
            func_020f25cc(2);
            return;
        case 26:
            func_020f25cc(5);
            return;
        case 30:
        case 31:
        case 32:
        case 33:
        case 35: {
            u8 *d = data_02155044;
            s32 x;
            if (iVar4 < 30 || iVar4 > 36) {
                return;
            }
            x                   = *(s16 *) (data_02154dd8 + 0x32);
            *(s32 *) (d + 0xc)  = 1;
            *(s32 *) (d + 0x14) = iVar4;
            *(s32 *) (d + 0x18) = 0;
            *(s32 *) (d + 0x10) = (100 - x) >> 1;
            return;
        }
        case 34:
        case 36: {
            u8 *d = data_02155044;
            s32 x;
            if (iVar4 < 30 || iVar4 > 36) {
                return;
            }
            x                   = *(s16 *) (data_02154dd8 + 0x32);
            *(s32 *) (d + 0xc)  = 1;
            *(s32 *) (d + 0x14) = iVar4;
            *(s32 *) (d + 0x18) = 1;
            *(s32 *) (d + 0x10) = ((100 - x) * 3) >> 2;
            return;
        }
        default:
            goto fin;
    }
fin:;
}
