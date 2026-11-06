/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02113658 from projets/nintendogs-chihuahua-friends/src/donor/func_02113658.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    s32 v[3];
} T3;
typedef struct {
    s32 u30;
    s32 i2c;
    s32 i28;
    s32 arr[4];
    s32 c1;
    s32 c2;
    s32 pad;
} Frm;
extern s64 data_021245cc;
extern int data_02148ee8;
extern int data_02148ee4;
extern int data_02148ee0;
extern int data_02148edc;
extern void func_020069bc(int *a, int *b);
extern void func_01ff832c(int a, int *b, int *c, int *d);
void func_02113658(int *param_1, int param_2) {
    Frm F;
    s64 lVar1;
    s32 n, m, k;

    if (param_2 != 0) {
        *(T3 *) (F.arr + 3) = *(T3 *) (param_2 + 0xbc);
        n                   = *(s32 *) (param_2 + 0xe4);
        m                   = *(s32 *) (param_2 + 0xe8);
        k                   = *(s32 *) (param_2 + 0xe0);
        F.u30               = k;
        F.i2c               = n;
        F.i28               = m;
        F.arr[0]            = 0;
        F.arr[1]            = 0x1000;
        F.arr[2]            = 0;
        if (0 < n) {
            F.i2c = n / 2;
            lVar1 = (s64) F.i28 * F.i28 + ((s64) F.u30 * F.u30 + (s64) F.i2c * F.i2c);
            if (lVar1 >= data_021245cc) {
                func_020069bc(&F.u30, &F.u30);
            }
        }
        func_01ff832c(data_02148ee8, &F.u30, &F.arr[3], param_1);
        func_01ff832c(data_02148ee4, F.arr, param_1, param_1);
        func_01ff832c(data_02148ee0, &F.u30, &F.arr[3], param_1 + 3);
        param_1[6] = 0;
        param_1[7] = 0x1000;
        param_1[8] = 0;
        param_1[9] = data_02148edc;
    }
}
