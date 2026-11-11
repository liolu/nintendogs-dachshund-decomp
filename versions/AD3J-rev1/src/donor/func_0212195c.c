/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d84c0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d84c0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern s32 func_02112904(s32 a);
extern void func_02118e54(u8 *p, u32 a, s32 b, u32 c);
extern void func_02108098(s32 *a);
extern void func_02108158(u32 a);
extern void func_02118e48(u8 *p);
void func_0212195c(u8 *param_1) {
    s32 iVar1;
    s32 aiStack_18[3];
    iVar1 = func_02112904(-1);
    if (iVar1 == -1) {
        func_02118e54(param_1, 2, -1, 0);
        return;
    }
    if (*(s32 *) (param_1 + 0x34) != 4) {
        aiStack_18[0] = 0x1000;
        aiStack_18[1] = 0x5000;
        aiStack_18[2] = 0x1000;
        func_02108098(aiStack_18);
        func_02108158(0);
        func_02118e48(param_1);
        func_02118e54(param_1, 4, iVar1, 0);
        return;
    }
}
