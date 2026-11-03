/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e83d0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020e83d0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef struct Six {
    u32 w[6];
} Six;
extern u32 data_021456ac[];
extern void func_020de9d0(void);
extern void func_020dec4c(int p);
extern void func_020deba0(int p);
extern void func_020dea44(int p);
extern void func_0211233c(int p, void *f, u32 *v);
extern void func_021122a8(int p, int v);
extern void func_021121bc(int p);
void func_020de8fc(int param_1) {
    u32 local_28[6];
    s16 sVar;

    sVar = *(s16 *) (param_1 + 0x90);
    switch (sVar) {
        case 0:
            break;
        case 2:
            func_020dec4c(param_1);
            return;
        case 3:
            func_020deba0(param_1);
            return;
        case 1:
            func_020dea44(param_1);
            return;
        case 4:
            *(Six *) local_28 = *(Six *) data_021456ac;
            func_0211233c(param_1, (void *) func_020de9d0, local_28);
            return;
        case 5:
            func_021122a8(param_1, 0x1000);
            return;
        case 6:
            break;
        case 7:
            break;
        case 8:
            func_021121bc(param_1);
            break;
    }
}
