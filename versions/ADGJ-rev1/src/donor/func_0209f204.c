/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209f204 from projets/nintendogs-chihuahua-friends/src/donor/func_0209f204.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern int *data_02154c70;
extern s32 func_02095610(int a);
extern void func_0209565c(int a, int b);
extern void func_02095590(int a, int b);
extern void func_020cd3d8(int a, int b, int c, int d, int e);
extern s32 func_02095524(int a);
extern void func_02095784(int a);
extern void func_0209f340(void);
void func_0209f204(int param_1) {
    s16 sVar1;
    int *piVar2;

    switch (*(s16 *) ((u32) param_1 + 0x2e)) {
        case 0:
            if (func_02095610(param_1) == 0) {
                return;
            }
            func_020cd3d8(9, 0x2711, 0, (int) func_0209f340, 0);
            return;
        case 1:
            piVar2 = data_02154c70;
            if (*(s32 *) ((u8 *) piVar2 + 0xa4) == 0) {
                return;
            }
            sVar1 = *(s16 *) ((u8 *) piVar2 + 0x9a);
            if (sVar1 == 0) {
                goto zero_case;
            }
            if (sVar1 == 1) {
                goto one_case;
            }
            return;
        zero_case:
            func_0209565c(param_1, 0x24);
            func_02095590(param_1, 2);
            func_020cd3d8(9, 0x2712, 0, 0, 1);
            return;
        one_case:
            *(s16 *) (param_1 + 0x2e)  = 2;
            *(s16 *) (param_1 + 0x30)  = 0;
            *(s16 *) (param_1 + 0x100) = 2;
            return;
        case 4:
            if (func_02095524(param_1) == 0) {
                return;
            }
            func_02095784(param_1);
            break;
        case 2:
        case 3:
        default:
            break;
    }
}
