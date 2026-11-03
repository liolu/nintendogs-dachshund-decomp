/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b91b8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b91b8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02154c70;
extern u32 data_02153708;
extern u32 func_02095610(u8 *p);
extern void func_0209565c(u8 *p, u32 n);
extern void func_02095590(u8 *p, u32 n);
extern void func_02021fe4(void);
extern s32 func_01ffda04(s32 a);
extern void func_020290d8(s32 a, u32 b, u32 c);
extern u32 func_02095524(u8 *p);
extern u32 func_02095784(u8 *p);
u32 func_020a0e6c(u8 *param_1) {
    s32 iVar2;
    u32 bVar1;
    switch (*(s16 *) (param_1 + 0x2e)) {
        case 0:
            bVar1 = func_02095610(param_1);
            return bVar1;
        case 1:
            if (*(u32 *) (*(u8 **) &data_02154c70 + 0xa4) == 0) {
                return (u32) param_1;
            }
            if (*(u16 *) (*(u8 **) &data_02153708) == 0x11) {
                goto eq17;
            }
            func_0209565c(param_1, 2);
            func_02095590(param_1, 0);
            goto done;
        eq17:
            func_0209565c(param_1, 0x12);
            func_02095590(param_1, 2);
            func_02021fe4();
        done:
            iVar2 = func_01ffda04(*(s16 *) (param_1 + 0x112));
            if (iVar2 != 0) {
                func_020290d8(iVar2, 0x58, 1);
            }
            *(s16 *) (param_1 + 0x112) = -1;
            *(s16 *) (param_1 + 0x114) = -1;
            return (u32) (param_1 + 0x100);
        case 2:
            break;
        case 3:
            break;
        case 4:
            bVar1 = func_02095524(param_1);
            if (bVar1 == 0) {
                return bVar1;
            }
            return func_02095784(param_1);
    }
}
