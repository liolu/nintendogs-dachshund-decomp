/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209dfe4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209dfe4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_02154dd8;
extern u32 data_02154de0;
extern void func_0207472c(u32, u32, u32);
void func_020ecdb4(void) {
    u8 *g   = (u8 *) &data_02154dd8;
    u32 arg = (u32) &data_02154de0;
    if (*(u32 *) (g + 0x44) == 0) {
        func_0207472c(arg, 0x30, 7);
        *(u32 *) (g + 0x40) = 0;
        *(u32 *) (g + 0x44) = 1;
        *(u32 *) (g + 0x4c) = 0;
        *(u16 *) (g + 0x38) = 0;
    }
    *(u32 *) (g + 0x48) = 1;
}
