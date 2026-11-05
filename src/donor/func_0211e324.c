/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211e31c from projets/nintendogs-shiba-friends/src/donor/func_0211e31c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_021560e8[];
extern void func_0211e2f4(void);
extern void func_0211e2f0(void);
extern void func_0211deec(void);
extern void func_0211d6b0(void);
extern u32 func_0211fdac(u8 *p);
extern void func_0211fd88(u32 a, u16 *b);
extern u32 func_02065b10(u32 a);
extern u32 func_0211f4ec(u32 a);
extern void func_0211f2f0(u32 a);
extern u8 *func_02120168(void);
extern u32 func_0211f47c(void);
extern u32 func_0211f9c8(u32 a, u16 *b);
extern u32 func_0211f3ac(void);
extern u32 func_0211f3bc(u32 a, u32 b, u16 *c);
void func_0211e324(u8 *param_1) {
    s32 iVar5;
    u32 bVar2;
    u32 uVar7;
    u32 uVar6;
    u32 uVar3;
    u32 r3;
    u32 base;
    u16 hv;
    u32 bit;
    u8 *P;
    u16 auStack_10[1];
    u16 sStack_e;
    u16 asStack_c[2];

    if (func_0211fdac(param_1) == 0) {
        return;
    }
    iVar5 = *(s32 *) (*(u8 **) data_021560e8 + 0x2c);
    switch (iVar5) {
        case 1:
            func_0211fd88((u32) func_0211e2f4, auStack_10);
            return;
        case 2:
            iVar5 = (s32) func_02065b10((u32) func_0211e2f0);
            if (iVar5 != 0) {
                hv = (u16) iVar5;
                P  = *(u8 **) data_021560e8;
                if (*(s32 *) (P + 0x34) != 1) {
                    *(s32 *) (P + 0x34)                      = 1;
                    *(u16 *) (*(u8 **) data_021560e8 + 0x30) = hv;
                    *(u16 *) (*(u8 **) data_021560e8 + 0x32) = 0x80;
                }
                bVar2 = 0;
            } else {
                bVar2 = 1;
            }
            if (bVar2 == 0) {
                return;
            }
            *(u16 *) (*(u8 **) data_021560e8 + 0x44) = 0;
            uVar7                                    = 1;
            *(u16 *) (*(u8 **) data_021560e8 + 0x46) = 101;
            uVar3                                    = func_0211f3ac();
            uVar6                                    = uVar3;
            if (uVar6 == 0x8000) {
                r3 = 3;
            } else if (uVar6 == 0) {
                r3 = 21;
            } else {
                if ((uVar3 & 1) == 0) {
                    base = uVar7;
                    do {
                        uVar7 = (u16) (uVar7 + 1);
                        if (uVar7 > 16) {
                            r3 = 22;
                            goto AFTER_LOOP;
                        }
                        bit = base << (uVar7 - 1);
                    } while ((bit & uVar6) == 0);
                }
                func_0211f3bc((u32) func_0211deec, uVar7, asStack_c);
                r3 = asStack_c[0];
            }
        AFTER_LOOP:
            if (r3 == 22) {
                P = *(u8 **) data_021560e8;
                if (*(s32 *) (P + 0x34) == 1) {
                    return;
                }
                *(s32 *) (P + 0x34)                      = 1;
                *(s16 *) (*(u8 **) data_021560e8 + 0x30) = (s16) r3;
                *(u16 *) (*(u8 **) data_021560e8 + 0x32) = 30;
                return;
            }
            if (r3 == 2) {
                return;
            }
            P = *(u8 **) data_021560e8;
            if (*(s32 *) (P + 0x34) == 1) {
                return;
            }
            *(s32 *) (P + 0x34)                      = 1;
            *(s16 *) (*(u8 **) data_021560e8 + 0x30) = (s16) r3;
            *(u16 *) (*(u8 **) data_021560e8 + 0x32) = 30;
            return;
        case 3:
            iVar5 = (s32) func_02065b10((u32) func_0211e2f0);
            if (iVar5 != 0) {
                hv = (u16) iVar5;
                P  = *(u8 **) data_021560e8;
                if (*(s32 *) (P + 0x34) != 1) {
                    *(s32 *) (P + 0x34)                      = 1;
                    *(u16 *) (*(u8 **) data_021560e8 + 0x30) = hv;
                    *(u16 *) (*(u8 **) data_021560e8 + 0x32) = 0x80;
                }
                bVar2 = 0;
            } else {
                bVar2 = 1;
            }
            if (bVar2 == 0) {
                return;
            }
            *(u16 *) (*(u8 **) data_021560e8 + 0x44) = (u16) func_0211f4ec(*(u16 *) (*(u8 **) data_021560e8 + 0x44));
            func_0211f2f0(*(u16 *) (*(u8 **) data_021560e8 + 0x44));
            if (*(s32 *) (*(u8 **) data_021560e8 + 0x48) == 1) {
                P                = func_02120168();
                *(u16 *) (P + 6) = (u16) func_0211f47c();
            }
            if (func_0211f9c8((u32) func_0211d6b0, &sStack_e) != 0) {
                return;
            }
            hv = sStack_e;
            P  = *(u8 **) data_021560e8;
            if (*(s32 *) (P + 0x34) == 1) {
                return;
            }
            *(s32 *) (P + 0x34)                      = 1;
            *(u16 *) (*(u8 **) data_021560e8 + 0x30) = hv;
            *(u16 *) (*(u8 **) data_021560e8 + 0x32) = 10;
            return;
        default:
            return;
    }
}
