/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02106804 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02106804.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02153708[];
extern u8 data_02153794[];
extern u8 *func_01ffda04(s32 a);
extern u8 *func_02028144(u8 *a);
extern void func_020a3928(s32 a, u8 *b);
s32 func_020ad73c(void) {
    u8 *iVar2;
    u8 *iVar3;
    s16 sVar1;
    iVar2 = func_01ffda04((s32) * (s16 *) (*(u8 **) data_02153708 + 0xe));
    iVar2 = func_02028144(iVar2);
    iVar3 = ((void *) 0);
    sVar1 = *(s16 *) (*(u8 **) data_02153708 + 6);
    switch (sVar1) {
        case 0:
            iVar3 = iVar2 + 2000;
            break;
        case 1:
            iVar3 = iVar2 + 0x7d8;
            break;
        case 2:
            iVar3 = iVar2 + 0x7e0;
            break;
    }
    func_020a3928((s32) * (s16 *) (iVar3 + 4), data_02153794);
    return (s32) data_02153794;
}
