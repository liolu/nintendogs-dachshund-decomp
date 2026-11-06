/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211195c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0211195c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
extern u32 data_02153740;
extern void func_0206e080(u32 a, void *b, s32 c);
extern void func_0206dfd4(u32 a, void *b, s32 c);
extern void func_020a3804(void *a, s32 b, s32 c);
extern void func_0207d0e0(s32 a, s32 b, void *c, s32 d);
extern void func_020b9550(s32 a, void *b, s32 c, s32 d);
extern void func_020b9520(s32 a, void *b, s32 c, s32 d);
extern void func_020a3a70(s32 a, s32 b, s32 c);
extern void func_02007598(s32 a, s32 b, s32 c);
extern void func_02007580(s32 a, s32 b, s32 c);
void func_020b7d00(u8 *param_1) {
    s32 iVar1;
    s32 iVar2;
    u8 *O;

    O = *(u8 **) &data_02153740;
    switch (*(s32 *) (param_1 + 4)) {
        case 1:
            func_0206e080(0x06204000, param_1 + 0x818, 0x4000);
            func_0206e080(0x06203000, param_1 + 20, 0x800);
            func_0206dfd4(0x05000400, param_1 + 0x481c, 0xe0);
            *(vu16 *) 0x0400100e = (*(vu16 *) 0x0400100e & 0x43) | 0x708;
            func_020a3804(param_1 + 20, 0x400, 7);
            func_0207d0e0(31, 0xe0, param_1 + 0x481c, 0xe0);
            func_020b9550(3, param_1 + 0x818, 0, 0x4000);
            func_020b9520(3, param_1 + 20, 0, 0x800);
            break;
        case 2:
            func_020a3a70(2, 8, 1);
            func_02007598(*(s16 *) (param_1 + 8), *(s16 *) (param_1 + 10), *(s16 *) (param_1 + 12));
            *(s32 *) param_1 = 1;
            break;
        case 3:
            func_020a3a70(2, 8, 1);
            func_02007580(*(s16 *) (param_1 + 8), *(s16 *) (param_1 + 10), *(s16 *) (param_1 + 12));
            *(s32 *) param_1 = 2;
            break;
        case 4:
            func_020a3a70(2, 8, 0);
            *(vu32 *) 0x04001000 = *(vu32 *) 0x04001000 & 0xffff1fff;
            *(s32 *) param_1     = 0;
            break;
        case 0:
        default:
            iVar2 = *(s32 *) (O + 0xa8);
            if (iVar2 != 1) {
                iVar1 = *(s32 *) (O + 0xb8);
                if (iVar1 != 10 && iVar1 != 3 && iVar1 != 0x2a && iVar2 != 11 && *(s32 *) param_1 == 0) {
                    func_020a3a70(2, 8, 0);
                }
            }
            break;
    }
    *(s32 *) (param_1 + 4) = 0;
}
