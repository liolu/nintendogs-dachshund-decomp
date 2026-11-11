/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c38c0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c38c0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02148cac;
extern void func_021077d8(u8 *p);
extern void func_021077e8(u8 *p);
extern void func_02108354(u8 *p, u8 *q);
extern void func_0210d780(u8 *p);
void func_0210d6d0(u8 *param_1) {
    s32 iVar2;

    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            func_021077d8(param_1);
            return;
        case 1:
            break;
        case 2:
            iVar2 = *(s32 *) (param_1 + 0x214);
            func_021077e8(param_1);
            *(u32 *) (iVar2 + 0xc) = data_02148cac;
            return;
        case 3:
            iVar2 = *(s32 *) (param_1 + 0x214);
            func_02108354(param_1, param_1 + 200);
            *(u32 *) (param_1 + 0xa8) = 0;
            *(u32 *) (iVar2 + 0xc)    = data_02148cac;
            return;
        case 4:
            func_0210d780(param_1);
            break;
        case 5:
        case 6:
        case 7:
        case 8:
            break;
    }
}
