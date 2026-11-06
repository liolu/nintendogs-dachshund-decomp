/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02116e70 from projets/nintendogs-chihuahua-friends/src/donor/func_02116e70.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed long long s64;
extern s64 data_021245cc;
extern void func_02069634(int *a, int *b, int *c);
extern void func_02069504(int *a, int *b, int *c);
extern void func_020069bc(int *a, int *b);
void func_02116e70(int *param_1, int *param_2, int *param_3, int *param_4, int *param_5, int *param_6) {
    s64 k;

    func_02069634(param_5, param_4, param_3);
    k = data_021245cc;
    if (((s64) (param_3)[0] * (param_3)[0] + (s64) (param_3)[1] * (param_3)[1] + (s64) (param_3)[2] * (param_3)[2]) >= k) {
        func_020069bc(param_3, param_3);
    }
    func_02069504(param_6, param_3, param_1);
    if (((s64) (param_1)[0] * (param_1)[0] + (s64) (param_1)[1] * (param_1)[1] + (s64) (param_1)[2] * (param_1)[2]) >= k) {
        func_020069bc(param_1, param_1);
    }
    func_02069504(param_3, param_1, param_2);
    if (((s64) (param_2)[0] * (param_2)[0] + (s64) (param_2)[1] * (param_2)[1] + (s64) (param_2)[2] * (param_2)[2]) >= k) {
        func_020069bc(param_2, param_2);
    }
}
