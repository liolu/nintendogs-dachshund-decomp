/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020056a0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020056a0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct {
    u16 w[20];
} T40;
extern void func_020056b4(u8 *p, u32 v);
void func_0200562c(u16 *param_1, u16 *param_2) {
    *(T40 *) param_1                 = *(T40 *) param_2;
    *(u32 *) ((u8 *) param_1 + 0x28) = 0;
    func_020056b4((u8 *) param_1 + 0x2c, param_2[4]);
    func_020056b4((u8 *) param_1 + 0x78, param_2[6]);
    *(u32 *) ((u8 *) param_1 + 0x74) = 0;
    *(u32 *) ((u8 *) param_1 + 0xc4) = 0;
    *(u32 *) ((u8 *) param_1 + 0xc8) = 0;
    *(u32 *) ((u8 *) param_1 + 0xcc) = 0;
    *(u32 *) ((u8 *) param_1 + 0xd0) = 0;
    *(u32 *) ((u8 *) param_1 + 0xd4) = 0;
    *(u32 *) ((u8 *) param_1 + 0xd8) = 0;
    *(u32 *) ((u8 *) param_1 + 0xdc) = 0;
    *(u32 *) ((u8 *) param_1 + 0xc0) = 0;
}
