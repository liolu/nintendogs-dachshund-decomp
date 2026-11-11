/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020bb8b8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020bb8b8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
extern u8 *data_0215607c;
extern u32 func_021182b4(u8 *p, int n);
extern u32 func_02117cc4(u8 *p, int n);
extern u32 func_02119184(u8 *p, int n);
extern u32 func_02117fe4(u8 *p, int n);
extern u32 func_0211bba4(u8 *p, int n);
extern u32 func_0211bcc4(u8 *p, int n);
extern u32 func_0211ca54(u8 *p, int n);
extern u32 func_02122648(u8 *p, int n);
extern u32 func_02121624(u8 *p, int n);
extern u32 func_02122604(u8 *p, int n);
extern u32 func_0212175c(u8 *p, int n);
u32 func_02105860(void) {
    u8 *iVar4;
    u32 uVar3;

    iVar4 = data_0215607c;
    uVar3 = (u32) * (s16 *) (iVar4 + 0x84);
    switch (uVar3) {
        case 0:
            break;
        case 1:
            return func_021182b4(iVar4 + 136, 4);
        case 2:
            return func_02117cc4(iVar4 + 256, 4);
        case 3:
            return func_02119184(iVar4 + 264, 4);
        case 4:
            return func_02117fe4(iVar4 + 324, 4);
        case 5:
            return func_0211bba4(iVar4 + 436, 4);
        case 6:
            return func_0211bcc4(iVar4 + 496, 4);
        case 7:
            return func_0211ca54(iVar4 + 540, 4);
        case 8:
            return func_02122648(iVar4 + 636, 4);
        case 9:
            return func_02121624(iVar4 + 708, 4);
        case 10:
            return func_02122604(iVar4 + 752, 4);
        case 11:
            return func_0212175c(iVar4 + 792, 4);
    }
    return uVar3;
}
