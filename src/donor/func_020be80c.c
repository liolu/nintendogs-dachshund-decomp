/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02118520 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02118520.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02153894;
extern void func_020be13c(u8 *p);
extern void func_020ab1b8(void);
extern void func_020ab1a8(void);
extern void func_020ab198(void);
extern void func_020ab148(u32 a);
void func_020be80c(u8 *param_1) {
    s32 iVar3;
    u8 *q;
    s32 iVar2;
    u8 *piVar1;

    iVar3  = 0;
    q      = param_1 + 372;
    iVar2  = 0;
    piVar1 = param_1 + 0xa8;
    do {
        if (*(s32 *) (param_1 + 4) == iVar2) {
            func_020be13c(piVar1);
            switch (iVar3) {
                case 0:
                    func_020ab1b8();
                    break;
                case 1:
                    func_020ab1a8();
                    break;
                case 2:
                    func_020ab198();
                    break;
            }
        }
        iVar3  = iVar3 + 1;
        iVar2  = iVar2 + 0x28;
        piVar1 = piVar1 + 32;
    } while (iVar3 < 3);
    if (*(s32 *) (param_1 + 4) == 0x8c) {
        func_020be13c(param_1 + 0x108);
        func_020ab148(*(u32 *) (q + 0xc) / 100u);
    }
    *(s32 *) (param_1 + 4) = *(s32 *) (param_1 + 4) + 1;
    if (*(s32 *) (param_1 + 4) > 0xbe) {
        *(s32 *) (*(u8 **) &data_02153894 + 0x198) = 1;
    }
}
