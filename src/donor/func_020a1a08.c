/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a1a08 from projets/nintendogs-chihuahua-friends/src/donor/func_020a1a08.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02154c70;
extern u32 data_02153720;
extern s32 func_020c8f5c(void);
extern s32 func_01ffda04(s32 a);
extern void func_02027c94(s32 a, s32 b);
extern void func_0209565c(s16 *p, s32 a);
extern s16 *func_02095590(s16 *p, s32 a);
extern s32 func_020a99d8(s32 a);
extern s32 func_02112950(void);
extern s32 func_020cd3d0(s32 a, s32 b, s32 c, s32 d, s32 e);
extern s32 func_020240fc(void);
extern s32 func_020cd3a4(void);
extern s32 func_02028144(s32 a);
extern s32 func_02028f90(s32 a, s32 b, s32 c);
extern void func_020c8ec0(s32 a);
extern s32 func_0202814c(s32 a);
extern s32 func_020b4920(void);
extern s32 func_020b261c(void);
extern s32 func_020c5578(s32 a);
extern void func_020ca918(s32 a, s32 b);
extern s32 func_020b4940(void);
extern s32 func_0204453c(void);
extern void func_020f0c20(s32 a, s32 b);
extern void func_020f07b4(s32 a);
extern void func_02041b64(s32 a);
extern void func_020cc318(s32 a);
extern void func_020cc368(s32 a, s32 b, s32 c);
extern void func_020cb08c(void);
extern void func_020cb410(s32 a, s32 b, s32 c, s32 d);
extern void func_020cb06c(void);
extern s32 func_020af728(s32 a);
extern s32 func_02021fc8(void);
extern void func_02021fe4(void);
extern s32 func_02022d34(s32 a);
extern s32 func_02022ce4(s32 a);
extern u16 *func_0203b6ac(s32 a, s32 b);
extern u32 func_02027450(s32 a);
extern void func_020c8f1c(s32 a);
extern void func_020a2b1c(void);
extern s32 func_020a2f40(void);
void func_020a1a08(s16 *param_1) {
    s32 iVar5;
    u32 uVar7;
    s32 bVar3;
    s16 *psVar6;

    switch (param_1[0x8c]) {
        case 0: {
            s32 t0 = (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4));
            if (t0 == 0) {
                return;
            }
            iVar5 = func_020c8f5c();
            if (iVar5 == 1) {
                uVar7 = func_01ffda04(param_1[0x8e]);
                func_02027c94(uVar7, 1);
                param_1[0x8c] = 0x1f;
                param_1[0x8e] = -1;
                func_0209565c(param_1, 2);
                psVar6 = func_02095590(param_1, 0);
                return;
            }
            param_1[0x8c] = 1;
            param_1[0x18] = 0;
            psVar6        = (s16 *) func_020a99d8(1);
            return;
        }
        case 1:
            iVar5 = func_02112950();
            if (iVar5 != 0) {
                if (param_1[0x18] <= 0) {
                    param_1[0x18] = 1;
                }
            }
            if (param_1[0x18] > 0) {
                param_1[0x18] = param_1[0x18] + 1;
            }
            if (param_1[0x18] < 60) {
                return;
            }
            param_1[0x8c] = 2;
            param_1[0x18] = 0;
            func_020cd3d0(2, 0xc27, 0, (u32) func_020a2f40, 0);
            psVar6 = (s16 *) func_020a99d8(0);
            return;
        case 2: {
            s32 t2 = (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4));
            if (t2 != 0) {
                func_020c8ec0(1);
                uVar7 = func_01ffda04(param_1[0x8e]);
                func_02027c94(uVar7, 1);
                param_1[0x8c] = 0x1f;
                param_1[0x8e] = -1;
                func_0209565c(param_1, 2);
                psVar6 = func_02095590(param_1, 0);
                return;
            }
            return;
        }
        case 3: {
            s32 t3 = (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4));
            if (t3 != 0) {
                param_1[0x8c] = 4;
                psVar6        = (s16 *) (s32) func_020cd3d0(2, 0xc31, 0, (u32) func_020a2f40, 0);
                return;
            }
            return;
        }
        case 4: {
            s32 t4;
            func_020f0c20(0x45, 0);
            t4 = (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4));
            if (t4 != 0) {
                param_1[0x8c] = 5;
                psVar6        = (s16 *) (s32) func_020cd3d0(2, 0xc32, 0, (u32) func_020a2f40, 0);
                return;
            }
            return;
        }
        case 5: {
            s32 t5;
            if (*(s32 *) (*(u8 **) &data_02154c70 + 0xac) != 0) {
                func_020f07b4(0x29);
            }
            t5 = (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4));
            if (t5 != 0) {
                param_1[0x8c] = 6;
                func_020cd3d0(2, 0xc33, 0, (u32) func_020a2f40, 0);
                *(s32 *) &param_1[0x1e] = -4;
                param_1[0x21]           = 0;
                param_1[0x20]           = 0;
                psVar6                  = (s16 *) (s32) ((u16) param_1[0x20] | (1 << param_1[0x8e]));
                param_1[0x20]           = (s16) (s32) psVar6;
                return;
            }
            return;
        }
        case 6: {
            s32 t6 = func_020240fc();
            psVar6 = (s16 *) t6;
            if (psVar6 != 0) {
                if (psVar6 != (s16 *) 1) {
                    param_1[0x8c] = 7;
                    param_1[0x8b] = (s16) (s32) psVar6;
                }
                return;
            }
            return;
        }
        case 7:
            if (*(s16 *) (*(u8 **) &data_02154c70 + 0x6c) == 2) {
                param_1[0x8c] = 8;
                psVar6        = (s16 *) func_020cd3a4();
                return;
            }
            return;
        case 8: {
            s32 t8 = (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4));
            if (t8 == 0) {
                return;
            }
            iVar5 = func_020240fc();
            if (iVar5 != 0 && iVar5 != 5) {
                return;
            }
            iVar5 = func_01ffda04(param_1[0x8e]);
            func_02028144(iVar5);
            switch (param_1[0x8b]) {
                case 0:
                    break;
                case 1:
                    break;
                case 2:
                    param_1[0x8c] = 5;
                    func_020cd3d0(2, 0xc35, 0, (u32) func_020a2f40, 0);
                    bVar3 = func_02028f90(iVar5, 0x55, 1);
                    return;
                case 4:
                    param_1[0x8c] = 5;
                    func_020cd3d0(2, 0xc37, 0, (u32) func_020a2f40, 0);
                    bVar3 = func_02028f90(iVar5, 0x55, 1);
                    return;
                case 3:
                    param_1[0x8c] = 9;
                    func_020cd3d0(2, 0xc34, 0, (u32) func_020a2f40, 0);
                    bVar3 = func_02028f90(iVar5, 0x55, 1);
                    return;
                case 5:
                    param_1[0x8c] = 10;
                    psVar6        = (s16 *) (s32) func_020cd3d0(2, 0xc38, 0, (u32) func_020a2f40, 0);
                    return;
            }
            break;
        }
        case 9: {
            s32 t9 = (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4));
            if (t9 != 0) {
                param_1[0x8c] = 5;
                psVar6        = (s16 *) (s32) func_020cd3d0(2, 0xc36, 0, (u32) func_020a2f40, 0);
                return;
            }
            return;
        }
        case 10:
            if (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4) != 0) {
                param_1[0x8c] = 0xb;
                func_0209565c(param_1, 0x13);
                func_02095590(param_1, 2);
                psVar6 = (s16 *) func_020b4940();
                return;
            }
            return;
        case 0xb: {
            u16 *pw;
            s32 rr = func_020b4920();
            s32 ty;
            if (rr != 3) {
                return;
            }
            pw = (u16 *) func_020b261c();
            ty = 0;
            if (*pw == 0) {
                ty = 1;
            } else if (func_020c5578((s32) pw) != 0) {
                ty = 2;
            }
            if (ty == 0) {
                goto b_d;
            }
            if (ty == 1) {
                goto b_c;
            }
            if (ty == 2) {
                goto b_c;
            }
            return;
        b_d:
            param_1[0x8c] = 0xd;
            psVar6        = (s16 *) (s32) func_020cd3d0(2, 0xc39, 0, (u32) func_020a2f40, 0);
            return;
        b_c:
            param_1[0x8c] = 0xc;
            psVar6        = (s16 *) (s32) func_020cd3d0(2, 0xc3a, 0, (u32) func_020a2f40, 0);
            return;
        }
        case 0xc: {
            s32 tc = (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4));
            if (tc != 0) {
                param_1[0x8c] = 0xb;
                psVar6        = (s16 *) func_020b4940();
                return;
            }
            return;
        }
        case 0xd: {
            s32 td = (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4));
            if (td == 0) {
                return;
            }
            psVar6 = (s16 *) (s32) * (s16 *) (*(u8 **) &data_02154c70 + 0x9a);
            if (psVar6 == 0) {
                goto d_big;
            }
            if (psVar6 == (s16 *) 1) {
                goto d_arm;
            }
            return;
        d_big:
            uVar7         = func_01ffda04(param_1[0x8e]);
            iVar5         = func_02028144(uVar7);
            param_1[0x8c] = 0xe;
            func_020cd3d0(0, 0x4b0, 0, (u32) func_020a2f40, 0);
            psVar6 = (s16 *) func_020b261c();
            func_020ca918(iVar5, (s32) psVar6);
            iVar5 = func_020c8f5c();
            if (iVar5 == 1) {
                func_02027c94(uVar7, 5);
            } else {
                func_02027c94(uVar7, 3);
            }
            bVar3 = func_0202814c(uVar7);
            return;
        d_arm:
            param_1[0x8c] = 0xb;
            psVar6        = (s16 *) func_020b4940();
            return;
        }
        case 0xe: {
            u32 uVar4;
            s32 v;
            u32 k;
            if (*(s16 *) (*(u8 **) &data_02154c70 + 0x6c) != 2) {
                return;
            }
            v = param_1[0x8e];
            func_02041b64((s8) v);
            func_020cc318(v);
            func_020cc368(0, 0, 0);
            func_020cb08c();
            func_020cb410(0, 0, 0, 1);
            uVar4 = *(u16 *) (*(u8 **) &data_02153720 + 0x11c);
            func_020cb410(1, uVar4, 0, 1);
            k = 0;
            do {
                func_020cb410(2, uVar4, k, 1);
                k = (u16) (k + 1);
            } while (k < 0x14);
            func_020cb06c();
            func_020cd3a4();
            param_1[0x8c] = 0xf;
            iVar5         = func_020c8f5c();
            if (iVar5 == 1) {
                psVar6 = (s16 *) (s32) func_020cd3d0(2, 0xc3b, 1, (u32) func_020a2f40, 0);
                return;
            }
            psVar6 = (s16 *) (s32) func_020cd3d0(2, 0xc3b, 0, (u32) func_020a2f40, 0);
            return;
        }
        case 0xf: {
            s32 tf = (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4));
            if (tf != 0) {
                param_1[0x8c] = 0x1f;
                param_1[0x17] = 2;
                param_1[0x18] = 0;
                param_1[0x80] = 2;
                return;
            }
            return;
        }
        case 0x10:
            if (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4) != 0) {
                func_0209565c(param_1, 0x14);
                func_02095590(param_1, 1);
                param_1[0x8c] = 0x11;
                param_1[0x18] = 0;
                return;
            }
            return;
        case 0x11: {
            s32 t11 = func_0204453c();
            if (t11) {
                param_1[0x8c] = 0x12;
                param_1[0x18] = 0;
                func_020a99d8(2);
                func_020af728(0);
                psVar6 = (s16 *) (s32) func_020cd3d0(2, 0xc4e, 2, (u32) func_020a2f40, 0);
                return;
            }
            return;
        }
        case 0x12: {
            s32 t12;
            if (param_1[0x18] >= 0) {
                param_1[0x18] = param_1[0x18] + 1;
            }
            if (param_1[0x18] >= 240) {
                func_020cd3a4();
                param_1[0x18] = -1;
            }
            t12 = (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4));
            if (t12 != 0) {
                func_0209565c(param_1, 0x12);
                func_02095590(param_1, 1);
                param_1[0x8c] = 0x13;
                param_1[0x18] = 0;
                func_020a99d8(0);
                psVar6 = (s16 *) (s32) func_020af728(1);
                return;
            }
            return;
        }
        case 0x13: {
            s32 t13 = (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4));
            if (t13 != 0) {
                param_1[0x8c] = 0x14;
                param_1[0x18] = 0;
                psVar6        = (s16 *) (s32) func_020cd3d0(2, 0xc50, 0, (u32) func_020a2f40, 0);
                return;
            }
            return;
        }
        case 0x14: {
            s32 t14;
            func_020f0c20(0x46, 0);
            t14 = (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4));
            if (t14 != 0) {
                param_1[0x8c] = 0x15;
                param_1[0x18] = 0;
                psVar6        = (s16 *) (s32) func_020cd3d0(2, 0xc51, 0, (u32) func_020a2f40, 0);
                return;
            }
            return;
        }
        case 0x15:
            if (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4) != 0) {
                func_0209565c(param_1, 0x14);
                func_02095590(param_1, 1);
                param_1[0x8c] = 0x16;
                param_1[0x18] = 0;
                return;
            }
            return;
        case 0x16:
            param_1[0x18] = param_1[0x18] + 1;
            if (param_1[0x87] >= 0) {
                func_0209565c(param_1, 0x15);
                func_02095590(param_1, 1);
                param_1[0x8c] = 0x19;
                param_1[0x18] = 0;
                param_1[0x8f] = param_1[0x88];
                psVar6        = (s16 *) func_020cd3a4();
                return;
            }
            if (param_1[0x18] < 0x2a30) {
                goto c16_lt;
            }
            iVar5 = func_01ffda04(*(s16 *) (*(u8 **) &data_02153720 + 0x11c));
            func_0209565c(param_1, 0x12);
            func_02095590(param_1, 1);
            param_1[0x8c] = 0x18;
            param_1[0x18] = 0;
            func_020cd3a4();
            bVar3 = func_02028f90(iVar5, 0x56, 1);
            return;
        c16_lt: {
            s32 z16 = param_1[0x92];
            if (z16 == 0) {
                return;
            }
            iVar5         = func_01ffda04(*(s16 *) (*(u8 **) &data_02153720 + 0x11c));
            param_1[0x8c] = 0x17;
            param_1[0x18] = 0;
            func_020cd3d0(2, 0xc52, 1, (u32) func_020a2f40, 0);
            func_02028f90(iVar5, 0x56, 1);
            param_1[0x92] = 0;
            return;
        }
        case 0x17: {
            s32 bVar2;
            param_1[0x18] = param_1[0x18] + 1;
            bVar2         = func_0204453c();
            if (bVar2) {
                param_1[0x8c] = 0x16;
                param_1[0x18] = 0;
                psVar6        = (s16 *) (s32) func_020cd3d0(2, 0xc52, 0, (u32) func_020a2f40, 0);
                return;
            }
            if (param_1[0x18] >= 0x2a30) {
                iVar5 = func_01ffda04(*(s16 *) (*(u8 **) &data_02153720 + 0x11c));
                func_0209565c(param_1, 0x12);
                func_02095590(param_1, 1);
                param_1[0x8c] = 0x18;
                param_1[0x18] = 0;
                func_020cd3a4();
                bVar3 = func_02028f90(iVar5, 0x56, 1);
                return;
            }
            return;
        }
        case 0x18:
            if (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4) != 0) {
                func_0209565c(param_1, 0x14);
                func_02095590(param_1, 1);
                param_1[0x8c] = 0x11;
                param_1[0x18] = 0;
                return;
            }
            return;
        case 0x19:
            if (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4) != 0) {
                *(u32 *) (*(u8 **) &data_02153720 + 0x20) = *(u32 *) (*(u8 **) &data_02153720 + 0x20) & 0xfffffffe;
                func_0209565c(param_1, 0x14);
                func_02095590(param_1, 1);
                param_1[0x8c] = 0x1a;
                param_1[0x18] = 0;
                bVar3         = func_02021fc8();
                return;
            }
            return;
        case 0x1a: {
            s32 bVar2;
            u32 uVar4;
            s32 st;
            bVar2         = 0;
            param_1[0x18] = param_1[0x18] + 1;
            iVar5         = func_01ffda04(*(s16 *) (*(u8 **) &data_02153720 + 0x11c));
            uVar7         = func_02022d34(iVar5);
            bVar3         = func_02022ce4(iVar5);
            if (uVar7 != 0 && *(u16 *) func_0203b6ac(uVar7, bVar3) == 1 && (uVar4 = func_02027450(iVar5), uVar4 > 0x3c)) {
                func_0209565c(param_1, 0x12);
                func_02095590(param_1, 1);
                param_1[0x8c] = 0x1c;
                param_1[0x18] = 0;
                bVar2         = 1;
            }
            if (!bVar2 && param_1[0x18] >= 3600) {
                func_0209565c(param_1, 0x12);
                func_02095590(param_1, 1);
                param_1[0x8c] = 0x1b;
                param_1[0x18] = 0;
            }
            st = param_1[0x8c];
            if (st == 0x1a) {
                return;
            }
            func_02021fe4();
            psVar6 = (s16 *) func_020cd3a4();
            return;
        }
        case 0x1b: {
            s32 t1b = (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4));
            if (t1b != 0) {
                iVar5 = func_01ffda04(*(s16 *) (*(u8 **) &data_02153720 + 0x11c));
                func_0209565c(param_1, 0x14);
                func_02095590(param_1, 1);
                param_1[0x8c] = 0x1a;
                param_1[0x18] = 0;
                func_02021fc8();
                bVar3 = func_02028f90(iVar5, 0x56, 2);
                return;
            }
            return;
        }
        case 0x1c: {
            s32 t1c = (*(s32 *) (*(u8 **) &data_02154c70 + 0xa4));
            if (t1c != 0) {
                param_1[0x8c] = 0x1d;
                param_1[0x18] = 0;
                psVar6        = (s16 *) (s32) func_020cd3d0(0, 0x4b0, 0, (u32) func_020a2f40, 0);
                return;
            }
            return;
        }
        case 0x1d: {
            u32 uVar4;
            u32 k;
            if (*(s16 *) (*(u8 **) &data_02154c70 + 0x6c) != 2) {
                return;
            }
            uVar7 = func_01ffda04(param_1[0x8e]);
            func_020c8ec0(2);
            func_020c8f1c(1);
            func_02027c94(uVar7, 5);
            func_0202814c(uVar7);
            func_02041b64((s8) * (s16 *) (*(u8 **) &data_02153720 + 0x11c));
            func_020a2b1c();
            func_020cc318(*(s16 *) (*(u8 **) &data_02153720 + 0x11c));
            func_020cc368(0, 0, 0);
            func_020cb08c();
            func_020cb410(0, 0, 0, 1);
            uVar4 = *(u16 *) (*(u8 **) &data_02153720 + 0x11c);
            func_020cb410(1, uVar4, 0, 1);
            k = 0;
            do {
                func_020cb410(2, uVar4, k, 1);
                k = (u16) (k + 1);
            } while (k < 0x14);
            func_020cb06c();
            func_020cd3a4();
            param_1[0x8c] = 0x1f;
            param_1[0x17] = 2;
            param_1[0x18] = 0;
            param_1[0x80] = 2;
            break;
        }
        default:
            break;
    }
    return;
}
