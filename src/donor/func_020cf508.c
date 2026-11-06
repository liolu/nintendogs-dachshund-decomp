/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02099cec from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02099cec.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
extern void func_0206b74c(u32 reg, s32 v);
void func_020cf508(u8 *param_1) {
    s16 sVar1;
    if ((*(u16 *) (param_1 + 0x78) & 1) != 0) {
        sVar1                = *(s16 *) (param_1 + 0x92);
        *(vu16 *) 0x04000040 = 255;
        *(vu16 *) 0x04000044 = ((u32) (-sVar1 << 8) & 0xff00) | 0xbf;
        *(vu32 *) 0x0400001c = 0x01ff0000 & ((s32) * (s16 *) (param_1 + 0x92) << 16);
    }
    if ((*(u16 *) (param_1 + 0x78) & 2) != 0) {
        sVar1                = *(s16 *) (param_1 + 0x92);
        *(vu16 *) 0x04001040 = 255;
        *(vu16 *) 0x04001044 = ((u32) (-sVar1 << 8) & 0xff00) | 0xc0;
        *(vu32 *) 0x04001010 = 0x01ff0000 & ((s32) * (s16 *) (param_1 + 0x92) << 16);
    }
    if (*(s16 *) (param_1 + 0x74) != 0) {
        func_0206b74c(0x04000050, (s32) * (s16 *) (param_1 + 0x90));
        return;
    }
    func_0206b74c(0x04001050, (s32) * (s16 *) (param_1 + 0x90));
}
