/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020070c0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020070c0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef struct Four {
    u32 w[4];
} Four;
typedef struct Three {
    u32 w[3];
} Three;
extern u32 *data_0214b150;
extern u32 *func_02003844(int *p, int n);
extern void func_02001878(void);
extern int func_020017ec(s16 *p);
extern void func_020016e8(s16 *p);
extern void func_0200150c(int a, int b);
extern void func_02001154(int a);
extern void func_02001140(int a);
extern int func_0206ee48(u32 *a, u32 *b);
u32 *func_0200704c(int *param_1) {
    u32 *puVar2;
    int iVar3;
    s16 asStack_18[6];

    puVar2 = func_02003844(param_1, 0x44);
    func_02001878();
    iVar3 = func_020017ec(asStack_18);
    if (iVar3 != 0) {
        func_020016e8(asStack_18);
    }
    func_0200150c(3, 0x1e);
    func_02001154(8);
    func_02001140(8);
    puVar2[0] = 0;
    puVar2[1] = 1;
    puVar2[2] = 1;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    do {
        iVar3 = func_0206ee48(puVar2, puVar2 + 4);
    } while (iVar3 != 0);
    *(Four *) (puVar2 + 7)        = *(Four *) puVar2;
    *(Three *) (puVar2 + 11)      = *(Three *) (puVar2 + 4);
    puVar2[14]                    = 0;
    *(s16 *) (puVar2 + 15)        = 0;
    *(s16 *) ((u8 *) puVar2 + 62) = 0;
    *(s16 *) (puVar2 + 16)        = 0;
    *(s16 *) ((u8 *) puVar2 + 66) = 3;
    data_0214b150                 = puVar2;
    return puVar2;
}
