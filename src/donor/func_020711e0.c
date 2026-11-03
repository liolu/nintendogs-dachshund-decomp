/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206f9e0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0206f9e0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_0207146c(void *p);
void func_020711e0(u16 param_1, u32 param_2) {
    struct {
        u32 a;
        u32 b;
        u16 c;
        u16 d;
        u32 pad;
        u32 e;
        u8 rest[136];
    } blk;
    blk.a = 2;
    blk.c = param_1;
    blk.e = param_2;
    func_0207146c(&blk);
}
