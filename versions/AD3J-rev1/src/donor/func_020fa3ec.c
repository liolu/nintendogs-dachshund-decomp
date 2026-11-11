/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e2350 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020e2350.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern u8 data_02155110[];
extern u32 data_02156070;
extern u32 func_020f7a58(void);
u32 func_020fa3ec(void) {
    u32 iVar1;
    u32 uVar2;
    u32 t;
    iVar1 = func_020f7a58();
    if (iVar1 == 0) {
        return 0;
    }
    uVar2 = *(u32 *) (data_02155110 + 0x10);
    if (uVar2 <= 300) {
        goto reset;
    }
    t = (uVar2 * 7) / 10;
    if (*(u32 *) (data_02155110 + 0x14) <= t) {
        goto reset;
    }
    t = (uVar2 * 8) / 100;
    if (*(u32 *) (data_02155110 + 0x18) >= t) {
        goto reset;
    }
    if (data_02156070 < 0xffff) {
        data_02156070 = data_02156070 + 1;
    }
    if (data_02156070 != 4) {
        goto zero;
    }
    return 1;
reset:
    data_02156070 = 0;
zero:
    return 0;
}
