/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211bb74 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0211bb74.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern u8 data_0213d4d0[];
extern void func_020b53f4(void);
extern int func_020cac9c(void);
extern u16 *func_020cac40(int idx);
typedef struct {
    u32 w[8];
} Q8;
int func_020fb17c(u32 *param_1, int param_2, int param_3) {
    int k;
    int j;
    u8 *tbl;
    u16 *e;
    int b;
    int a;
    u32 *dst;
    int count;
    int zero;
    int n;
    int c;
    u32 m;

    tbl   = data_0213d4d0;
    count = 0;
    func_020b53f4();
    if (*(s16 *) (tbl + 4) != -1) {
        zero = 0;
        (void) &zero;
        m   = 0xffff;
        dst = param_1;
        do {
            j = zero;
            if (param_3 == 4) {
                k = j;
                n = func_020cac9c();
                if (n > 0) {
                    do {
                        e = (u16 *) zero;
                        a = -1;
                        b = (int) e;
                        do {
                            a = (s16) (a + 1);
                            while (a < 3 && *func_020cac40(a) == m) {
                                a = (s16) (a + 1);
                            }
                            c = b;
                            b = (s16) (b + 1);
                        } while (c < k);
                        if (a >= 3) {
                            a = -1;
                        }
                        if (a >= 0) {
                            e = func_020cac40(a);
                        }
                        k = k + 1;
                        if (*(s16 *) (tbl + 2) == *(s16 *) ((u8 *) e + 6)) {
                            j = j + 1;
                        }
                        n = func_020cac9c();
                    } while (k < n);
                }
            }
            if (*(s16 *) (tbl + 4) == param_3 && (int) *(u16 *) (tbl + 12) > j && *(u16 *) (tbl + 20) != 0x80) {
                *(Q8 *) dst = *(Q8 *) tbl;
                dst         = dst + 8;
                count       = count + 1;
            }
            tbl = tbl + 32;
        } while (*(s16 *) (tbl + 4) != -1);
    }
    return count;
}
