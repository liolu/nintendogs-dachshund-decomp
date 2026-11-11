/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b9740 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b9740.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern u8 *data_02153708;
extern u8 *data_02154c70;
extern void func_020a1534(void);
extern u32 func_02095610(u8 *p);
extern void func_020cd3d0(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_0209565c(u8 *p, u32 a);
extern void func_02095590(u8 *p, u32 a);
extern u32 func_02095524(u8 *p);
extern void func_02095784(u8 *p);
void func_020a13f4(u8 *param_1) {
    switch (*(s16 *) (param_1 + 0x2e)) {
        case 0:
            if (func_02095610(param_1) == 0) {
                return;
            }
            if (*(u16 *) data_02153708 == 0x11) {
                func_020cd3d0(2, 0xc53, 0, (u32) func_020a1534, 0);
                return;
            }
            func_020cd3d0(2, 0xc1d, 0, (u32) func_020a1534, 0);
            return;
        case 1:
            if (*(int *) (data_02154c70 + 0xa4) == 0) {
                return;
            }
            func_0209565c(param_1, 0x16);
            func_02095590(param_1, 0);
            return;
        case 2:
        case 3:
            break;
        case 4:
            if (func_02095524(param_1) == 0) {
                return;
            }
            func_02095784(param_1);
            return;
    }
}
