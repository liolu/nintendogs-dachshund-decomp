/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206e3f8 from projets/children-of-mana/src/auto/func_0206e3f8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef volatile u32 vu32;
extern u8 data_02150594[];
extern void func_0206dff0(u32 a, u32 *b, u32 c);
extern void func_02077ec0(u32 *p, u32 n);
extern void func_02077f38(u32 *a, u32 *b);
void func_02077dc4(u32 *param_1) {
    vu32 z0;
    vu32 z1;
    vu32 z2;
    u32 auStack_194[99];
    if ((param_1[0] & 0x10) == 0x10) {
        z0 = 0;
        func_0206dff0(z0, param_1 + 15, 8);
        z1 = 0;
        func_0206dff0(z1, param_1 + 17, 8);
        z2 = 0;
        func_0206dff0(z2, param_1 + 19, 8);
        if (param_1[2] != 0) {
            func_02077ec0(param_1 + 15, param_1[2]);
        }
        if (param_1[4] != 0) {
            func_02077ec0(param_1 + 17, param_1[4]);
        }
        if (param_1[6] != 0) {
            func_02077ec0(param_1 + 19, param_1[6]);
        }
        param_1[0] = param_1[0] & 0xffffffef;
    }
    if (*(u32 **) data_02150594 != ((void *) 0)) {
        func_02077f38(*(u32 **) data_02150594, param_1);
        return;
    }
    *(u32 **) data_02150594 = auStack_194;
    func_02077f38(auStack_194, param_1);
    *(u32 **) data_02150594 = ((void *) 0);
}
