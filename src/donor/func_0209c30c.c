/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b45e8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b45e8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u32 vu32;
extern u32 data_02153734;
extern u8 *func_02003844(s32 *p, u32 n);
extern s32 func_02002dec(void);
extern s32 func_02002de4(s32 v);
extern void func_020906ec(s32 *p);
extern void func_020c0cc8(void);
extern void func_02090750(void);
extern void func_0208fc58(s32 v);
extern void func_0208cf74(void);
extern void func_02002f5c(u32 *a, u32 b);
extern u32 func_02002dfc(u32 a, u32 b);
extern void func_020900c0(u32 a, s32 b, s32 c);
extern void func_020902e0(s32 v);
extern void func_0208fba0(s32 v);
extern void func_020cd29c(s32 a, s32 b);
extern void func_020906d8(void);
u32 func_0209c30c(u8 *param_1) {
    s32 k21;
    s32 bVar2;
    u32 *pa;
    u32 uVar4;
    u32 zero;
    s32 one;

    s16 uVar1;
    s32 iVar5;
    s32 *piVar6;
    u8 *puVar7;
    u32 uVar8;
    u32 local_48;
    u32 auStack_44[8];

    uVar1                   = *(s16 *) (param_1 + 6);
    local_48                = 0;
    bVar2                   = 1;
    iVar5                   = func_02002dec();
    piVar6                  = (s32 *) func_02002de4(iVar5);
    puVar7                  = func_02003844(piVar6, 0x2324);
    *(u16 *) puVar7         = 1;
    *(s16 *) (puVar7 + 2)   = uVar1;
    *(u16 *) (puVar7 + 4)   = 0;
    *(u8 **) &data_02153734 = puVar7;
    func_020906ec(piVar6);
    func_020c0cc8();
    uVar4 = (u32) func_0208cf74;

    pa   = auStack_44;
    k21  = 21;
    zero = 0;
    one  = 1;
    do {
        func_02090750();
        func_0208fc58(*(s16 *) (param_1 + 6));
        func_02002f5c(pa, uVar4);
        uVar8                                            = func_02002dfc((u32) pa, zero);
        *(u16 *) (*(vu32 *) &data_02153734)              = 0;
        *(u16 *) ((u8 *) (*(vu32 *) &data_02153734) + 4) = 0;
        if (uVar8 > 14) {
            goto big;
        }
        if (uVar8 >= 14) {
            goto c14;
        }
        if (uVar8 > 1) {
            goto small2;
        }
        if (uVar8 == 1) {
            bVar2 = zero;
        }
        goto endcase;
    small2:
        if (uVar8 > 9) {
            goto endcase;
        }
        if (uVar8 < 6) {
            goto endcase;
        }
        if (uVar8 == 6) {
            goto c6;
        }
        if (uVar8 == 9) {
            bVar2    = zero;
            local_48 = one;
        }
        goto endcase;
    big:
        if (uVar8 > 18) {
            goto big2;
        }
        if (uVar8 != 18) {
            goto endcase;
        }
        goto c18;
        goto endcase;
    big2:
        if (uVar8 != 21) {
            goto endcase;
        }
        goto c21;
        goto endcase;
    c6:
        func_020900c0(zero, *(s16 *) (param_1 + 6), *(s16 *) (param_1 + 8));
        func_02002f5c(pa, uVar4);
        func_02002dfc((u32) pa, zero);
        goto endcase;
    c14:
        func_020902e0(*(s16 *) (param_1 + 6));
        func_02002f5c(pa, uVar4);
        func_02002dfc((u32) pa, zero);
        goto endcase;
    c21:
        func_0208fba0(*(s16 *) (param_1 + 6));
        func_02002f5c(pa, uVar4);
        func_02002dfc((u32) pa, zero);
        *(u16 *) ((u8 *) (*(vu32 *) &data_02153734) + 4) = one;
        goto endcase;
    c18:
        func_020cd29c(k21, 1);
    endcase:;
    } while (bVar2);
    func_020906d8();
    data_02153734 = 0;
    return local_48;
}
