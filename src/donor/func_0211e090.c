/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_ov007_0215d258 from https://github.com/chasmlol/nintendogs-decomp src/overlays/ov007/func_ov007_0215d258.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_021560e8[];
extern s32 func_0211f750(u8 *p);
extern void func_0211fd80(u8 *a, u8 *b);
extern u16 func_0211f4e4(u32 a);
extern void func_0211f2e8(u32 a);
extern s32 func_02120160(void);
extern u32 func_0211f474(void);
extern s32 func_0211f9c0(u8 *a, u16 *b);
extern u16 func_0211f3a4(void);
extern s32 func_0211f3b4(u8 *a, u32 b, u16 *c);
extern void func_0211e2ec(void);
extern void func_0211dee4(void);
extern void func_0211d6a8(void);
void func_0211e090(u8 *param_1) {
    s32 iVar5;
    u8 *obj;
    u32 uVar7;
    u16 uVar3;
    u8 auStack_10[2];
    u16 sStack_e;
    u16 sv;
    u16 asStack_c[2];
    s32 bVar2;
    u32 uVar6;
    u16 code;

    iVar5 = func_0211f750(param_1);
    if (iVar5 == 0) {
        return;
    }
    {
        u32 fp = *(u32 *) (*(u8 **) data_021560e8 + 0x18);
        if (fp != 0) {
            ((void (*)(u8 *)) fp)(param_1);
        }
    }
    obj   = *(u8 **) data_021560e8;
    iVar5 = *(s32 *) (obj + 0x2c);
    if (iVar5 == 1) {
        goto c1;
    }
    if (iVar5 == 2) {
        goto c2;
    }
    if (iVar5 == 3) {
        goto c3;
    }
    return;
c1:
    func_0211fd80((u8 *) func_0211e2ec, auStack_10);
    return;
c2:
    *(u16 *) (obj + 0x44)                    = 0;
    *(u16 *) (*(u8 **) data_021560e8 + 0x46) = 0x65;
    uVar7                                    = 1;
    uVar3                                    = func_0211f3a4();
    uVar6                                    = uVar3;
    if (uVar6 == 0x8000) {
        code = 3;
    } else if (uVar6 == 0) {
        code = 0x15;
    } else {
        if ((uVar3 & 1) == 0) {
            u32 base = 1;
            u32 sh;
            do {
                uVar7 = (u16) (uVar7 + 1);
                if (uVar7 > 0x10) {
                    code = 0x16;
                    goto after;
                }
                sh = base << (uVar7 - 1);
            } while ((sh & uVar6) == 0);
        }
        bVar2 = func_0211f3b4((u8 *) func_0211dee4, uVar7, asStack_c);
        uVar6 = (u32) bVar2;
        code  = asStack_c[0];
    }
after:
    if (code == 0x16) {
        if (*(s32 *) (*(u8 **) data_021560e8 + 0x34) == 1) {
            return;
        }
        *(s32 *) (*(u8 **) data_021560e8 + 0x34) = 1;
        *(u16 *) (*(u8 **) data_021560e8 + 0x30) = code;
        *(u16 *) (*(u8 **) data_021560e8 + 0x32) = 0x1e;
        return;
    }
    if (code == 2) {
        return;
    }
    if (*(s32 *) (*(u8 **) data_021560e8 + 0x34) == 1) {
        return;
    }
    *(s32 *) (*(u8 **) data_021560e8 + 0x34) = 1;
    *(u16 *) (*(u8 **) data_021560e8 + 0x30) = code;
    *(u16 *) (*(u8 **) data_021560e8 + 0x32) = 30;
    return;
c3:
    uVar3                                    = func_0211f4e4(*(u16 *) (obj + 0x44));
    *(u16 *) (*(u8 **) data_021560e8 + 0x44) = uVar3;
    func_0211f2e8(*(u16 *) (*(u8 **) data_021560e8 + 0x44));
    if (*(s32 *) (*(u8 **) data_021560e8 + 0x48) == 1) {
        iVar5                = func_02120160();
        uVar7                = func_0211f474();
        *(s16 *) (iVar5 + 6) = (s16) uVar7;
    }
    iVar5 = func_0211f9c0((u8 *) func_0211d6a8, &sStack_e);
    if (iVar5 != 0) {
        return;
    }
    sv = sStack_e;
    if (*(s32 *) (*(u8 **) data_021560e8 + 0x34) == 1) {
        return;
    }
    *(s32 *) (*(u8 **) data_021560e8 + 0x34) = 1;
    *(u16 *) (*(u8 **) data_021560e8 + 0x30) = sv;
    *(u16 *) (*(u8 **) data_021560e8 + 0x32) = 10;
}
