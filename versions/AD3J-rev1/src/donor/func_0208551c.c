/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02081d34 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02081d34.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef volatile u32 vu32;
typedef void (*Fn1)(u32 a);
typedef void (*Fn2)(u8 *p, u32 *q);
extern u32 func_02085f74(u32 a);
extern void func_02085f70(u32 a);
extern void func_020862f0(u8 *p, u32 *q);
extern void func_020870cc(u32 a);
extern void func_020869b0(u8 *p, u32 *q);
void func_0208551c(u8 *param_1) {
    u32 iVar5;
    u32 *piVar3;
    Fn2 pcVar2;
    Fn1 pcVar4;
    u32 uVar1;
    u32 *piVar6;

    iVar5  = *(u32 *) (param_1 + 0x34);
    piVar3 = (u32 *) **(u32 ***) (iVar5 + 0x18);
    pcVar2 = 0;
    func_02085f74(*((u8 *) piVar3 + 0x43) * 20 + *(u32 *) (param_1 + 0x20));
    uVar1 = (*piVar3 << 26) >> 30;
    if (uVar1 == 0) {
        goto c0;
    }
    if (uVar1 == 1) {
        goto c1;
    }
    if (uVar1 == 2) {
        pcVar2 = (Fn2) func_020862f0;
    }
    goto sel;
c0:
    pcVar2 = (Fn2) func_020870cc;
    goto sel;
c1:
    pcVar2 = (Fn2) func_020869b0;
sel:
    pcVar4 = (((*(vu32 *) piVar3 << 20) >> 31) != 0) ? (Fn1) func_02085f74 : (Fn1) func_02085f70;
    piVar6 = *(u32 **) (iVar5 + 8);
    if (piVar6 == 0) {
        return;
    }
    do {
        pcVar4(*((u8 *) piVar6 + 0x42) * 20 + *(u32 *) (param_1 + 0x20));
        pcVar2(param_1, piVar6);
        piVar6 = (u32 *) *piVar6;
    } while (piVar6 != 0);
}
