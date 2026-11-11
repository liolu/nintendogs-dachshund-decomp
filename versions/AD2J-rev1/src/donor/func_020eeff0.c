/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a0258 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a0258.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02154cb8;
extern u32 data_02154dc4;
extern void func_02073508(u32 a, s32 b);
extern u16 func_020735e0(u32 a);
extern void func_020740fc(u32 a, u32 b);
extern void func_020747c4(u8 *a, u32 b);
void func_020eeff0(u32 param_1) {
    u8 *obj;
    u8 *piVar2;
    u32 piVar4;

    obj    = (u8 *) &data_02154cb8;
    piVar2 = (u8 *) &data_02154dc4;
    piVar4 = *(u32 *) (obj + 4);
    if (param_1 == 0xffffffff) {
        return;
    }
    if (*(s16 *) (obj + 22) != -1) {
        func_02073508(piVar4, *(s16 *) (obj + 22));
    }
    *(u16 *) (obj + 22) = func_020735e0(piVar4);
    func_020740fc(param_1, piVar4);
    func_020747c4(piVar2, param_1);
    *(u32 *) (piVar2 + 12) = 1;
}
