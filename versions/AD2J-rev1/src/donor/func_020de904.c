/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d60dc from projets/nintendogs-shiba-friends/src/donor/func_020d60dc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef struct Six {
    u32 w[6];
} Six;
extern u32 data_021456ac[];
extern void func_020de9d8(void);
extern void func_020dec54(int p);
extern void func_020deba8(int p);
extern void func_020dea4c(int p);
extern void func_02112344(int p, void *f, u32 *v);
extern void func_021122b0(int p, int v);
extern void func_021121c4(int p);
void func_020de904(int param_1) {
    u32 local_28[6];
    s16 sVar;

    sVar = *(s16 *) (param_1 + 0x90);
    switch (sVar) {
        case 0:
            break;
        case 2:
            func_020dec54(param_1);
            return;
        case 3:
            func_020deba8(param_1);
            return;
        case 1:
            func_020dea4c(param_1);
            return;
        case 4:
            *(Six *) local_28 = *(Six *) data_021456ac;
            func_02112344(param_1, (void *) func_020de9d8, local_28);
            return;
        case 5:
            func_021122b0(param_1, 0x1000);
            return;
        case 6:
            break;
        case 7:
            break;
        case 8:
            func_021121c4(param_1);
            break;
    }
}
