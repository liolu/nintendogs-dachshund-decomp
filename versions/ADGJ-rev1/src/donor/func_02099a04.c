/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02099a04 from projets/nintendogs-chihuahua-friends/src/donor/func_02099a04.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u8 data_0213bc24[];
extern u8 data_0213bc54[];
extern u8 data_0213bc2c[];
extern u8 data_0213bc40[];
extern u8 data_0213bc68[];
extern u8 data_0213bc74[];
extern u8 data_0213bca4[];
extern u8 data_0213bc7c[];
extern u8 data_0213bc90[];
extern u8 data_0213bcb8[];
extern u8 data_0213bcc4[];
extern u8 data_0213bcf4[];
extern u8 data_0213bccc[];
extern u8 data_0213bce0[];
extern u8 data_0213bd08[];
extern u32 data_02153728;
extern u8 *func_02003844(u8 *p, u32 n);
extern void func_0205e950(u8 *buf, u32 n, u8 *fmt, u32 r3, u32 s5, u32 s6);
extern u32 func_020c2228(u8 *buf);
extern u8 *func_02006b6c(u32 a);
extern u8 *func_02006b38(u32 a);
extern u8 *func_02006b04(u32 a);
extern u32 func_02074d1c(u8 *p, u32 a);
u8 *func_02099a04(u8 *param_1, s32 param_2, s32 param_3) {
    u8 *puVar1;
    s32 iVar2;
    u8 *puVar3;
    u8 *piVar4;
    u8 auStack_50[64];
    u32 sel;
    u32 k6a;
    u32 k6b;
    u32 k6c;

    puVar1                 = func_02003844(param_1, 0x3c);
    *(u16 *) (puVar1 + 0)  = 0;
    *(u16 *) (puVar1 + 2)  = (u16) param_2;
    *(u32 *) (puVar1 + 4)  = 0;
    *(u32 *) (puVar1 + 8)  = 0;
    *(u32 *) (puVar1 + 12) = 0;
    *(u32 *) (puVar1 + 16) = 0;
    *(u32 *) (puVar1 + 20) = 0;
    *(u32 *) (puVar1 + 24) = 0;
    *(u32 *) (puVar1 + 28) = 0;
    *(u32 *) (puVar1 + 40) = 0;
    *(u32 *) (puVar1 + 44) = 0;
    *(u32 *) (puVar1 + 48) = 0;

    k6a = (u32) data_0213bc24;
    sel = 0;
    if (param_2 == 0) {
        goto A1;
    }
    if (param_2 == 1) {
        goto B1;
    }
    if (param_2 == 2) {
        sel = (u32) data_0213bc54;
    }
    goto C1;
A1:
    sel = (u32) data_0213bc2c;
    goto C1;
B1:
    sel = (u32) data_0213bc40;
C1:
    func_0205e950(auStack_50, 0x40, data_0213bc68, sel, param_3 - 1, k6a);
    iVar2                 = (s32) func_020c2228(auStack_50);
    puVar3                = func_02006b6c((u32) iVar2);
    *(u8 **) (puVar1 + 8) = puVar3;

    k6b = (u32) data_0213bc74;
    sel = 0;
    if (param_2 == 0) {
        goto A2;
    }
    if (param_2 == 1) {
        goto B2;
    }
    if (param_2 == 2) {
        sel = (u32) data_0213bca4;
    }
    goto C2;
A2:
    sel = (u32) data_0213bc7c;
    goto C2;
B2:
    sel = (u32) data_0213bc90;
C2:
    func_0205e950(auStack_50, 0x40, data_0213bcb8, sel, param_3 - 1, k6b);
    iVar2                  = (s32) func_020c2228(auStack_50);
    piVar4                 = func_02006b38((u32) iVar2);
    *(u8 **) (puVar1 + 12) = piVar4;

    k6c = (u32) data_0213bcc4;
    sel = 0;
    if (param_2 == 0) {
        goto A3;
    }
    if (param_2 == 1) {
        goto B3;
    }
    if (param_2 == 2) {
        sel = (u32) data_0213bcf4;
    }
    goto C3;
A3:
    sel = (u32) data_0213bccc;
    goto C3;
B3:
    sel = (u32) data_0213bce0;
C3:
    func_0205e950(auStack_50, 0x40, data_0213bd08, sel, param_3 - 1, k6c);
    iVar2                  = (s32) func_020c2228(auStack_50);
    piVar4                 = func_02006b04((u32) iVar2);
    *(u8 **) (puVar1 + 16) = piVar4;

    iVar2                  = (s32) func_02074d1c(*(u8 **) (puVar1 + 8), 0);
    *(s32 *) (puVar1 + 20) = iVar2;
    *(u32 *) (puVar1 + 24) = 0x80000;
    *(u32 *) (puVar1 + 28) = 0x52000;
    *(u32 *) (puVar1 + 32) = 0xfff00000;
    *(u32 *) (puVar1 + 36) = 0;
    iVar2                  = (s32) func_02074d1c(*(u8 **) (puVar1 + 8), 1);
    *(s32 *) (puVar1 + 40) = iVar2;
    *(u32 *) (puVar1 + 44) = 0x80000;
    *(u32 *) (puVar1 + 48) = 0x82000;
    *(u32 *) (puVar1 + 52) = 0x100000;
    *(u32 *) (puVar1 + 56) = 0;
    data_02153728          = (u32) puVar1;
    return puVar1;
}
