/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cda6c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020cda6c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern u32 data_021245c4;
extern void func_02069634(s32 *a, s32 *b, s32 *c);
extern void func_02069504(s32 *a, s32 *b, s32 *c);
extern void func_020069bc(s32 *a, s32 *b);
void func_02116f50(s32 *param_1, s32 *param_2, s32 *param_3, s32 *param_4, s32 *param_5) {
    s32 local_28[3];
    s64 thr;
    local_28[0] = 0;
    local_28[1] = 0x1000;
    local_28[2] = 0;
    func_02069634(param_5, param_4, param_3);
    thr = *(s64 *) &data_021245c4;
    if (!(((s64) (param_3)[0] * (param_3)[0] + (s64) (param_3)[1] * (param_3)[1] + (s64) (param_3)[2] * (param_3)[2]) < thr)) {
        func_020069bc(param_3, param_3);
    }
    func_02069504(local_28, param_3, param_1);
    if (!(((s64) (param_1)[0] * (param_1)[0] + (s64) (param_1)[1] * (param_1)[1] + (s64) (param_1)[2] * (param_1)[2]) < thr)) {
        func_020069bc(param_1, param_1);
    }
    func_02069504(param_3, param_1, param_2);
    if (!(((s64) (param_2)[0] * (param_2)[0] + (s64) (param_2)[1] * (param_2)[1] + (s64) (param_2)[2] * (param_2)[2]) < thr)) {
        func_020069bc(param_2, param_2);
    }
}
