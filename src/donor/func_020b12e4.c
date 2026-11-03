/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210aa30 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0210aa30.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
extern int *data_02153700;
extern int *data_02153740;
extern void func_020ab49c(int a);
extern void func_020ab48c(void);
extern void func_020b8b0c(int a, int b, int c);
extern void func_020b1108(int a);
extern void func_020b10cc(void);
void func_020b12e4(int *param_1) {
    int iVar1;
    int iVar2;

    iVar1 = *param_1;
    iVar2 = *(s16 *) (*(int *) ((u8 *) data_02153700 + 4) + 8) + 0x3b;
    switch ((u16) (iVar2 / 60)) {
        case 3:
            *param_1 = 1;
            if (*param_1 != iVar1) {
                func_020ab49c(3);
            }
            break;
        case 2:
            *param_1 = 2;
            if (*param_1 != iVar1) {
                func_020ab49c(2);
            }
            break;
        case 1:
            *param_1 = 3;
            if (*param_1 != iVar1) {
                func_020ab49c(1);
            }
            break;
        case 0:
            if (param_1[1] >= 0x1e) {
                goto set5;
            }
            if (*(s32 *) ((u8 *) data_02153740 + 0xa8) != 7) {
                goto inc;
            }
        set5:
            *param_1 = 5;
            break;
        inc:
            param_1[1] = param_1[1] + 1;
            *param_1   = 4;
            if (*param_1 != iVar1) {
                func_020ab48c();
            }
            break;
    }
    func_020b8b0c(0, 2, *param_1 == 1);
    func_020b8b0c(0, 1, *param_1 == 2);
    func_020b8b0c(0, 0, *param_1 == 3);
    func_020b8b0c(0, 3, *param_1 == 4);
    func_020b8b0c(0, 4, 0);
    if (*param_1 != 5) {
        return;
    }
    iVar1 = *(s32 *) ((u8 *) data_02153740 + 0xa8);
    switch (iVar1) {
        case 5:
            func_020b1108(2);
            return;
        case 6:
            func_020b1108(9);
            return;
        case 7:
            func_020b1108(0xb);
            return;
        default:
            func_020b10cc();
            return;
    }
}
