/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020fbd00 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020fbd00.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern void func_02107c9c(u8 *p, u32 v);
extern void *func_02003844(s32 *p, u32 n);
extern void func_020e943c(void);
extern void func_020e93d8(void);
extern void func_020e9534(void);
extern u8 data_0212ff4c;
void func_020e9538(u8 *param_1, s32 *param_2) {
    u32 *p;
    u32 uVar2;

    func_02107c9c(param_1, 0x74);
    *(void **) (param_1 + 0x1f4) = (void *) func_020e943c;
    *(void **) (param_1 + 0x1f8) = (void *) func_020e93d8;
    *(void **) (param_1 + 0x1f0) = (void *) func_020e9534;
    *(void **) (param_1 + 0x214) = func_02003844(param_2, 4);
    p                            = *(u32 **) (param_1 + 0x214);
    if (p != ((void *) 0)) {
        *p = 0;
    }
    *(u32 *) (param_1 + 0xac)  = 1200;
    uVar2                      = *(u32 *) (&data_0212ff4c + 8);
    *(u32 *) (param_1 + 0xf8)  = uVar2;
    *(u32 *) (param_1 + 0x120) = uVar2;
    *(u32 *) (param_1 + 0x128) = uVar2;
    *(u32 *) (param_1 + 0x12c) = 1;
}
