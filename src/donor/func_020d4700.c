/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d46f8 from projets/nintendogs-shiba-friends/src/donor/func_020d46f8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    s32 w[3];
} Tri;
extern s32 data_021245cc[];
extern void func_02069668(s32 *a, s32 *b, s32 *c);
extern s32 func_01ffda04(s32 a);
extern void func_02027630(s32 a, s32 *b);
extern void func_02069634(s32 *a, s32 *b, s32 *c);
extern s32 func_020069bc(s32 *a, s32 *b);
extern s32 func_020695f0(s32 *a, s32 *b);
extern void func_02111948(u8 *p, s32 a, s32 b);
extern void func_020ec2a0(s32 *p, s32 a);
void func_020d4700(u8 *param_1, s32 *param_2) {
    s32 *iVar12;
    Tri pv;
    Tri vec;
    Tri lv;
    s64 lim;
    s32 one;
    s32 local_6c;
    s32 k2;
    s32 k25;
    s32 k3;
    s32 k50;
    s32 k2048;
    s32 kn2048;
    s32 k4;
    s32 k80;
    s32 t;
    s32 c8;
    s32 c4;
    s32 c0;
    s32 ta;
    s32 tb;
    s32 tc;
    s32 iVar11;
    s32 iVar5;
    s32 iVar6;
    s32 uVar7;
    s64 lVar1;

    iVar12        = *(s32 **) (param_1 + 0x214);
    *(Tri *) &vec = *(Tri *) param_2;
    if (vec.w[0] > 820) {
        vec.w[0] = 820;
    }
    if (vec.w[1] > 820) {
        vec.w[1] = 820;
    }
    if (vec.w[2] > 820) {
        vec.w[2] = 820;
    }
    if (vec.w[0] < -820) {
        vec.w[0] = -820;
    }
    if (vec.w[1] < -820) {
        vec.w[1] = -820;
    }
    if (vec.w[2] < -820) {
        vec.w[2] = -820;
    }
    func_02069668((s32 *) (param_1 + 0xbc), vec.w, (s32 *) (param_1 + 0xbc));
    ta      = *(s32 *) (param_1 + 0xe8);
    tb      = *(s32 *) (param_1 + 0xe4);
    tc      = *(s32 *) (param_1 + 0xe0);
    pv.w[0] = tc;
    pv.w[2] = ta;
    pv.w[1] = tb;
    *(s32 *) (param_1 + 0xb0) =
        *(s32 *) (param_1 + 0xb0) + ((param_2[0] >> 1) - ((s32) (((s64) (iVar12[2]) * (tc) + 0x800) >> 12)));
    *(s32 *) (param_1 + 0xb8) =
        *(s32 *) (param_1 + 0xb8) + ((param_2[2] >> 1) - ((s32) (((s64) (iVar12[2]) * (pv.w[2]) + 0x800) >> 12)));
    local_6c = 0;
    if (*(s32 *) (param_1 + 0xb0) > 0x99c) {
        *(s32 *) (param_1 + 0xb0) = 0x99c;
    }
    if (*(s32 *) (param_1 + 0xb4) > 0x99c) {
        *(s32 *) (param_1 + 0xb4) = 0x99c;
    }
    if (*(s32 *) (param_1 + 0xb8) > 0x99c) {
        *(s32 *) (param_1 + 0xb8) = 0x99c;
    }
    if (*(s32 *) (param_1 + 0xb0) < -0x99c) {
        *(s32 *) (param_1 + 0xb0) = -0x99c;
    }
    if (*(s32 *) (param_1 + 0xb4) < -0x99c) {
        *(s32 *) (param_1 + 0xb4) = -0x99c;
    }
    if (*(s32 *) (param_1 + 0xb8) < -0x99c) {
        *(s32 *) (param_1 + 0xb8) = -0x99c;
    }
    lim    = *(s64 *) data_021245cc;
    t      = 2048;
    k2048  = t;
    kn2048 = -t;
    k2     = 2;
    k25    = 25;
    k3     = 3;
    k50    = 50;
    k4     = 4;
    k80    = 80;
    one    = 1;
    iVar11 = 0;
    do {
        if ((*(u32 *) (param_1 + 0x16c) & (u32) (one << (iVar11 + 3))) != 0) {
            iVar5 = func_01ffda04(iVar11);
            if (iVar5 != 0) {
                func_02027630(iVar5, lv.w);
                func_02069634(lv.w, (s32 *) (param_1 + 0xbc), lv.w);
                lVar1 = (s64) lv.w[0] * lv.w[0] + (s64) lv.w[1] * lv.w[1];
                lVar1 = lVar1 + (s64) lv.w[2] * lv.w[2];
                if (lVar1 >= lim) {
                    iVar6 = func_020069bc(lv.w, lv.w);
                } else {
                    iVar6 = local_6c;
                }
                if (iVar6 == 0) {
                    return;
                }
                uVar7      = func_020695f0(lv.w, pv.w);
                iVar6      = ((s32) (((s64) (uVar7) * (iVar12[2]) + 0x800) >> 12));
                c8         = *(s32 *) (param_1 + 0xe8);
                c4         = *(s32 *) (param_1 + 0xe4);
                c0         = *(s32 *) (param_1 + 0xe0);
                iVar12[10] = c0;
                iVar12[11] = c4;
                iVar12[12] = c8;
                if (iVar6 >= 410) {
                    if (iVar6 < 819) {
                        func_02111948(param_1, iVar5, k2);
                        iVar12[1] = k25;
                        if ((*(u32 *) (param_1 + 0xbc) & 1) == 0) {
                            iVar12[9] = 1229;
                        } else {
                            iVar12[9] = -1229;
                        }
                        func_020ec2a0((s32 *) (param_1 + 400), 10);
                        iVar12[14] = 10;
                    } else if (iVar6 < 1434) {
                        func_02111948(param_1, iVar5, k3);
                        iVar12[1] = k50;
                        if ((*(u32 *) (param_1 + 0xbc) & 1) == 0) {
                            iVar12[9] = k2048;
                        } else {
                            iVar12[9] = kn2048;
                        }
                        func_020ec2a0((s32 *) (param_1 + 400), 9);
                        iVar12[14] = 9;
                    } else {
                        func_02111948(param_1, iVar5, k4);
                        iVar12[1] = k80;
                        if ((*(u32 *) (param_1 + 0xbc) & 1) == 0) {
                            iVar12[9] = 3277;
                        } else {
                            iVar12[9] = -3277;
                        }
                        func_020ec2a0((s32 *) (param_1 + 400), 8);
                        iVar12[14] = 8;
                    }
                }
            }
        }
        iVar11 = (s16) (iVar11 + 1);
    } while (iVar11 < 3);
}
