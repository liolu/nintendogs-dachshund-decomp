/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02081bf4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02081bf4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern void func_02085458(u8 *p);
extern void func_0208551c(u8 *p);
typedef struct {
    u32 lo : 21;
    u32 a : 1;
    u32 b : 1;
    u32 hi : 9;
} BF;
void func_020853dc(u8 *param_1) {
    u8 *x;
    BF **y;
    BF *z;
    x = *(u8 **) (param_1 + 0x34);
    y = *(BF ***) (x + 0x18);
    z = *y;
    if (z->a != 0) {
        func_02085458(param_1);
        if (z->b == 0) {
            func_0208551c(param_1);
        }
        return;
    }
    if (z->b == 0) {
        func_0208551c(param_1);
    }
    func_02085458(param_1);
}
