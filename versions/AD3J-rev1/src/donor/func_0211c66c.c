/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d31e8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d31e8.c (license: none), reused by
 * tools/donor_match.py */
typedef signed int s32;
typedef signed long long s64;
extern void func_02069634(s32 *a, s32 *b, s32 *c);
extern void func_02069668(s32 *a, s32 *b, s32 *c);
void func_0211c66c(s32 *param_1, s32 param_2) {
    s32 zero[3];
    s32 vec[3];
    s32 iVar5;
    s32 iVar4;
    s32 t;
    s32 *q;

    iVar5 = 0;
    if (0 < param_1[0]) {
        iVar4   = iVar5;
        zero[0] = iVar5;
        zero[1] = iVar5;
        zero[2] = iVar5;
        do {
            if (((s32 *) param_1[3])[iVar5] != 1) {
                func_02069634((s32 *) (param_1[1] + iVar4), (s32 *) (param_1[4] + iVar4), vec);
                vec[0] = (s32) (((s64) vec[0] * param_2 + 0x800) >> 12);
                vec[1] = (s32) (((s64) vec[1] * param_2 + 0x800) >> 12);
                vec[2] = (s32) (((s64) vec[2] * param_2 + 0x800) >> 12);
                func_02069668((s32 *) (param_1[2] + iVar4), vec, (s32 *) (param_1[2] + iVar4));
                q = (s32 *) (param_1[2] + iVar4);
                t = q[0];
                if (t <= 0) {
                    t = -t;
                }
                if (t < 41) {
                    q[0] = zero[0];
                }
                t = q[1];
                if (t <= 0) {
                    t = -t;
                }
                if (t < 41) {
                    q[1] = zero[1];
                }
                t = q[2];
                if (t <= 0) {
                    t = -t;
                }
                if (t < 41) {
                    q[2] = zero[2];
                }
            }
            iVar5 = iVar5 + 1;
            iVar4 = iVar4 + 12;
        } while (iVar5 < param_1[0]);
    }
}
