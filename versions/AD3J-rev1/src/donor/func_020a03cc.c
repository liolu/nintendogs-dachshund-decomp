/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b8700 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b8700.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern u32 data_02154c70;
extern u32 func_02095610(int p);
extern void func_0209565c(int p, int a);
extern void func_02095590(int p, int a);
extern u32 func_020bb394(void);
extern u32 func_02095524(int p);
extern u32 func_02095784(int p);
u16 *func_020a03cc(u16 *param_1) {
    u8 *d;
    u32 r;

    switch (*(s16 *) ((u8 *) param_1 + 46)) {
        case 0:
            return (u16 *) func_02095610((int) param_1);
        case 1:
            d = *(u8 **) &data_02154c70;
            if (*(u32 *) (d + 0xa4) == 0) {
                return param_1;
            }
            switch (*(s16 *) (d + 154)) {
                case 0:
                    *(s16 *) ((u8 *) param_1 + 46)  = 2;
                    *(s16 *) ((u8 *) param_1 + 48)  = 0;
                    *(u16 *) ((u8 *) param_1 + 256) = 1;
                    return (u16 *) ((u8 *) param_1 + 256);
                case 1:
                    func_0209565c((int) param_1, 2);
                    func_02095590((int) param_1, 0);
                    return (u16 *) func_020bb394();
            }
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            r = func_02095524((int) param_1);
            if (r == 0) {
                return (u16 *) r;
            }
            return (u16 *) func_02095784((int) param_1);
    }
}
