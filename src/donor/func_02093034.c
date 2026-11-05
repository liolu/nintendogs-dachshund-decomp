/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02093034 from projets/nintendogs-shiba-friends/src/donor/func_02093034.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
extern u8 *data_02153720;
extern int func_02093188(int a, int *b, void *c);
extern void func_020af40c(int a, int b);
extern void func_020ef8bc(int a, int b);
extern void func_020ae8d8(int a);
void func_02093034(int param_1) {
    s16 sVar1;
    int iVar3;
    int local_0;

    sVar1   = *(s16 *) (data_02153720 + 86);
    local_0 = 0;
    if (*(s16 *) (data_02153720 + 88) != -2) {
        return;
    }
    *(s16 *) (data_02153720 + 88) = (s16) param_1;
    *(s16 *) (data_02153720 + 94) = 0;
    if (*(s16 *) (data_02153720 + 88) > 0) {
        iVar3                         = func_02093188(param_1, &local_0, data_02153720 + 96);
        *(s16 *) (data_02153720 + 92) = (s16) iVar3;
        *(s16 *) (data_02153720 + 86) = *(s16 *) (data_02153720 + 86) + *(s16 *) (data_02153720 + 92);
        if (*(s16 *) (data_02153720 + 86) > 0x270f) {
            *(s16 *) (data_02153720 + 86) = 0x270f;
        }
    } else {
        func_02093188(param_1, &local_0, data_02153720 + 96);
    }
    if ((*(u32 *) (data_02153720 + 0x20) & 0x10) == 0) {
        return;
    }
    iVar3 = *(s16 *) (data_02153720 + 86) - sVar1;
    switch (*(s16 *) (data_02153720 + 88) + 1) {
        case 0:
        case 1:
            func_020af40c(3, iVar3);
            func_020ef8bc(8, local_0);
            break;
        case 2:
            func_020af40c(2, iVar3);
            func_020ef8bc(9, iVar3);
            break;
        case 3:
            func_020af40c(1, iVar3);
            func_020ef8bc(10, iVar3);
            break;
    }
    func_020ae8d8(9);
}
