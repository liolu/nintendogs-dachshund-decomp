/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020512d8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020512d8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern u32 data_0214b484;
extern s32 func_0202d9e0(u8 *p);
extern void func_02027630(s32 a, s32 *b);
extern void func_0203e2b8(u8 *p, s32 a);
s32 func_02050c0c(u8 *param_1, s32 param_2) {
    s32 iVar3;
    s32 iVar4;
    s32 local_18[3];
    u32 *ptr;
    s32 sum;
    u32 bit;
    s16 bVar;

    iVar3 = func_0202d9e0(param_1);
    switch (iVar3) {
        case 0:
            goto C0;
        case 1:
        case 2:
        case 3:
            goto A2AD;
        case 4:
        case 5:
        case 6:
            goto A2B9;
        case 7:
        case 9:
        case 11:
        case 13:
            goto A2C3;
        case 8:
        case 10:
        case 12:
        case 14:
            goto A2C8;
        default:
            goto R0;
    }
A2AD:
    func_0203e2b8(param_1, 0x2ad);
    return 1;
A2B9:
    func_0203e2b8(param_1, 0x2b9);
    return 1;
A2C3:
    func_0203e2b8(param_1, 0x2c3);
    return 1;
A2C8:
    func_0203e2b8(param_1, 0x2c8);
    return 1;
C0:
    ptr          = *(u32 **) &data_0214b484;
    iVar4        = *(s32 *) ptr * 0x10dcd + 1;
    *(s32 *) ptr = iVar4;
    bit          = (u16) ((u32) (iVar4 << 16) >> 31);
    if (bit == 0) {
        goto B0;
    }
    if (bit != 1) {
        goto R0;
    }
    goto B1;
B0:
    func_02027630(param_2, local_18);
    {
        s32 d0 = local_18[0] - *(s32 *) (param_1 + 0x2a0);
        s32 k0 = *(s32 *) (param_1 + 0x18c);
        s32 d2 = local_18[2] - *(s32 *) (param_1 + 0x2a8);
        s32 k2 = *(s32 *) (param_1 + 0x194);
        sum    = ((s32) ((((s64) (d0)) * ((s64) (k0)) + 0x800) >> 12)) + ((s32) ((((s64) (d2)) * ((s64) (k2)) + 0x800) >> 12));
    }
    bVar = sum <= 0;
    if (bVar != 0) {
        goto S3;
    }
    func_0203e2b8(param_1, 0x2a4);
    goto done1;
S3:
    func_0203e2b8(param_1, 0x2a3);
done1:
    return 1;
B1:
    func_0203e2b8(param_1, 0x2a1);
    return 1;
R0:
    return 0;
}
