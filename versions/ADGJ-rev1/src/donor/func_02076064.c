/* compiler: 1.2/sp2p3  */
/* func_020eede0 from projets/sims-2-the/src/auto/func_020eede0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef long long s64;
typedef void (*FnCb)(s32 *a, u8 *b, u32 c);
extern void func_0206e034(s32 a, s32 *b, s32 c);
extern void func_02076368(s32 *a, s32 *b, s32 c, s32 d);
extern s32 func_02069098(s32 a, s32 b);
extern void func_02069504(s32 *a, s32 *b, s32 *c);
extern void func_020692f0(s32 *a, s32 *b);
s32 func_02076064(s32 *param_1, u8 *param_2, s32 param_3) {
    s32 uVar2;
    u8 *nd;
    s32 idx;
    s32 iVar6;
    s32 tt;
    u8 *nx;
    s32 vl;
    s32 F[23];
    u8 *iVar4;
    s32 iVar3;
    u16 uVar1;
    u8 *iVar5;
    s32 nxt;
    u8 *off2;

    nxt = *(s32 *) (param_2 + 0x10);
    idx = param_3;
    if (nxt == 0) {
        uVar1 = *(u16 *) (param_2 + idx * 2 + 0x1a);
        if ((uVar1 & 0x300) != 0x100) {
            return 0;
        }
        ((FnCb) (*(u32 *) (param_2 + 0xc)))(param_1, param_2, uVar1 & 0xff);
        return 1;
    }
    iVar6 = 0;
    iVar3 = 0;
    iVar5 = param_2;
    iVar4 = param_2;
    do {
        tt = ((u16 *) (iVar4 + 0x1a))[idx] & 0x300;
        if (tt == 0x100) {
            iVar6 = iVar6 + *(s32 *) (iVar4 + 4);
            iVar5 = iVar4;
            iVar3 = iVar3 + 1;
        }
        iVar4 = *(u8 **) (iVar4 + 0x10);
    } while (iVar4 != 0);
    if (iVar6 == 0) {
        return 0;
    }
    if (iVar3 == 1) {
        uVar1 = *(u16 *) (iVar5 + idx * 2 + 0x1a);
        ((FnCb) (*(u32 *) (iVar5 + 0xc)))(param_1, iVar5, uVar1 & 0xff);
        return 1;
    }
    F[0] = 0;
    func_0206e034(*(volatile s32 *) &F[0], param_1, 0x58);
    *param_1 = -1;
    nd       = param_2;
    do {
        uVar1 = ((u16 *) (nd + 0x1a))[idx];
        if (((uVar1 & 0x300) == 0x100) && (0 < *(s32 *) (nd + 4))) {
            ((FnCb) (*(u32 *) (nd + 0xc)))((s32 *) &F[1], nd, uVar1 & 0xff);
            if (iVar6 == 0x1000) {
                vl = *(s32 *) (nd + 4);
            } else {
                vl = func_02069098(*(s32 *) (nd + 4), iVar6);
            }
            func_02076368(param_1 + 1, &F[2], vl, F[1] & 1);
            func_02076368(param_1 + 4, &F[5], vl, F[1] & 8);
            func_02076368(param_1 + 7, &F[8], vl, F[1] & 0x10);
            if ((F[1] & 4) == 0) {
                param_1[0x13] += (s32) (((s64) vl * F[20]) >> 12);
                param_1[0x14] += (s32) (((s64) vl * F[21]) >> 12);
                param_1[0x15] += (s32) (((s64) vl * F[22]) >> 12);
            }
            if ((F[1] & 2) == 0) {
                param_1[10] += (vl * F[11]) >> 12;
                param_1[11] += (vl * F[12]) >> 12;
                param_1[12] += (vl * F[13]) >> 12;
                param_1[13] += (vl * F[14]) >> 12;
                param_1[14] += (vl * F[15]) >> 12;
                param_1[15] += (vl * F[16]) >> 12;
            } else {
                param_1[10] += vl;
                param_1[14] += vl;
            }
            *param_1 = *param_1 & F[1];
        }
        nd = *(u8 **) (nd + 0x10);
    } while (nd != 0);
    func_02069504(param_1 + 10, param_1 + 13, param_1 + 16);
    func_020692f0(param_1 + 10, param_1 + 10);
    func_020692f0(param_1 + 16, param_1 + 16);
    func_02069504(param_1 + 16, param_1 + 10, param_1 + 13);
    return 1;
}
