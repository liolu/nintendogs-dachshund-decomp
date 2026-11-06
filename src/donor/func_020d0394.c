/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e2664 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020e2664.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
void func_020d0394(s32 *param_1, s32 *param_2) {
    param_2[0] = (s32) ((0x1000 - (s32) ((u32) ((((s64) (param_1[2]) * (s64) (param_1[2])) + 0x800) >> 12)) * 2) -
                        (s32) ((u32) ((((s64) (param_1[3]) * (s64) (param_1[3])) + 0x800) >> 12)) * 2);
    param_2[3] = (s32) ((s32) ((u32) ((((s64) (param_1[1]) * (s64) (param_1[2])) + 0x800) >> 12)) -
                        (s32) ((u32) ((((s64) (*param_1) * (s64) (param_1[3])) + 0x800) >> 12))) *
                 2;
    param_2[6] = (s32) ((s32) ((u32) ((((s64) (param_1[1]) * (s64) (param_1[3])) + 0x800) >> 12)) +
                        (s32) ((u32) ((((s64) (*param_1) * (s64) (param_1[2])) + 0x800) >> 12))) *
                 2;
    param_2[1] = (s32) ((s32) ((u32) ((((s64) (param_1[1]) * (s64) (param_1[2])) + 0x800) >> 12)) +
                        (s32) ((u32) ((((s64) (*param_1) * (s64) (param_1[3])) + 0x800) >> 12))) *
                 2;
    param_2[4] = (s32) ((0x1000 - (s32) ((u32) ((((s64) (param_1[1]) * (s64) (param_1[1])) + 0x800) >> 12)) * 2) -
                        (s32) ((u32) ((((s64) (param_1[3]) * (s64) (param_1[3])) + 0x800) >> 12)) * 2);
    param_2[7] = (s32) ((s32) ((u32) ((((s64) (param_1[2]) * (s64) (param_1[3])) + 0x800) >> 12)) -
                        (s32) ((u32) ((((s64) (*param_1) * (s64) (param_1[1])) + 0x800) >> 12))) *
                 2;
    param_2[2] = (s32) ((s32) ((u32) ((((s64) (param_1[1]) * (s64) (param_1[3])) + 0x800) >> 12)) -
                        (s32) ((u32) ((((s64) (*param_1) * (s64) (param_1[2])) + 0x800) >> 12))) *
                 2;
    param_2[5] = (s32) ((s32) ((u32) ((((s64) (param_1[2]) * (s64) (param_1[3])) + 0x800) >> 12)) +
                        (s32) ((u32) ((((s64) (*param_1) * (s64) (param_1[1])) + 0x800) >> 12))) *
                 2;
    param_2[8]  = (s32) ((0x1000 - (s32) ((u32) ((((s64) (param_1[1]) * (s64) (param_1[1])) + 0x800) >> 12)) * 2) -
                        (s32) ((u32) ((((s64) (param_1[2]) * (s64) (param_1[2])) + 0x800) >> 12)) * 2);
    param_2[9]  = 0;
    param_2[10] = 0;
    param_2[11] = 0;
}
