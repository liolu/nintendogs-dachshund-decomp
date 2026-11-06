/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020999e0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020999e0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
extern void func_0206b74c(int a, int b);
void func_020cf1fc(int param_1) {
    s32 w;
    if ((*(u16 *) (param_1 + 0x78) & 1) != 0) {
        w                    = 0xc0 - *(s16 *) (param_1 + 0x92);
        *(vu16 *) 0x04000040 = 0xff;
        *(vu16 *) 0x04000044 = w & 0xff;
        *(vu32 *) 0x0400001c = 0x01ff0000 & ((u32) * (s16 *) (param_1 + 0x92) << 16);
    }
    if ((*(u16 *) (param_1 + 0x78) & 2) != 0) {
        w                    = 0xc0 - *(s16 *) (param_1 + 0x92);
        *(vu16 *) 0x04001040 = 0xff;
        *(vu16 *) 0x04001044 = w & 0xff;
        *(vu32 *) 0x04001010 = 0x01ff0000 & ((u32) * (s16 *) (param_1 + 0x92) << 16);
    }
    if (*(s16 *) (param_1 + 0x74) != 0) {
        func_0206b74c(0x04000050, (int) *(s16 *) (param_1 + 0x90));
        return;
    }
    func_0206b74c(0x04001050, (int) *(s16 *) (param_1 + 0x90));
}
