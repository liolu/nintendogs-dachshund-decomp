/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210b9f8 from projets/nintendogs-shiba-friends/src/donor/func_0210b9f8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern u32 data_02153704;
extern s32 func_0206902c(s32 a);
extern s32 func_02069098(s32 a, s32 b);
u32 func_0210ba00(s32 *param_1, s32 *param_2) {
    s32 iVar4;
    s32 iVar5;
    s32 sum;
    s32 r;

    iVar4 = (*(s32 *) (*(u8 **) &data_02153704 + 0xc)) << 1;
    sum   = ((s32) ((((s64) (param_1[0]) * (param_1[0])) + 0x800) >> 12)) +
          ((s32) ((((s64) (param_1[2]) * (param_1[2])) + 0x800) >> 12));
    iVar5 = iVar4 / 3;
    if (sum > ((s32) ((((s64) (iVar5) * (iVar5)) + 0x800) >> 12))) {
        r          = func_0206902c(sum);
        r          = func_02069098(iVar5 - r, r);
        param_2[0] = param_2[0] + ((s32) ((((s64) (param_1[0]) * (r)) + 0x800) >> 12));
        param_2[2] = param_2[2] + ((s32) ((((s64) (param_1[2]) * (r)) + 0x800) >> 12));
        return 1;
    }
    return 0;
}
