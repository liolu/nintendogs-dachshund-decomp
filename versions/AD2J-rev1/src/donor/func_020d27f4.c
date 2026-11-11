/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d27ec from projets/nintendogs-shiba-friends/src/donor/func_020d27ec.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef struct {
    u32 w[3];
} T3;
extern u32 data_02154c7c;
extern u32 data_02154c80;
extern void func_020d28ec(void);
extern u32 func_0210634c(void);
extern void func_020c45ec(u32 a, void *b, void *c);
extern void func_020ec184(void *a, int b, u32 c, void *d);
extern void func_02084980(u32 a, int b, void *c);
extern void func_02107780(int p);
extern void func_02092ba0(int a);
void func_020d27f4(int param_1) {
    u32 *piVar5;
    u32 aux[3];
    u32 r;

    piVar5 = *(u32 **) (param_1 + 0x214);
    r      = func_0210634c();
    func_020c45ec(r, (void *) (param_1 + 0xbc), aux);
    func_020ec184((void *) (param_1 + 400), 6, *(u32 *) (param_1 + 0x24), aux);
    piVar5[5]               = 1;
    *(u16 *) &data_02154c7c = (u16) * (u32 *) (param_1 + 0x24);
    *(T3 *) &data_02154c80  = *(T3 *) (param_1 + 0xbc);
    switch (piVar5[0]) {
        case 0:
            func_02084980(piVar5[6], 1, (void *) func_020d28ec);
            break;
        case 1:
            func_02084980(piVar5[6], 2, (void *) func_020d28ec);
            break;
        case 2:
            func_02084980(piVar5[6], 0, (void *) func_020d28ec);
            break;
    }
    func_02084980(piVar5[6], 3, (void *) func_020d28ec);
    func_02084980(piVar5[6], 4, (void *) func_020d28ec);
    func_02107780(param_1);
    func_02092ba0(*(s16 *) (param_1 + 0x94));
}
