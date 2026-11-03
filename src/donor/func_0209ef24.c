/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b7258 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b7258.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u16 vu16;
extern u32 data_02153720;
extern u32 func_0200399c(void);
extern void func_020c99e4(u8 *p, s32 v);
void func_0209ef24(u8 *param_1) {
    s32 iVar4;

    if (*(u16 *) (param_1 + 4) == 0) {
        goto zero_case;
    }
    if (*(u16 *) (4 + param_1) == 0xa00) {
        goto main_case;
    }
    return;
zero_case:
    iVar4 = func_0200399c();
    if (iVar4 != 0) {
        *(u16 *) (param_1 + 4) = 0xa00;
        *(u16 *) (param_1 + 6) = 0;
    }
    return;
main_case:
    if (*(s16 *) ((*(u8 **) &data_02153720) + 0x100) != 2) {
        return;
    }
    *(u16 *) (4 + param_1)   = 1;
    *(u32 *) (param_1 + 0xc) = 1;
    iVar4                    = *(u32 *) (param_1 + 0x1c);
    if (iVar4 != 0) {
        u8 *pp = (*(u8 **) &data_02153720);
        u8 *qb = pp + 0x104;
        u16 a;
        u16 b;
        pp                    = pp + 0x100;
        a                     = *(vu16 *) (pp + 4);
        b                     = *(u16 *) (qb + 2);
        *(u16 *) (iVar4 + 8)  = a;
        *(u16 *) (iVar4 + 10) = b;
        if (*(s16 *) (pp + 4) != -1) {
            func_020c99e4(qb, -1);
            return;
        }
        return;
    }
    return;
}
