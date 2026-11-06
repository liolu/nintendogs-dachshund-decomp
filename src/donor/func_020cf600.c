/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02099de4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02099de4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
extern void func_0206b794(u32 a, s32 b, s32 c);
void func_020cf600(u8 *param_1) {
    s16 sVar1;
    u32 t;

    if ((*(u16 *) (param_1 + 0x78) & 1) != 0) {
        *(vu32 *) 0x04000000 |= 0x800;
        *(vu32 *) 0x04000000 = (*(vu32 *) 0x04000000 & 0xffff1fff) | 0x2000;
        t                    = *(vu16 *) 0x04000048;
        t                    = (t & ~63) | 31;
        t                    = t | 32;
        *(vu16 *) 0x04000048 = t;
        t                    = *(vu16 *) 0x0400004a;
        t                    = (t & ~63) | 23;
        t                    = t | 32;
        *(vu16 *) 0x0400004a = t;
        sVar1                = *(s16 *) (param_1 + 0x92);
        *(vu16 *) 0x04000040 = 0xff;
        *(vu16 *) 0x04000044 = ((-sVar1 << 8) & 0xff00) | 0xc0;
        *(vu32 *) 0x0400001c = 0x01ff0000 & ((s32) * (s16 *) (param_1 + 0x92) << 16);
    }
    if ((*(u16 *) (param_1 + 0x78) & 2) != 0) {
        *(vu32 *) 0x04001000 |= 0x100;
        *(vu32 *) 0x04001000 = (*(vu32 *) 0x04001000 & 0xffff1fff) | 0x2000;
        t                    = *(vu16 *) 0x04001048;
        t                    = (t & ~63) | 31;
        t                    = t | 32;
        *(vu16 *) 0x04001048 = t;
        t                    = *(vu16 *) 0x0400104a;
        t                    = (t & ~63) | 30;
        t                    = t | 32;
        *(vu16 *) 0x0400104a = t;
        sVar1                = *(s16 *) (param_1 + 0x92);
        *(vu16 *) 0x04001040 = 0xff;
        *(vu16 *) 0x04001044 = ((-sVar1 << 8) & 0xff00) | 0xc0;
        *(vu32 *) 0x04001010 = 0x01ff0000 & ((s32) * (s16 *) (param_1 + 0x92) << 16);
    }
    if (*(s16 *) (param_1 + 0x74) != 0) {
        func_0206b794(0x04000050, 0x37, *(s16 *) (param_1 + 0x90));
        return;
    }
    func_0206b794(0x04001050, 0x3e, *(s16 *) (param_1 + 0x90));
}
