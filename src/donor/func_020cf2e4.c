/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cf2e4 from projets/nintendogs-chihuahua-friends/src/donor/func_020cf2e4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
extern void func_0206b74c(int a, int b);
void func_020cf2e4(int param_1) {
    if (*(u16 *) (param_1 + 0x78) & 1) {
        *(vu32 *) 0x04000000 = (*(vu32 *) 0x04000000 & 0xffff1fff) | 0x2000;
        {
            u32 t                = (*(vu16 *) 0x04000048 & ~63) | 31;
            *(vu16 *) 0x04000048 = (u16) (t | 32);
        }
        {
            u32 t                = (*(vu16 *) 0x0400004a & ~63) | 23;
            *(vu16 *) 0x0400004a = (u16) (t | 32);
        }
        *(vu16 *) 0x04000040 = 255;
        *(vu16 *) 0x04000044 = 191;
        *(vu32 *) 0x0400001c = 0x01ff0000 & ((s32) * (s16 *) (param_1 + 0x92) << 16);
    }
    if (*(u16 *) (param_1 + 0x78) & 2) {
        *(vu32 *) 0x04001000 = (*(vu32 *) 0x04001000 & 0xffff1fff) | 0x2000;
        {
            u32 t                = (*(vu16 *) 0x04001048 & ~63) | 31;
            *(vu16 *) 0x04001048 = (u16) (t | 32);
        }
        {
            u32 t                = (*(vu16 *) 0x0400104a & ~63) | 30;
            *(vu16 *) 0x0400104a = (u16) (t | 32);
        }
        *(vu16 *) 0x04001040 = 255;
        *(vu16 *) 0x04001044 = 191;
        *(vu32 *) 0x04001010 = 0x01ff0000 & ((s32) * (s16 *) (param_1 + 0x92) << 16);
    }
    if (*(s16 *) (param_1 + 0x74) != 0) {
        func_0206b74c(0x04000050, (s32) * (s16 *) (param_1 + 0x90));
        return;
    }
    func_0206b74c(0x04001050, (s32) * (s16 *) (param_1 + 0x90));
}
