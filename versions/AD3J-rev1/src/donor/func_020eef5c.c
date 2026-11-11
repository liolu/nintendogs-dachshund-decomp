/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020eef64 from projets/nintendogs-chihuahua-friends/src/donor/func_020eef64.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
extern s16 data_02132d10[];
extern u8 data_02154cb8[];
extern u8 data_02154dc4[];
extern void func_02073508(int *a, int b);
extern u32 func_020735e0(int *a);
extern void func_020740fc(int a, int *b);
extern void func_020747c4(void *a, int b);
void func_020eef5c(int param_1) {
    u8 *r7;
    u8 *r6;
    int uVar5;
    int *piVar4;
    u32 uVar3;

    r7     = data_02154cb8;
    r6     = data_02154dc4;
    uVar5  = data_02132d10[param_1];
    piVar4 = *(int **) (r7 + 4);
    if (uVar5 != -1) {
        if (*(s16 *) (r7 + 0x16) != -1) {
            func_02073508(piVar4, *(s16 *) (r7 + 0x16));
        }
        uVar3                = func_020735e0(piVar4);
        *(s16 *) (r7 + 0x16) = (s16) uVar3;
        func_020740fc(uVar5, piVar4);
        func_020747c4(r6, uVar5);
        ((int *) r6)[3] = 1;
    }
}
