/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02046094 from projets/nintendogs-shiba-friends/src/donor/func_02046094.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_0214b484;
extern void func_0203e2b8(u8 *p, u32 a);
u32 func_02046094(u8 *param_1) {
    u32 *P;
    u32 uVar1;

    P     = *(u32 **) &data_0214b484;
    uVar1 = *P * 0x10dcd + 1;
    *P    = uVar1;
    switch ((u16) ((((u32) (u16) uVar1) * 20u) >> 16)) {
        case 0:
            func_0203e2b8(param_1, 0x2e8);
            return 1;
        case 1:
            func_0203e2b8(param_1, 0x2e9);
            return 1;
        case 2:
            func_0203e2b8(param_1, 0x2ee);
            return 1;
        case 3:
            func_0203e2b8(param_1, 0x2ef);
            return 1;
        case 4:
            func_0203e2b8(param_1, 0x2f0);
            return 1;
        case 5:
            func_0203e2b8(param_1, 0x2f1);
            return 1;
        case 6:
            func_0203e2b8(param_1, 0x2f2);
            return 1;
        case 7:
            func_0203e2b8(param_1, 0x2f3);
            return 1;
        case 8:
            func_0203e2b8(param_1, 0x2f4);
            return 1;
        default:
            return 0;
    }
}
