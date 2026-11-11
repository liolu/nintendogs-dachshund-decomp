/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02087504 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02087504.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u32 vu32;
extern u32 func_0208120c(void);
extern void func_02081220(u32 s);
extern u8 func_0208aacc(s32 *p);
extern void func_0208a9ec(s32 *p, s32 v);
extern void func_0208aa50(s32 *p);
u32 func_0208aca8(s32 *param_1, u32 param_2, u32 param_3, s32 param_4) {
    s32 *piVar4;
    s32 *piVar1;
    u32 bVar2;
    u32 uVar3;
    u32 s;

    s     = func_0208120c();
    bVar2 = ((*(volatile s32 *) &param_1[4]) & 2) != 0;
    if (bVar2 != 0) {
        *(vu32 *) &param_1[4];
        bVar2      = func_0208aacc(param_1);
        uVar3      = param_1[4];
        param_1[4] = uVar3 | 0x80;
        piVar1     = (s32 *) param_1[6];
        while (piVar1 != ((void *) 0)) {
            piVar4 = (s32 *) piVar1[1];
            func_0208a9ec(piVar1, 3);
            piVar1 = piVar4;
        }
        param_1[6] = 0;
        if (bVar2 != 0) {
            func_0208aa50(param_1);
        }
        param_1[7]  = 0;
        param_1[8]  = 0;
        param_1[9]  = 0;
        param_1[10] = 0;
        param_1[11] = 0;
        param_1[13] = 0;
        param_1[12] = param_1[13];
        param_1[4]  = param_1[4] & 0xffffff5d;
    }
    func_02081220(s);
    return 1;
}
