/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d1b2c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d1b2c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u16 data_0214affc[];
extern int *data_02153720;
extern void func_02108158(int a);
extern s32 func_02112904(int a);
extern void func_020f07b4(int a);
extern void func_02118e54(int a, int b, int c, int d);
extern void func_02118e2c(int a);
extern s32 func_02106e88(int a);
extern s32 func_02106910(void);
void func_0211afb0(int param_1) {
    int *piVar3;
    int iVar1;
    u32 uVar2;

    piVar3 = (int *) (param_1 + 0x60);
    func_02108158(0);
    if ((u16) (data_0214affc[0] & 0xc03) != 0) {
        iVar1 = *(s32 *) (param_1 + 0x34);
        switch (iVar1) {
            case 2:
            case 3:
                iVar1 = func_02112904(-1);
                if (iVar1 != -1) {
                    func_020f07b4(0x4f);
                    func_02118e54(param_1, 4, iVar1, 0);
                    func_02118e2c(param_1);
                }
                break;
            case 4:
                iVar1 = func_02112904(*(s16 *) (param_1 + 0x3e));
                if (iVar1 == -1) {
                    func_020f07b4(0x50);
                    iVar1 = func_02106e88(*(s16 *) ((u8 *) data_02153720 + 0x7c));
                    if (iVar1 == 0) {
                        goto chk;
                    }
                    if (iVar1 != 1) {
                        goto no3;
                    }
                chk:
                    if (func_02106910() != 0) {
                        uVar2 = 3;
                    } else {
                    no3:
                        uVar2 = 2;
                    }
                    func_02118e54(param_1, uVar2, -1, 0);
                    func_02118e2c(param_1);
                } else {
                    func_020f07b4(0x4f);
                    func_02118e54(param_1, 4, iVar1, 0);
                    func_02118e2c(param_1);
                }
                break;
        }
    }
    if ((((u16) (data_0214affc[0] & 0x2fff) != 0) || (*(s32 *) ((u8 *) data_02153720 + 0x34) != -1)) ||
        (*(s16 *) (param_1 + 0x3e) != -1)) {
        *piVar3 = 0x4b0;
    }
    *piVar3 = *piVar3 - 1;
    if (*piVar3 <= 0) {
        u8 *qb            = (u8 *) param_1 + 96;
        *(s32 *) (qb + 8) = 1;
        *(s16 *) (qb + 4) = 0;
    }
}
