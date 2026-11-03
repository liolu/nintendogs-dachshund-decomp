/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b9858 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b9858.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u8 *data_02153720;
void func_020a150c(u16 param_1, u16 param_2) {
    u8 *p                     = data_02153720;
    u32 off                   = 0x10e;
    u8 *r                     = p + off;
    *(u16 *) (p + 0x100 + 14) = param_1;
    *(u16 *) (r + 2)          = param_2;
}
