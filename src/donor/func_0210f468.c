/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210f468 from projets/nintendogs-chihuahua-friends/src/donor/func_0210f468.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
extern u8 data_02150330[];
extern void func_021077f0(int p);
extern void func_02044644(s16 a);
extern void func_0210843c(int p, int *a, int b);
extern void func_01ff832c(int a, int *b, int *c, int *d);
extern void func_02069634(int *a, int *b, int *c);
void func_0210f468(int param_1) {
    int *piVar4;
    int iVar3;
    int *piVar2;
    int t58;
    int t4c;
    int t64;
    int aiStack_48[3];
    int local_3c[3];
    int aiStack_30[3];

    piVar4 = *(int **) (param_1 + 0x214);
    func_021077f0(param_1);
    *(u16 *) (param_1 + 0x20) = *(u16 *) (param_1 + 0x20) | 0x10;
    func_02044644(*(s16 *) (param_1 + 0x9c));
    func_0210843c(param_1, aiStack_48, 0x1a000);
    t58         = *(int *) (data_02150330 + 0x58);
    t4c         = *(int *) (data_02150330 + 0x4c);
    local_3c[1] = t58;
    t64         = *(int *) (data_02150330 + 0x64);
    local_3c[0] = t4c;
    local_3c[2] = t64;
    func_01ff832c(0x3000, local_3c, aiStack_48, local_3c);
    iVar3       = 0;
    local_3c[1] = 0;
    piVar2      = piVar4;
    do {
        func_02069634(local_3c, aiStack_48, aiStack_30);
        func_01ff832c((iVar3 << 12) / 11, aiStack_30, aiStack_48, piVar2);
        piVar2[0x21] = 0;
        piVar2[0x22] = 0;
        piVar2[0x23] = 0;
        piVar2       = piVar2 + 3;
        iVar3        = (iVar3 + 1) * 0x10000 >> 0x10;
    } while (iVar3 < 0xb);
    piVar4[0x42] = 0;
}
