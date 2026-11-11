/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d8fa0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d8fa0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02150330;
extern void func_02027534(s32 p, u32 *buf);
extern s32 func_020695f0(s32 *a, u32 *b);
s32 func_0212243c(s32 param_1) {
    u32 buf[12];
    u32 b[3];
    s32 c[3];
    s32 v0;
    s32 v1;
    s32 v2;
    u32 t0;
    u32 t1;
    u32 t2;

    func_02027534(param_1, buf);
    t0   = buf[6];
    v0   = *(s32 *) ((u8 *) &data_02150330 + 0x4c);
    v1   = *(s32 *) ((u8 *) &data_02150330 + 0x58);
    v2   = *(s32 *) ((u8 *) &data_02150330 + 0x64);
    t1   = buf[7];
    t2   = buf[8];
    c[0] = v0;
    c[1] = v1;
    c[2] = v2;
    b[0] = t0;
    b[1] = t1;
    b[2] = t2;
    c[0] = -v0;
    c[1] = -v1;
    c[2] = -v2;
    return func_020695f0(c, b) > 0;
}
