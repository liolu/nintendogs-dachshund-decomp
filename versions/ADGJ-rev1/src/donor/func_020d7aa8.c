/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d7aa8 from projets/nintendogs-chihuahua-friends/src/donor/func_020d7aa8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
extern u32 data_02144834[];
extern void func_020d7bcc(void);
extern void func_020d7c40(int p);
extern void func_02112344(int p, void *a, void *b);
extern void func_01ff832c(int a, void *b, void *c, void *d);
typedef struct {
    u32 a[6];
} Arr6;
typedef struct {
    int iStack_40;
    int iStack_3c;
    int iStack_38;
    int iStack_34;
    u32 uStack_30;
    u32 uStack_2c;
    Arr6 local_28;
} Frame;
void func_020d7aa8(int param_1) {
    int iVar1;
    Frame f;

    iVar1 = *(int *) (param_1 + 0x214);
    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            break;
        case 1:
            func_020d7c40(param_1);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            f.local_28 = *(Arr6 *) data_02144834;
            func_02112344(param_1, (void *) func_020d7bcc, &f.local_28);
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
    }
    if ((*(s16 *) (param_1 + 0x90) != 1) && (*(s16 *) (param_1 + 0x90) != 4)) {
        return;
    }
    {
        u32 t0      = *(u32 *) (param_1 + 0xdc);
        u32 t1      = *(u32 *) (param_1 + 0xd8);
        int t2      = *(int *) (param_1 + 0xd4);
        f.iStack_34 = t2;
        f.uStack_30 = t1;
        f.uStack_2c = t0;
    }
    func_01ff832c(0xc03, &f.iStack_34, (void *) (param_1 + 0xbc), &f.iStack_40);
    iVar1                   = *(int *) (iVar1 + 4);
    *(int *) (iVar1 + 0x20) = f.iStack_40 + *(int *) (**(int **) (iVar1 + 0x18) + 4);
    *(int *) (iVar1 + 0x24) = f.iStack_3c + *(int *) (**(int **) (iVar1 + 0x18) + 8);
    *(int *) (iVar1 + 0x28) = f.iStack_38 + *(int *) (**(int **) (iVar1 + 0x18) + 0xc);
}
