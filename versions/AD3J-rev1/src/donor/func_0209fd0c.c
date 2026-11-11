/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b8040 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b8040.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154c70;
extern void func_0209fe40(void);
extern s32 func_02095610(u8 *p);
extern void func_020cd3d0(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020e973c(void);
extern void func_0209565c(u8 *p, u32 a);
extern void func_02095590(u8 *p, u32 a);
extern void func_020e9708(void);
extern s32 func_02095524(u8 *p);
extern void func_02095784(u8 *p);
void func_0209fd0c(u8 *param_1) {
    s32 bVar1;

    switch (*(s16 *) (param_1 + 0x2e)) {
        case 0:
            bVar1 = func_02095610(param_1);
            if (bVar1 != 0) {
                *(u16 *) (param_1 + 0x2a) = 0;
            }
            return;
        case 1:
            if (*(s16 *) (param_1 + 0x2a) == 0) {
                goto LAB_zero;
            }
            if (*(s16 *) (param_1 + 0x2a) == 1) {
                goto LAB_one;
            }
            return;
        LAB_zero:
            if (*(s32 *) (data_02154c70 + 0xa4) == 0) {
                return;
            }
            *(u16 *) (param_1 + 0x2a) = 1;
            func_020cd3d0(2, 0xcfc, 0, (u32) func_0209fe40, 0);
            func_020e973c();
            return;
        LAB_one:
            if (*(s32 *) (data_02154c70 + 0xa4) == 0) {
                return;
            }
            func_0209565c(param_1, 2);
            func_02095590(param_1, 0);
            func_020e9708();
            return;
        case 2:
            break;
        case 3:
            break;
        case 4:
            bVar1 = func_02095524(param_1);
            if (!bVar1) {
                return;
            }
            *(u16 *) (param_1 + 0x2a) = 0;
            func_02095784(param_1);
    }
    return;
}
