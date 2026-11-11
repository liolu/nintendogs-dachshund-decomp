/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02121328 from projets/nintendogs-shiba-friends/src/donor/func_02121328.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
extern int data_02157b60;
extern u32 data_02157b6c[];
extern void func_02071078(int a);
extern void func_02070abc(void);
extern void func_0211e908(void);
void func_02121330(void) {
    int iVar3;

    func_02071078(0xffff);
    func_02070abc();
    iVar3                        = 0;
    *(int *) (data_02157b60 + 4) = 0;
    do {
        data_02157b6c[iVar3] = 0;
        iVar3                = iVar3 + 1;
    } while (iVar3 < 0x10);
    *(int *) (data_02157b60 + 0x10c) = 0;
    *(int *) (data_02157b60 + 0x110) = 0;
    *(int *) (data_02157b60 + 0x124) = 0;
    *(int *) (data_02157b60 + 0x128) = 0;
    func_0211e908();
}
