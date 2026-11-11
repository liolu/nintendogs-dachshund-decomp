/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b38a0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b38a0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
extern u32 data_02153708;
extern u32 data_0213bd44;
extern int func_01ffda04(int a);
extern int func_02028144(int a);
extern int func_020280c8(int a);
extern int func_020c55c4(int a, u32 b);
int func_0209b60c(int param_1, u32 param_2) {
    int iVar3 = (int) &data_0213bd44;
    int iVar2 = func_01ffda04((int) *(s16 *) (*(int *) &data_02153708 + 14));
    if (param_1 == 0x30002) {
        goto caseA;
    }
    if (param_1 != 0x30005) {
        goto done;
    }
    goto caseB;
caseA:
    iVar3 = func_02028144(iVar2) + 0x78;
    goto done;
caseB:
    if (iVar2 == 0) {
        goto done;
    }
    iVar3 = func_020c55c4(func_020280c8(iVar2), param_2);
done:
    return iVar3;
}
