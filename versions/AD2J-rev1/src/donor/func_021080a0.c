/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02108098 from projets/nintendogs-shiba-friends/src/donor/func_02108098.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
extern void *data_02156084;
extern void func_02117060(int *a, int *b, int *c, u16 *d, u16 *e);
void func_021080a0(int *param_1) {
    short *psVar1;
    u16 sStack_24;
    u16 local_22;
    int aiStack_20[5];

    psVar1        = (short *) data_02156084;
    aiStack_20[1] = 0;
    aiStack_20[2] = 0;
    aiStack_20[3] = 0;
    func_02117060(param_1, aiStack_20 + 1, aiStack_20, &sStack_24, &local_22);
    *psVar1               = local_22;
    *(int *) (psVar1 + 2) = param_1[1];
    psVar1[4]             = 0;
}
