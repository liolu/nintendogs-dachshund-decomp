/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e2480 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020e2480.c (license: none), reused by
 * tools/donor_match.py */
typedef signed int s32;
typedef signed long long s64;
extern s32 func_02069098(s32 a, s32 b);
extern s32 func_0206902c(s32 a);
void func_020d01b0(s32 *param_1, s32 *param_2, s32 *param_3, s32 param_4) {
    s32 iVar5;

    iVar5      = 0x1000 - param_4;
    param_3[0] = ((s32) (((s64) (iVar5) * (s64) (param_1[0]) + 0x800) >> 12)) +
                 ((s32) (((s64) (param_4) * (s64) (param_2[0]) + 0x800) >> 12));
    param_3[1] = ((s32) (((s64) (iVar5) * (s64) (param_1[1]) + 0x800) >> 12)) +
                 ((s32) (((s64) (param_4) * (s64) (param_2[1]) + 0x800) >> 12));
    param_3[2] = ((s32) (((s64) (iVar5) * (s64) (param_1[2]) + 0x800) >> 12)) +
                 ((s32) (((s64) (param_4) * (s64) (param_2[2]) + 0x800) >> 12));
    param_3[3] = ((s32) (((s64) (iVar5) * (s64) (param_1[3]) + 0x800) >> 12)) +
                 ((s32) (((s64) (param_4) * (s64) (param_2[3]) + 0x800) >> 12));
    {
        s32 p0 = *(volatile s32 *) &param_3[0];
        s32 p1 = *(volatile s32 *) &param_3[1];
        s32 p2 = *(volatile s32 *) &param_3[2];
        s32 p3 = *(volatile s32 *) &param_3[3];
        iVar5  = func_02069098(
            0x1000, ((s32) (((s64) (p0) * (s64) (p0) + 0x800) >> 12)) + ((s32) (((s64) (p1) * (s64) (p1) + 0x800) >> 12)) +
                        ((s32) (((s64) (p2) * (s64) (p2) + 0x800) >> 12)) + ((s32) (((s64) (p3) * (s64) (p3) + 0x800) >> 12)));
    }
    iVar5      = func_0206902c(iVar5);
    param_3[0] = ((s32) (((s64) (param_3[0]) * (s64) (iVar5) + 0x800) >> 12));
    param_3[1] = ((s32) (((s64) (param_3[1]) * (s64) (iVar5) + 0x800) >> 12));
    param_3[2] = ((s32) (((s64) (param_3[2]) * (s64) (iVar5) + 0x800) >> 12));
    param_3[3] = ((s32) (((s64) (param_3[3]) * (s64) (iVar5) + 0x800) >> 12));
}
